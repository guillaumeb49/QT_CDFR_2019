#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    connect(ui->btn_main_menu, SIGNAL(clicked(bool)), this, SLOT(close()));

    time_game_sec = 90;

    initial_position.x      = 0;
    initial_position.y      = 0;
    initial_position.teta   = 0;

    nb_point_to_go = 0;
    distance_warning = false;
    nb_distance_warning = 0;
    counter_S5 = 0;
    pince_out = false;
    timer_pince_out = 0;

    state_tirette = false;
    pendingTCP = false;
    set_position_transmission_started = false;
    waypointsOK = false;
    waypoints_transmission_started = false;

    // Define the QStateMachine
    state_machine = new QStateMachine();

    // Initial State
    QState *s0 = new QState();
    s0->assignProperty(ui->lbl_stateMachine, "text", "Waiting for the user to press Start Button (S0)");
    s0->assignProperty(state_machine, "state", 0);

    // Set QEI Position
    QState *s1 = new QState();
    s1->assignProperty(ui->lbl_stateMachine, "text", "Set QEI Position (S1)");
    s1->assignProperty(state_machine, "state", 1);

    // Load WayPoints
    QState *s2 = new QState();
    s2->assignProperty(ui->lbl_stateMachine, "text", "Loading Waypoints (S2)");
    s2->assignProperty(state_machine, "state", 2);

    // Wait for Tirette
    QState *s3 = new QState();
    s3->assignProperty(ui->lbl_stateMachine, "text", "Waiting for the Tirette (S3)");
    s3->assignProperty(state_machine, "state", 3);

    // Go !
    QState *s4 = new QState();
    s4->assignProperty(ui->lbl_stateMachine, "text", "Go! (S4)");
    s4->assignProperty(state_machine, "state", 4);

    // Manage Strategy
    QState *s5 = new QState();
    s5->assignProperty(ui->lbl_stateMachine, "text", "Manage Strategy (S5)");
    s5->assignProperty(state_machine, "state", 5);

    // Manage End Of Game (Disable all actuators)
    QState *s6 = new QState();
    s6->assignProperty(ui->lbl_stateMachine, "text", "Manage End Of Game(S6)");
    s6->assignProperty(state_machine, "state", 6);

    // Display results
    QState *s7 = new QState();
    s7->assignProperty(ui->lbl_stateMachine, "text", "Display results (S7)");
    s7->assignProperty(state_machine, "state", 7);

    // avoid Robots
    QState *s8 = new QState();
    s8->assignProperty(ui->lbl_stateMachine, "text", "Avoid Robot (S8)");
    s8->assignProperty(state_machine, "state", 7);


     // Wait for user click Next button
     state_machine->addState(s0);
     s0->addTransition(this, SIGNAL(F_TransistionUserReadyOK()), s1);


     // Wait for Position Set
     state_machine->addState(s1);
     s1->addTransition(this, SIGNAL(F_TransitionSetPosition_OK()), s2);

     // Wait for WayPoints Loaded
     state_machine->addState(s2);
     s2->addTransition(this, SIGNAL(F_TransistionStartWayPoints_OK()), s3);

     state_machine->addState(s3);
     s3->addTransition(this, SIGNAL(F_TransistionTiretteOK()), s4);

     state_machine->addState(s4);
     s4->addTransition(this, SIGNAL(F_TransistionStartGame_and_Go_OK()), s5);

     state_machine->addState(s5);
     s5->addTransition(this, SIGNAL(F_TransistionEndOfGame_OK()), s6);  // if End Of Game

     state_machine->addState(s6);
     s6->addTransition(this, SIGNAL(F_TransistionDisplayResults_OK()), s7);  // Once actuators are off

     state_machine->addState(s7); // Stays in S7
     s7->addTransition(this, SIGNAL(F_TransistionRestartOK()), s0); // start again

     state_machine->addState(s8); // Avoid Robot
     s8->addTransition(this, SIGNAL(), s5); // start again


     state_machine->setInitialState(s0);

     state_machine->start();

    timer_action = new QTimer();
    connect(timer_action, SIGNAL(timeout()), this, SLOT(ManageStateMachine()));

    timer_game = new QTimer();
    timer_game->setInterval(1000);  //1sec

    connect(timer_game, SIGNAL(timeout()), this, SLOT(F_UpdateTimer_game()));





}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::AddWaypointToList(int16_t x, int16_t y, int16_t theta)
{
    Localisation loc;

    loc.x = x;
    loc.y = y;
    loc.teta = theta;

    list_WayPoints.append(loc);
}

/**
 * @brief GameWindow::on_btn_start_game_clicked Main function that manage the game
 *
 */
void GameWindow::on_btn_start_game_clicked()
{
    // Wait for the tirette
    qDebug() << "Btn start pressed";

    // Get the color selected;

    if(ui->cb_color_selection->currentIndex() == 0)
    {
        // Yellow
        initial_position.x      = 100;
        initial_position.y      = -727;
        initial_position.teta   = 0;

        color_yellow = true;
        AddWaypointToList(200, -727, 0);
        AddWaypointToList(200, -1250, 0);
        AddWaypointToList(900, -1250, 0);
        AddWaypointToList(400, -850, 90);


    }
    else {
        // Purple
        initial_position.x      = 2900;
        initial_position.y      = -727;
        initial_position.teta   = 180;

        color_yellow = false;

        AddWaypointToList(2800, -727, 0);
        AddWaypointToList(2800, -1250, 0);
        AddWaypointToList(2300, -1250, 0);
        AddWaypointToList(2600, -850, 0);
    }


    ui->tabWidget->setCurrentIndex(1);

    timer_action->start(100);

    emit(F_TransistionUserReadyOK());
}

void GameWindow::ManageStateMachine()
{
       switch(state_machine->property("state").toInt())
        {
            case 0: // Initial State
                // transition = 1
                break;

            case 1: // Set the position of the Robot (enter only once)
                if(set_position_transmission_started == false)
                {
                    set_position_transmission_started = true;
                    emit(F_RequestSetPosition(initial_position.x, initial_position.y, initial_position.teta));
                }
                break;

            case 2: // Load WayPoints
                pendingTCP = true;

                qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";

                // Start WayPoints transmission
                if(waypoints_transmission_started == false)
                {
                    waypoints_transmission_started = true;
                    Localisation loc = list_WayPoints.first();   // get first point of the list
                    emit(F_RequestAddWayPoint(loc.x, loc.y, loc.teta));

                    list_WayPoints.removeFirst();   // Remove the point just sent
                }

                if(waypointsOK == true)
                {
                    // we can go to the next state
                    emit(F_TransistionStartWayPoints_OK());
                }

                break;

            case 3: // Wait for the tirette
                pendingTCP = true;
                qDebug() << "Update tirette status requested";
                if(state_tirette == false)
                {
                    emit(F_RequestUpdateTirette());
                }
                else {
                    emit(F_TransistionTiretteOK());
                }
                break;

            case 4: // Go
                qDebug() << "GO!";
                 qDebug() << "GO!";
                  qDebug() << "GO!";
                   qDebug() << "GO!";
                // Start Game Timer
                timer_game->start();

                emit(F_Request_Go());

                // Send Go to Enable waypoints following
               emit(F_TransistionStartGame_and_Go_OK());
                break;

            case 5: // Go
                qDebug() << "S5!!";
                emit(F_RequestUpdateGetInfo()); // every 100ms request info from the robot
                // Manage Waypoints (check if list of WayPoints is empty)
                if(distance_warning)
                {
                    counter_S5++;
                }
                else {
                    counter_S5 = 0;
                }


                /* Manage colisions (if distance < 30cm for 2 sec)
                    // --> Get the current WayPoint IDcounter_S5
                    // --> Delete all WayPoints
                    // --> Get Position
                    // --> Turn 180°
                    // --> Move forward 5 cm (if possible)
                    // Send a new list of Points
                 */
                // Send Go to Enable waypoints following

                break;

            case 6: // Manage End of Game
                emit(F_Request_Stop());
                emit(F_TransistionDisplayResults_OK());
                break;

            case 7: // Display results
                 ui->tabWidget->setCurrentIndex(2);
                timer_action->stop();

                emit(F_TransistionRestartOK());

                break;

           case 8: // Manage Avoid robot

                // Reset list

                // Turn 180°

                // Move forward


               emit(F_TransistionRestartOK());

               break;
        }
}

void GameWindow::F_UpdateTimer_game()
{
    time_game_sec--;
    ui->lcdNumber->display(time_game_sec);

    // Every second, update the robot position on the screen NO NEED ALREADY DONE INSIDE Switch case State Machine
   // emit(F_RequestUpdateGetPosition());

    if(time_game_sec == 1)
    {
        timer_game->stop();

        //emit end of game signal
        emit(F_TransistionEndOfGame_OK());

    }
}

void GameWindow::F_UpdateGetInfo(uint16_t x, uint16_t y, uint16_t theta, uint8_t nb_points, uint8_t distance_warning_rob)
{
    current_position.x = x;
    current_position.y = y;
    current_position.teta = theta;


    ui->lbl_x->setText(QString::number((int16_t)x));
    ui->lbl_y->setText(QString::number((int16_t)y));
    ui->lbl_theta->setText(QString::number((int16_t)theta));
    ui->lbl_nb_waypoints->setText(QString::number(nb_points));


    if(distance_warning_rob == 1)
    {
        ui->lbl_warning_distance->setStyleSheet("background-color:red");
        distance_warning = true;
        nb_distance_warning++;
    }
    else {
        ui->lbl_warning_distance->setStyleSheet("background-color:none");
        distance_warning = false;
        nb_distance_warning = 0;
    }

    nb_point_to_go = nb_points;

    // Avoid staying stuck

    // if we wait more than 2 seconds
    if(nb_distance_warning < 20)
    {
        // try to find a way out
            // Enter new state of State Machine
        // Reset List

    }

    // If there is no points
    if(nb_points == 0)
    {

        if(pince_out== false)
        {
            emit(F_RequestServo(1));
            pince_out=true;
            waypoints_transmission_started = false;
        }
        else if((pince_out== true) && (timer_pince_out >20)) {
            emit(F_RequestServo(0));
            pince_out = false;


            // Send new points.
            if(waypoints_transmission_started == false)
            {

                waypoints_transmission_started = true;

                if(color_yellow == true)
                {
                    AddWaypointToList(700, -900, 0);
                    AddWaypointToList(700, -450, 0);
                    AddWaypointToList(1250, -1050, 0);
                    AddWaypointToList(350, -900, 0);

                }
                else {
                   AddWaypointToList(2300, -900, 0);
                    AddWaypointToList(2000, -450, 0);
                    AddWaypointToList(1700, -1050, 0);
                    AddWaypointToList(2500, -900, 0);
                }



                Localisation loc = list_WayPoints.first();   // get first point of the list
                emit(F_RequestAddWayPoint(loc.x, loc.y, loc.teta));
            }
        }

        if(pince_out == true)
        {
            timer_pince_out++;
        }
        else {
            timer_pince_out = 0;
        }
    }
}

void GameWindow::F_UpdateTirette(uint16_t state)
{
    pendingTCP = false;
    qDebug() << "Answer from the STM32 Tirette state = "<<state;

    if(state == 0)
    {
       state_tirette = true;
       emit(F_TransistionTiretteOK());
    }
    else
    {
        //state_tirette = false;
    }
}

void GameWindow::F_UpdateSetPosition()
{
    pendingTCP = false;
    qDebug() << "Robot position is set-up";

    emit(F_TransitionSetPosition_OK());

}


/**
 * @brief GameWindow::F_UpdatePosition Update position of the robot (labels)
 * @param x
 * @param y
 * @param theta
 */
void GameWindow::F_UpdatePosition(uint16_t x,uint16_t y,uint16_t theta)
{
    ui->lbl_x->setText(QString::number(x));
    ui->lbl_y->setText(QString::number(y));
    ui->lbl_theta->setText(QString::number(theta));
}


void GameWindow::F_ManageAdditionWayPoints(uint16_t state)
{
    qDebug() << "F_ManageAdditionWayPoints begin";
    // Ok, let's add the next point
    Localisation loc;

    //if list is empty
    if(list_WayPoints.isEmpty() == true)
    {
         qDebug() << "WayPoints list is empty!";
        // List is empty, we can go to the next state
        waypointsOK = true;
    }
    else {
        loc = list_WayPoints.first();   // get first point of the list
        emit(F_RequestAddWayPoint(loc.x, loc.y, loc.teta));

        list_WayPoints.removeFirst();   // Remove the point just sent

    }
    qDebug() << "F_ManageAdditionWayPoints END";
}

void GameWindow::F_UpdateEnable_DisableAuto(uint16_t auto_on)
{
    qDebug() << "SLOT _UpdateEnable_DisableAuto, auto = " << auto_on;
}

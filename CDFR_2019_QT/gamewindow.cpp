#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    connect(ui->btn_main_menu, SIGNAL(clicked(bool)), this, SLOT(close()));

    time_game_sec = 100;

    initial_position.x      = 0;
    initial_position.y      = 0;
    initial_position.teta   = 0;

    nb_point_to_go = 0;
    distance_warning = false;
    nb_distance_warning = 0;
    counter_S5 = 0;
    pince_out = false;
    timer_pince_out = 0;
    current_state = 1;

    stop_ok = false;
    reset_ok = false;
    new_list_ok = false;
    start_ok = false;
    i_state_s5x = 0;

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


    // Executer tache 1
    QState *s51 = new QState();
    s51->assignProperty(ui->lbl_stateMachine, "text", "Recuperer Palet 1 (S51)");
    s51->assignProperty(state_machine, "state", 51);


    // Executer tache 2
    QState *s52 = new QState();
    s52->assignProperty(ui->lbl_stateMachine, "text", "Recuperer Palet Zone1 (S52)");
    s52->assignProperty(state_machine, "state", 52);

    // Executer tache 3
    QState *s53 = new QState();
    s53->assignProperty(ui->lbl_stateMachine, "text", "Recuperer Palets Zone2 (S53)");
    s53->assignProperty(state_machine, "state", 53);

    // Executer tache 4
    QState *s54 = new QState();
    s54->assignProperty(ui->lbl_stateMachine, "text", "Recuperer Palets Zone1 (S54)");
    s54->assignProperty(state_machine, "state", 54);


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
     s1->addTransition(this, SIGNAL(F_TransitionSetPosition_OK()), s3);

     // Wait for WayPoints Loaded
     state_machine->addState(s2);
     s2->addTransition(this, SIGNAL(F_TransistionStartWayPoints_OK()), s3);

     state_machine->addState(s3);
     s3->addTransition(this, SIGNAL(F_TransistionTiretteOK()), s4);

     state_machine->addState(s4);
     s4->addTransition(this, SIGNAL(F_TransistionStartGame_and_Go_OK()), s51);

     state_machine->addState(s5);
     s5->addTransition(this, SIGNAL(F_TransistionEndOfGame_OK()), s6);  // if End Of Game
     s5->addTransition(this, SIGNAL(F_TransistionToS51()), s51);  // Task 1
     s5->addTransition(this, SIGNAL(F_TransistionToS52()), s52);  // Task 2
     s5->addTransition(this, SIGNAL(F_TransistionToS53()), s53);  // Task 3
     s5->addTransition(this, SIGNAL(F_TransistionToS54()), s54);  // Task 4


     state_machine->addState(s51);
     s51->addTransition(this, SIGNAL(F_TransistionToManageStrategyOK()), s5);
     s51->addTransition(this, SIGNAL(F_TransistionEndOfGame_OK()), s6);             // End of Game

     state_machine->addState(s52);
     s52->addTransition(this, SIGNAL(F_TransistionToManageStrategyOK()), s5);
     s52->addTransition(this, SIGNAL(F_TransistionEndOfGame_OK()), s6);             // End of Game

     state_machine->addState(s53);
     s53->addTransition(this, SIGNAL(F_TransistionToManageStrategyOK()), s5);
     s53->addTransition(this, SIGNAL(F_TransistionEndOfGame_OK()), s6);             // End of Game

     state_machine->addState(s54);
     s54->addTransition(this, SIGNAL(F_TransistionToManageStrategyOK()), s5);
     s54->addTransition(this, SIGNAL(F_TransistionEndOfGame_OK()), s6);             // End of Game

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
      /*  AddWaypointToList(200, -727, 0);
        AddWaypointToList(200, -1250, 0);
        AddWaypointToList(900, -1250, 0);
        AddWaypointToList(400, -850, 90);
*/

    }
    else {
        // Purple
        initial_position.x      = 2900;
        initial_position.y      = -727;
        initial_position.teta   = 180;

        color_yellow = false;
/*
        AddWaypointToList(2800, -727, 0);
        AddWaypointToList(2800, -1250, 0);
        AddWaypointToList(2300, -1250, 0);
        AddWaypointToList(2600, -850, 0);
        */
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

              /*  qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";
                qDebug() << "Loading WayPoints!!!!";
*/
                // Start WayPoints transmission
             /*   if(waypoints_transmission_started == false)
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
                }*/

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
                emit(F_RequestUpdateGetInfo()); // every 100ms request info from the robot
                i_state_s5x = 0;
                if(distance_warning == true)
                {

                    // If obstacle detected
                    // Go to the next strategy
                    switch(current_state)
                    {
                        // emit transition to go to the next state
                        case 1:
                                current_state = 1;
                                qDebug() << "transition to S52";
                            emit(F_TransistionToS52()); // Go to state S52

                            break;

                        case 2:
                                current_state = 2;
                                qDebug() << "transition to S53";
                            emit(F_TransistionToS53()); // Go to state S53

                            break;

                        case 3:
                                current_state = 3;
                                qDebug() << "transition to S54";
                            emit(F_TransistionToS54()); // Go to state S54

                            break;

                        case 4:
                                current_state = 4;
                                qDebug() << "transition to S51";
                            emit(F_TransistionToS51());// Go to state S51

                            break;
                    }

                }
                else if(nb_point_to_go == 0)
                {
                    // ouvrir le servo
                }



            case 51: // Strategy
                F_Init_S51();
                break;

            case 52: // Strategy
                F_Init_S52();
                break;

            case 53: // Strategy
                F_Init_S53();
                break;

            case 54: // Strategy
                F_Init_S54();
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
  /*  if(nb_points == 0)
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


      /*      // Send new points.
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
            */
  /*      }
*/
        if(pince_out == true)
        {
            timer_pince_out++;
        }
        else {
            timer_pince_out = 0;
        }
    //}
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
        i_state_s5x++;  // next state

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
    i_state_s5x++;  // next state
}

void GameWindow::F_UpdateResetListWayPoints()
{
    i_state_s5x++;  // next state
}



void GameWindow::F_Init_S51(void)
{

    // if first time in this case --> stop auto, reset list, send new list, start auto

    switch (i_state_s5x)
    {
    case 0:  // send Stop
        if(stop_ok == false)
        {
            qDebug() << "F_Request_Stop";
             stop_ok = true;
             emit(F_Request_Stop());
        }
         break;

    case 1:  // send Reset List
        if(reset_ok == false)
        {
            qDebug() << "F_RequestResetListWayPoints";
             reset_ok = true;
             emit(F_RequestResetListWayPoints());
        }
         break;

    case 2: // Start to send New list
        if(new_list_ok == false)
        {
            qDebug() << "F_RequestAddWayPoint";
             new_list_ok = true;
             list_WayPoints.resize(0);
             if(color_yellow== true)
             {
                 AddWaypointToList(200, -727, 0);
                 AddWaypointToList(200, -1250, 0);
                 AddWaypointToList(900, -1250, 0);
                 AddWaypointToList(400, -850, 90);
             }
             else {
                 AddWaypointToList(2800, -727, 0);
                 AddWaypointToList(2800, -1250, 0);
                 AddWaypointToList(2300, -1250, 0);
                 AddWaypointToList(2600, -850, 0);
             }

             Localisation loc = list_WayPoints.first();   // get first point of the list
             emit(F_RequestAddWayPoint(loc.x, loc.y, loc.teta));

             list_WayPoints.removeFirst();   // Remove the point just sent
        }
         break;

    case 3: // Start Auto
        if(start_ok == false)
        {
             qDebug() << "F_Request_Go";
             start_ok = true;
              emit(F_Request_Go());
        }
         break;

    case 4: // Go to main Strategy State S5
         i_state_s5x = 0;
         qDebug() << "F_TransistionToManageStrategyOK";
         emit(F_TransistionToManageStrategyOK());
         break;
    }
}

/**
 * @brief GameWindow::F_Init_S52
 * Initialize and Manage Strategy 2
 */
void GameWindow::F_Init_S52()
{
    switch (i_state_s5x)
    {
    case 0:  // send Stop
        if(stop_ok == false)
        {
            qDebug() << "F_Request_Stop";
             stop_ok = true;
             emit(F_Request_Stop());
        }
         break;

    case 1:  // send Reset List
        if(reset_ok == false)
        {
            qDebug() << "F_RequestResetListWayPoints";
             reset_ok = true;
             emit(F_RequestResetListWayPoints());
        }
         break;

    case 2: // Start to send New list
        if(new_list_ok == false)
        {
            qDebug() << "F_RequestAddWayPoint";
             new_list_ok = true;
             list_WayPoints.resize(0);
             if(color_yellow== true)
             {
                 AddWaypointToList(1000, -600, 0);
                 AddWaypointToList(1400, -1100, 0);
                 AddWaypointToList(400, -900, 0);
             }
             else {
                 AddWaypointToList(2000, -600, 0);
                 AddWaypointToList(1600, -1100, 0);
                 AddWaypointToList(2600, -900, 0);
             }

             Localisation loc = list_WayPoints.first();   // get first point of the list
             emit(F_RequestAddWayPoint(loc.x, loc.y, loc.teta));

             list_WayPoints.removeFirst();   // Remove the point just sent
        }
         break;

    case 3: // Start Auto
        if(start_ok == false)
        {
             qDebug() << "F_Request_Go";
             start_ok = true;
              emit(F_Request_Go());
        }
         break;

    case 4: // Go to main Strategy State S5
         i_state_s5x = 0;
         qDebug() << "F_TransistionToManageStrategyOK";
         emit(F_TransistionToManageStrategyOK());
         break;
    }
}


/**
 * @brief GameWindow::F_Init_S53
 * Initialize and Manage Strategy 3
 */
void GameWindow::F_Init_S53()
{
    switch (i_state_s5x)
    {
    case 0:  // send Stop
        if(stop_ok == false)
        {
            qDebug() << "F_Request_Stop";
             stop_ok = true;
             emit(F_Request_Stop());
        }
         break;

    case 1:  // send Reset List
        if(reset_ok == false)
        {
            qDebug() << "F_RequestResetListWayPoints";
             reset_ok = true;
             emit(F_RequestResetListWayPoints());
        }
         break;

    case 2: // Start to send New list
        if(new_list_ok == false)
        {
            qDebug() << "F_RequestAddWayPoint";
             new_list_ok = true;
             list_WayPoints.resize(0);
             if(color_yellow== true)
             {
                 AddWaypointToList(2000, -600, 0);
                 AddWaypointToList(2400, -1100, 0);
                 AddWaypointToList(400, -900, 0);
             }
             else {
                 AddWaypointToList(1000, -600, 0);
                 AddWaypointToList(600, -1100, 0);
                 AddWaypointToList(2600, -900, 0);
             }

             Localisation loc = list_WayPoints.first();   // get first point of the list
             emit(F_RequestAddWayPoint(loc.x, loc.y, loc.teta));

             list_WayPoints.removeFirst();   // Remove the point just sent
        }
         break;

    case 3: // Start Auto
        if(start_ok == false)
        {
             qDebug() << "F_Request_Go";
             start_ok = true;
              emit(F_Request_Go());
        }
         break;

    case 4: // Go to main Strategy State S5
         i_state_s5x = 0;
         qDebug() << "F_TransistionToManageStrategyOK";
         emit(F_TransistionToManageStrategyOK());
         break;
    }
}


/**
 * @brief GameWindow::F_Init_S54
 * Initialize and Manage Strategy 4
 */
void GameWindow::F_Init_S54()
{
    switch (i_state_s5x)
    {
    case 0:  // send Stop
        if(stop_ok == false)
        {
            qDebug() << "F_Request_Stop";
             stop_ok = true;
             emit(F_Request_Stop());
        }
         break;

    case 1:  // send Reset List
        if(reset_ok == false)
        {
            qDebug() << "F_RequestResetListWayPoints";
             reset_ok = true;
             emit(F_RequestResetListWayPoints());
        }
         break;

    case 2: // Start to send New list
        if(new_list_ok == false)
        {
            qDebug() << "F_RequestAddWayPoint";
             new_list_ok = true;
             list_WayPoints.resize(0);
             if(color_yellow== true)
             {
                 AddWaypointToList(200, -727, 0);
                 AddWaypointToList(200, -1250, 0);
                 AddWaypointToList(900, -1250, 0);
                 AddWaypointToList(400, -850, 90);
             }
             else {
                 AddWaypointToList(2800, -727, 0);
                 AddWaypointToList(2800, -1250, 0);
                 AddWaypointToList(2300, -1250, 0);
                 AddWaypointToList(2600, -850, 0);
             }

             Localisation loc = list_WayPoints.first();   // get first point of the list
             emit(F_RequestAddWayPoint(loc.x, loc.y, loc.teta));

             list_WayPoints.removeFirst();   // Remove the point just sent
        }
         break;

    case 3: // Start Auto
        if(start_ok == false)
        {
             qDebug() << "F_Request_Go";
             start_ok = true;
              emit(F_Request_Go());
        }
         break;

    case 4: // Go to main Strategy State S5
         i_state_s5x = 0;
         qDebug() << "F_TransistionToManageStrategyOK";
         emit(F_TransistionToManageStrategyOK());
         break;
    }
}

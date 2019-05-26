#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    connect(ui->btn_main_menu, SIGNAL(clicked(bool)), this, SLOT(close()));

    time_game_sec = 90;


    state_tirette = false;
    pendingTCP = false;
    waypointsOK = false;
    waypoints_transmission_started = false;

    // Define the QStateMachine
    state_machine = new QStateMachine();

    // Initial State
    QState *s0 = new QState();
    s0->assignProperty(ui->lbl_stateMachine, "text", "Waiting for the user to press Start Button (S0)");
    s0->assignProperty(state_machine, "state", 0);

    // Load WayPoints
    QState *s1 = new QState();
    s1->assignProperty(ui->lbl_stateMachine, "text", "Loading Waypoints (S1)");
    s1->assignProperty(state_machine, "state", 1);

    // Wait for Tirette
    QState *s2 = new QState();
    s2->assignProperty(ui->lbl_stateMachine, "text", "Waiting for the Tirette (S2)");
    s2->assignProperty(state_machine, "state", 2);

    // Go !
    QState *s3 = new QState();
    s3->assignProperty(ui->lbl_stateMachine, "text", "Go! (S3)");
    s3->assignProperty(state_machine, "state", 3);

    // Manage Waypoints
    QState *s4 = new QState();
    s4->assignProperty(ui->lbl_stateMachine, "text", "Manage Waypoints (S4)");
    s4->assignProperty(state_machine, "state", 4);

     // Wait for user click Next button
     state_machine->addState(s0);
     s0->addTransition(this, SIGNAL(F_TransistionUserReadyOK()), s1);

     // Wait for WayPoints Loaded
     state_machine->addState(s1);
     s1->addTransition(this, SIGNAL(F_TransistionStartWayPoints_OK()), s2);

     state_machine->addState(s2);
     s2->addTransition(this, SIGNAL(F_TransistionTiretteOK()), s3);

     state_machine->addState(s3);
     s3->addTransition(this, SIGNAL(F_TransistionStartGame_and_Go_OK()), s4);

     state_machine->addState(s4);

     state_machine->setInitialState(s0);

     state_machine->start();

    timer_action = new QTimer();
    connect(timer_action, SIGNAL(timeout()), this, SLOT(ManageStateMachine()));

    timer_game = new QTimer();
    timer_game->setInterval(1000);  //1sec

    connect(timer_game, SIGNAL(timeout()), this, SLOT(F_UpdateTimer_game()));

    AddWaypointToList(0, 100, 0);
    AddWaypointToList(100, 100, 0);
    AddWaypointToList(100, 0, 0);
    AddWaypointToList(0, 0, 0);


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

    ui->tabWidget->setCurrentIndex(1);

    timer_action->start(50);

    emit(F_TransistionUserReadyOK());
}

void GameWindow::ManageStateMachine()
{
       switch(state_machine->property("state").toInt())
        {
            case 0: // Initial State
                // transition = 1
                break;

            case 1: // Load WayPoints
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

            case 2: // Wait for the tirette
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

            case 3: // Go
                qDebug() << "GO!";
                // Start Game Timer
                timer_game->start();
                // Send Go to Enable waypoints following
                emit(F_TransistionStartGame_and_Go_OK());
                break;

            case 4: // Go
                //qDebug() << "Update tirette status requested";
                // Send Go to Enable waypoints following

                break;
        }

}

void GameWindow::F_UpdateTimer_game()
{
    time_game_sec--;
    ui->lcdNumber->display(time_game_sec);
    if(time_game_sec == 0)
    {
        timer_game->stop();

        //emit end of game signal

    }
}

void GameWindow::F_UpdateTirette(uint16_t state)
{
    pendingTCP = false;
    qDebug() << "Answer from the STM32 Tirette state = "<<state;

    if(state == 1)
    {
       state_tirette = true;
       emit(F_TransistionTiretteOK());
    }
    else
    {
        //state_tirette = false;
    }
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

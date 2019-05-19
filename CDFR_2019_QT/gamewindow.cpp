#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    connect(ui->btn_main_menu, SIGNAL(clicked(bool)), this, SLOT(close()));



    state_tirette = true;
    pendingTCP = false;

    // Define the QStateMachine
    state_machine = new QStateMachine();

    // Initial State
    QState *s0 = new QState();
    s0->assignProperty(ui->lbl_stateMachine, "text", "Waiting for the Tirette (S0)");
    s0->assignProperty(state_machine, "state", 0);

    // Load WayPoints
    QState *s1 = new QState();
    s1->assignProperty(ui->lbl_stateMachine, "text", "In state S1");
    s1->assignProperty(state_machine, "state", 1);

    // Wait for Tirette
    QState *s2 = new QState();

    // Go !
    QState *s3 = new QState();

    // Manage Waypoints
    QState *s4 = new QState();

     state_machine->addState(s0);
     s0->addTransition(this, SIGNAL(F_TransistionTiretteOK()), s1);
     state_machine->addState(s1);
     state_machine->addState(s2);
     state_machine->addState(s3);
     state_machine->addState(s4);

     state_machine->setInitialState(s0);

     state_machine->start();

    timer_action = new QTimer();

    connect(timer_action, SIGNAL(timeout()), this, SLOT(ManageStateMachine()));

}

GameWindow::~GameWindow()
{
    delete ui;
}

/**
 * @brief GameWindow::on_btn_start_game_clicked Main function that manage the game
 *
 */
void GameWindow::on_btn_start_game_clicked()
{
    // Wait for the tirette
    qDebug() << "Waiting for the tirette";

    ui->tabWidget->setCurrentIndex(1);

    timer_action->start(50);

}

void GameWindow::ManageStateMachine()
{

    switch(state_machine->property("state");)
    {
        case 0:
        break;

    case 1:
        break;
    }


    // If request is pending (TCP)
    if(pendingTCP == false)
    {
        pendingTCP = true;
        qDebug() << "Request to update tirette status requested";
        emit(F_RequestUpdateTirette());
    }
    else
    {

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
        state_tirette = false;
    }
}

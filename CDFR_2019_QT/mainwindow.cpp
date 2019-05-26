#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    Settings_wind = new SettingsWindow();
    Info_wind = new InfoWindow();
    Test_wind = new TestWindow();
    Game_wind = new GameWindow();
    tcp_thread = new TCP_Thread();




    connect(ui->btn_info, SIGNAL(clicked(bool)), this, SLOT(openInfoWindow()));
    connect(ui->btn_settings, SIGNAL(clicked(bool)), this, SLOT(openSettingsWindow()));
    connect(ui->btn_test, SIGNAL(clicked(bool)), this, SLOT(openTestWindow()));
    connect(ui->btn_game, SIGNAL(clicked(bool)), this, SLOT(openGameWindow()));
    connect(Settings_wind, SIGNAL(Signal_quit_app()), this, SLOT(close()));

   connect(tcp_thread, SIGNAL(Update_LED(uint8_t, uint8_t, uint8_t)),Info_wind,SLOT(Update_LED(uint8_t,uint8_t,uint8_t)));
   connect(tcp_thread, SIGNAL(Update_Distance(uint16_t,uint16_t,uint16_t,uint16_t)),Test_wind,SLOT(Update_DistancesUI(uint16_t,uint16_t,uint16_t,uint16_t)));
   connect(tcp_thread, SIGNAL(Update_Position(uint16_t,uint16_t,uint16_t)),Test_wind,SLOT(Update_PositionUI(uint16_t,uint16_t,uint16_t)));



   // signal / slots connexion that are called from differents windows
   // TEST Windows
   connect(Test_wind, SIGNAL(Set_LED_RED_ON()),tcp_thread,SLOT(F_Set_LED_RED_ON()));
   connect(Test_wind, SIGNAL(Set_LED_GREEN_ON()),tcp_thread,SLOT(F_Set_LED_GREEN_ON()));
   connect(Test_wind, SIGNAL(Set_LED_BLUE_ON()),tcp_thread,SLOT(F_Set_LED_BLUE_ON()));

   connect(Test_wind, SIGNAL(Request_Distance_Update()),tcp_thread,SLOT(F_Get_Distances()));

   connect(Test_wind, SIGNAL(Request_Position_Update()),tcp_thread,SLOT(F_Get_Position()));

   connect(tcp_thread, SIGNAL(Update_StatusConnexionSTM32(uint8_t)),Settings_wind,SLOT(update_statusConnexionST(uint8_t)));
   connect(Settings_wind, SIGNAL(Signal_reconnectST()),tcp_thread,SLOT(F_ReconnectTCP()));

   connect(Game_wind, SIGNAL(F_RequestUpdateTirette()),tcp_thread,SLOT(F_Get_Tirette()));
   connect(tcp_thread, SIGNAL(Update_Tirette(uint16_t)),Game_wind,SLOT(F_UpdateTirette(uint16_t)));


   connect(Game_wind, SIGNAL(F_RequestAddWayPoint(int16_t, int16_t, int16_t)), tcp_thread,SLOT(F_Add_Waypoint(int16_t, int16_t, int16_t)));
   connect(tcp_thread, SIGNAL(Update_AddWayPoints(uint16_t)),Game_wind,SLOT(F_ManageAdditionWayPoints(uint16_t)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::openInfoWindow()
{

    tcp_thread->F_TCP_GetLED();
    Info_wind->show();
}

void MainWindow::openSettingsWindow()
{

    Settings_wind->show();
}

void MainWindow::openGameWindow()
{
    Game_wind->show();
}

/**
 * @brief MainWindow::DataReceived Handle Data reception over TCP
 */
void MainWindow::DataReceived()
{

}

void MainWindow::openTestWindow()
{
    Test_wind->show();
}

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
    tcp_thread = new TCP_Thread();

    connect(ui->btn_info, SIGNAL(clicked(bool)), this, SLOT(openInfoWindow()));
    connect(ui->btn_settings, SIGNAL(clicked(bool)), this, SLOT(openSettingsWindow()));
    connect(ui->btn_test, SIGNAL(clicked(bool)), this, SLOT(openTestWindow()));
    connect(Settings_wind, SIGNAL(Signal_quit_app()), this, SLOT(close()));

   connect(tcp_thread, SIGNAL(Update_LED(uint8_t, uint8_t, uint8_t)),Info_wind,SLOT(Update_LED(uint8_t,uint8_t,uint8_t)));

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

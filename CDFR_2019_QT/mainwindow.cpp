#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Settings_wind = new SettingsWindow();
    connect(ui->btn_info, SIGNAL(clicked(bool)), this, SLOT(openInfoWindow()));
    connect(ui->btn_settings, SIGNAL(clicked(bool)), this, SLOT(openSettingsWindow()));
    connect(Settings_wind, SIGNAL(Signal_quit_app()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::openInfoWindow()
{
    Info_wind = new InfoWindow();
    Info_wind->show();
}

void MainWindow::openSettingsWindow()
{

    Settings_wind->show();
}

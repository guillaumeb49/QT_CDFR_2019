#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btn_info, SIGNAL(clicked(bool)), this, SLOT(openInfoWindow()));
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

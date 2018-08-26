#include "settingswindow.h"
#include "ui_settingswindow.h"

SettingsWindow::SettingsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);
    connect(ui->btn_main_menu, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(ui->btn_exit, SIGNAL(clicked(bool)), this, SLOT(close_application()));
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}


void SettingsWindow::close_application(void)
{

    emit(Signal_quit_app());
    this->close();
}

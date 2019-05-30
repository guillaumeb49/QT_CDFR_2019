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
    QProcess process;
    process.startDetached("shutdown -P now");

    emit(Signal_quit_app());
    this->close();
}

void SettingsWindow::update_statusConnexionST(uint8_t status)
{
    if(status == 1)
    {
        ui->lbl_status_connexion_st->setText("Connected !!");
    }
    else
    {
        ui->lbl_status_connexion_st->setText("Not Connected ...");
    }
}

void SettingsWindow::on_btn_connect_stm32_clicked()
{
    emit(Signal_reconnectST());
}

void SettingsWindow::on_btn_close_clicked()
{
    emit(Signal_quit_app());
    this->close();
}

void SettingsWindow::on_pushButton_clicked()
{
    QProcess process;
    process.startDetached("./CDFR_2019_QT");

    emit(Signal_quit_app());
    this->close();
}

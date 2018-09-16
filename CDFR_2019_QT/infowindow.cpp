#include "infowindow.h"
#include "ui_info_window.h"

InfoWindow::InfoWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InfoWindow)
{
    ui->setupUi(this);
    connect(ui->btn_main_menu, SIGNAL(clicked(bool)), this, SLOT(close()));

    // Get current IP Address

    QNetworkInterface wlan0_ip = QNetworkInterface::interfaceFromName("wlan0");
    QList<QNetworkAddressEntry> entries = wlan0_ip.addressEntries();
    if (!entries.isEmpty()) {
        QNetworkAddressEntry entry = entries.first();
        ui->lbl_ip->setText(entry.ip().toString());
    }



}

InfoWindow::~InfoWindow()
{
    delete ui;
}

void InfoWindow::Update_LED(uint8_t r,uint8_t g,uint8_t b)
{
    if(r == 0)
    {
        ui->lbl_led_red->setStyleSheet("background-color:rgb(239, 239, 239);");
    }
    else if(r == 1)
    {
        ui->lbl_led_red->setStyleSheet("background-color:rgb(244, 67, 54);");
    }

    if(g == 0)
    {
        ui->lbl_led_green->setStyleSheet("background-color:rgb(239, 239, 239);");
    }
    else if(g == 1)
    {
        ui->lbl_led_green->setStyleSheet("background-color:rgb(76, 175, 80);");
    }

    if(b == 0)
    {
        ui->lbl_led_blue->setStyleSheet("background-color:rgb(239, 239, 239);");
    }
    else if(b == 1)
    {
        ui->lbl_led_blue->setStyleSheet("background-color:rgb(33, 150, 243);");
    }

}

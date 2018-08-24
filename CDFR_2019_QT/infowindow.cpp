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

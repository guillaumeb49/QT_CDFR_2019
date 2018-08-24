#ifndef INFOWINDOW_H
#define INFOWINDOW_H

#include <QMainWindow>
#include "ui_infowindow.h"
#include <QNetworkInterface>


namespace Ui {
class InfoWindow;
}

class InfoWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InfoWindow(QWidget *parent = 0);
    ~InfoWindow();

private:
    Ui::InfoWindow *ui;
};

#endif // INFOWINDOW_H
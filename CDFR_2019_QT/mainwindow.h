#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "infowindow.h"
#include "settingswindow.h"
#include "testwindow.h"
#include "tcp_thread.h"
#include "gamewindow.h"
#include <iostream>
#include <QDebug>

#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    InfoWindow *Info_wind;
    SettingsWindow *Settings_wind;
    TestWindow *Test_wind;
    GameWindow *Game_wind;
    TCP_Thread *tcp_thread;

    QTcpSocket *socket;

public slots:
   void openInfoWindow();
   void openSettingsWindow();
   void openGameWindow();
   void DataReceived();
private slots:
   void openTestWindow();
};

#endif // MAINWINDOW_H

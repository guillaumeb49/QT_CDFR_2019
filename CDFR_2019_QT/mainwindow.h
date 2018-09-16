#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "infowindow.h"
#include "settingswindow.h"
#include "tcp_thread.h"
#include <iostream>
#include <QDebug>
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
    TCP_Thread *tcp_thread;
public slots:
   void openInfoWindow();
   void openSettingsWindow();
};

#endif // MAINWINDOW_H

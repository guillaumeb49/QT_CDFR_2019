#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "infowindow.h"
#include "settingswindow.h"

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

public slots:
   void openInfoWindow();
   void openSettingsWindow();
};

#endif // MAINWINDOW_H

#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QStateMachine>

#include <QDebug>
#include <QTimer>

#include "ingamedialog.h"


struct localisation {
    int16_t x;
    int16_t y;
    int16_t teta;
};
typedef struct localisation Localisation;


namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();

private:
    void AddWaypointToList(int16_t x,int16_t y,int16_t theta);

private slots:
    void on_btn_start_game_clicked();
    void ManageStateMachine();

public slots:

     void F_UpdateTimer_game();
     void F_UpdateTirette(uint16_t state);

     void F_ManageAdditionWayPoints(uint16_t state);

signals:
    void F_RequestUpdateTirette();

    void F_RequestAddWayPoint(int16_t x, int16_t y, int16_t theta);

    void F_TransistionUserReadyOK();
    void F_TransistionTiretteOK();
    void F_TransistionStartWayPoints_OK();
    void F_TransistionStartGame_and_Go_OK();

private:
    Ui::GameWindow *ui;
    QStateMachine *state_machine;
    bool state_tirette;
    QTimer *timer_action;
    bool pendingTCP;
    QTimer *timer_game;
    uint8_t time_game_sec;

    bool waypointsOK;
    bool waypoints_transmission_started;

    QVector <Localisation> list_WayPoints;

};

#endif // GAMEWINDOW_H

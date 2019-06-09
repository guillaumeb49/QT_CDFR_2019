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
    void F_Init_S51(void);
    void F_Init_S52(void);
    void F_Init_S521(void);
    void F_Init_S53(void);
    void F_Init_S54(void);
    void F_Init_S55(void);
    void F_Init_S56(void);
    void F_Init_S57(void);
    void F_Init_S58(void);

private slots:
    void on_btn_start_game_clicked();
    void ManageStateMachine();

public slots:

     void F_UpdateTimer_game();

     void F_UpdateGetInfo(uint16_t x, uint16_t y, uint16_t theta, uint8_t nb_points, uint8_t distance_warning_rob);

     void F_UpdateTirette(uint16_t state);

     void F_UpdatePosition(uint16_t x, uint16_t y, uint16_t theta);
     void F_UpdateSetPosition();

     void F_ManageAdditionWayPoints(uint16_t state);

     void F_UpdateEnable_DisableAuto(uint16_t);
     void F_UpdateResetListWayPoints();

signals:
    void F_RequestUpdateTirette();

    void F_RequestSetPosition(int16_t x, int16_t y, int16_t theta);

    void F_RequestUpdateGetInfo();

    void F_RequestUpdateGetPosition();

    void F_RequestAddWayPoint(int16_t x, int16_t y, int16_t theta);


    void F_TransistionUserReadyOK();
    void F_TransistionRestartOK();

    void F_TransitionSetPosition_OK();

    void F_TransistionTiretteOK();
    void F_TransistionStartWayPoints_OK();
    void F_TransistionStartGame_and_Go_OK();
    void F_TransistionToS51();
    void F_TransistionToS52();
    void F_TransistionToS521();
    void F_TransistionToS53();
    void F_TransistionToS54();
    void F_TransistionToS55();
    void F_TransistionToS56();
    void F_TransistionToS57();
    void F_TransistionToS58();

    void F_TransistionToManageStrategyOK();

    void F_Request_Go();
    void F_Request_Stop();
    void F_RequestResetListWayPoints();

    void F_RequestServo(uint8_t);

    void F_TransistionEndOfGame_OK();
    void F_TransistionDisplayResults_OK();



private:
    Ui::GameWindow *ui;
    QStateMachine *state_machine;
    bool state_tirette;
    QTimer *timer_action;
    bool pendingTCP;
    QTimer *timer_game;
    uint8_t time_game_sec;

    bool set_position_transmission_started;
    bool waypointsOK;
    bool waypoints_transmission_started;

    QVector <Localisation> list_WayPoints;
    Localisation initial_position;
    Localisation current_position;

    uint8_t nb_point_to_go;
    bool distance_warning;

    uint16_t nb_distance_warning;
    uint16_t counter_S5;

    bool pince_out;
    uint16_t timer_pince_out;
    bool color_yellow;

    uint8_t current_state;
     bool stop_ok;
     bool reset_ok;
     bool new_list_ok;
     bool start_ok;
     uint8_t i_state_s5x ;



};

#endif // GAMEWINDOW_H

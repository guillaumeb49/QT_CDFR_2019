#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QStateMachine>

#include <QDebug>
#include <QTimer>

#include "ingamedialog.h"

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();

private slots:
    void on_btn_start_game_clicked();
    void ManageStateMachine();

public slots:
    void F_UpdateTirette(uint16_t state);

signals:
    void F_RequestUpdateTirette();
    void F_TransistionTiretteOK();

private:
    Ui::GameWindow *ui;
    QStateMachine *state_machine;
    bool state_tirette;
    QTimer *timer_action;
    bool pendingTCP;
    InGameDialog *UIGameDialog;
};

#endif // GAMEWINDOW_H

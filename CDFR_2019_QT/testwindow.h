#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>

namespace Ui {
class TestWindow;
}

class TestWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestWindow(QWidget *parent = 0);
    ~TestWindow();

private slots:
    void on_btn_red1_clicked();

    void on_btn_blue_clicked();

    void on_btn_green_clicked();

    void on_tabWidget_currentChanged(int index);

public slots:
    void Update_DistancesUI(uint16_t,uint16_t,uint16_t,uint16_t);
    void Distance_Update();
signals:

    void Set_LED_RED_ON();
    void Set_LED_GREEN_ON();
    void Set_LED_BLUE_ON();
    void Request_Distance_Update();

private:
    Ui::TestWindow *ui;
    QTimer * timer_1_s;
};

#endif // TESTWINDOW_H

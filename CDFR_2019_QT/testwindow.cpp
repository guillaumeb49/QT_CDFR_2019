#include "testwindow.h"
#include "ui_testwindow.h"

TestWindow::TestWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestWindow)
{
    ui->setupUi(this);

    timer_1_s = new QTimer(this);
    timer_1_s_position = new QTimer(this);

    connect(ui->btn_main_menu, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(timer_1_s, SIGNAL(timeout()), this, SLOT(Distance_Update()));
    connect(timer_1_s_position, SIGNAL(timeout()), this, SLOT(Position_Update()));
}

TestWindow::~TestWindow()
{
    delete ui;
}

void TestWindow::on_btn_red1_clicked()
{
    emit(Set_LED_RED_ON());
}

void TestWindow::on_btn_blue_clicked()
{
    emit(Set_LED_BLUE_ON());
}

void TestWindow::on_btn_green_clicked()
{
    emit(Set_LED_GREEN_ON());
}

void TestWindow::on_tabWidget_currentChanged(int index)
{
    qDebug() << "Index : "<<index;

    // If the current page is Distance
    if(index == 1)
    {
        // launch the timer to udpdate the distance every seconds
        timer_1_s_position->stop();
        timer_1_s->start(1000);

    }
    else if(index == 2)
    {
        // launch the timer to udpdate the distance every seconds
        timer_1_s->stop();
        timer_1_s_position->start(1000);

    }
    else
    {
        //else stop the timer
        timer_1_s->stop();
        timer_1_s_position->stop();
    }
}

void TestWindow::Update_DistancesUI(uint16_t capteur1, uint16_t capteur2, uint16_t capteur3, uint16_t capteur4)
{
qDebug() << "INSIDE Update_Distance ";
    ui->lbl_distance_sensor1->setText(QString::number(capteur1));
    ui->lbl_distance_sensor2->setText(QString::number(capteur2));
    ui->lbl_distance_sensor3->setText(QString::number(capteur3));
    ui->lbl_distance_sensor4->setText(QString::number(capteur4));
}

void TestWindow::Distance_Update()
{
    qDebug() << "INSIDE SLOT every 1s";
    emit(Request_Distance_Update());
}

void TestWindow::Position_Update()
{
    qDebug() << "INSIDE SLOT POSITION every 1s";
    emit(Request_Position_Update());
}

void TestWindow::Update_PositionUI(uint16_t x, uint16_t y, uint16_t theta)
{
    ui->lbl_x->setText(QString::number((int16_t)x));
    ui->lbl_y->setText(QString::number((int16_t)y));
    ui->lbl_theta->setText(QString::number((int16_t)theta));
}



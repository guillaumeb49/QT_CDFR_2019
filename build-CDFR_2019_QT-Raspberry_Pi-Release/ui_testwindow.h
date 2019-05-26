/********************************************************************************
** Form generated from reading UI file 'testwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWINDOW_H
#define UI_TESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QPushButton *btn_main_menu;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_red1;
    QPushButton *btn_blue;
    QLabel *label_2;
    QPushButton *btn_green;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_2;
    QLabel *lbl_distance_sensor4;
    QLabel *label_10;
    QLabel *lbl_distance_sensor1;
    QLabel *label_15;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *lbl_distance_sensor3;
    QLabel *lbl_distance_sensor2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_9;
    QWidget *tab_3;
    QWidget *horizontalLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *lbl_x;
    QLabel *label_13;
    QLabel *lbl_y;
    QLabel *lbl_theta;
    QWidget *tab_4;
    QWidget *tab_6;
    QPushButton *pushButton_5;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QWidget *tab_5;
    QScrollArea *scrollArea_debug;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *TestWindow)
    {
        if (TestWindow->objectName().isEmpty())
            TestWindow->setObjectName(QStringLiteral("TestWindow"));
        TestWindow->resize(480, 320);
        centralwidget = new QWidget(TestWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 260, 50, 51));
        label->setStyleSheet(QStringLiteral("color:rgb(138, 226, 52);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/icon/images/baseline_build_black_48dp.png")));
        label->setScaledContents(true);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 486, 57));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        btn_main_menu = new QPushButton(gridLayoutWidget_2);
        btn_main_menu->setObjectName(QStringLiteral("btn_main_menu"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/images/baseline_home_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_main_menu->setIcon(icon);
        btn_main_menu->setIconSize(QSize(32, 32));
        btn_main_menu->setFlat(true);

        gridLayout_4->addWidget(btn_main_menu, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/images/baseline_link_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon1);
        pushButton_12->setIconSize(QSize(32, 32));
        pushButton_12->setCheckable(false);
        pushButton_12->setFlat(true);

        gridLayout_4->addWidget(pushButton_12, 0, 0, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/images/baseline_battery_80_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon2);
        pushButton_13->setIconSize(QSize(32, 32));
        pushButton_13->setFlat(true);

        gridLayout_4->addWidget(pushButton_13, 0, 2, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 60, 481, 261));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 151, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_red1 = new QPushButton(gridLayoutWidget);
        btn_red1->setObjectName(QStringLiteral("btn_red1"));
        btn_red1->setAutoFillBackground(false);
        btn_red1->setStyleSheet(QStringLiteral("background-color:red;"));
        btn_red1->setFlat(false);

        gridLayout->addWidget(btn_red1, 2, 0, 1, 1);

        btn_blue = new QPushButton(gridLayoutWidget);
        btn_blue->setObjectName(QStringLiteral("btn_blue"));
        btn_blue->setStyleSheet(QStringLiteral("background-color:blue;"));

        gridLayout->addWidget(btn_blue, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setScaledContents(false);

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        btn_green = new QPushButton(gridLayoutWidget);
        btn_green->setObjectName(QStringLiteral("btn_green"));
        btn_green->setStyleSheet(QStringLiteral("background-color:green;"));

        gridLayout->addWidget(btn_green, 4, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 50));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 50));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget_3 = new QWidget(tab_2);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 42, 410, 181));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_distance_sensor4 = new QLabel(gridLayoutWidget_3);
        lbl_distance_sensor4->setObjectName(QStringLiteral("lbl_distance_sensor4"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbl_distance_sensor4->setFont(font);

        gridLayout_2->addWidget(lbl_distance_sensor4, 2, 3, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 0, 2, 1, 1);

        lbl_distance_sensor1 = new QLabel(gridLayoutWidget_3);
        lbl_distance_sensor1->setObjectName(QStringLiteral("lbl_distance_sensor1"));
        lbl_distance_sensor1->setFont(font);

        gridLayout_2->addWidget(lbl_distance_sensor1, 2, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 0, 3, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 1, 1, 1);

        lbl_distance_sensor3 = new QLabel(gridLayoutWidget_3);
        lbl_distance_sensor3->setObjectName(QStringLiteral("lbl_distance_sensor3"));
        lbl_distance_sensor3->setFont(font);

        gridLayout_2->addWidget(lbl_distance_sensor3, 2, 2, 1, 1);

        lbl_distance_sensor2 = new QLabel(gridLayoutWidget_3);
        lbl_distance_sensor2->setObjectName(QStringLiteral("lbl_distance_sensor2"));
        lbl_distance_sensor2->setFont(font);

        gridLayout_2->addWidget(lbl_distance_sensor2, 2, 1, 1, 1);

        line = new QFrame(gridLayoutWidget_3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 1, 1, 1);

        line_2 = new QFrame(gridLayoutWidget_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 1, 2, 1, 1);

        line_3 = new QFrame(gridLayoutWidget_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 1, 3, 1, 1);

        line_4 = new QFrame(gridLayoutWidget_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 1, 0, 1, 1);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 0, 40, 40));
        label_9->setAutoFillBackground(true);
        label_9->setStyleSheet(QStringLiteral(""));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/new/icon/images/baseline_rss_feed_black_48dp.png")));
        label_9->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayoutWidget = new QWidget(tab_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 100, 391, 86));
        gridLayout_3 = new QGridLayout(horizontalLayoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font1;
        font1.setPointSize(16);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        label_11 = new QLabel(horizontalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_11, 0, 1, 1, 1);

        lbl_x = new QLabel(horizontalLayoutWidget);
        lbl_x->setObjectName(QStringLiteral("lbl_x"));
        QFont font2;
        font2.setPointSize(14);
        lbl_x->setFont(font2);
        lbl_x->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbl_x, 1, 0, 1, 1);

        label_13 = new QLabel(horizontalLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_13, 0, 2, 1, 1);

        lbl_y = new QLabel(horizontalLayoutWidget);
        lbl_y->setObjectName(QStringLiteral("lbl_y"));
        lbl_y->setFont(font2);
        lbl_y->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbl_y, 1, 1, 1, 1);

        lbl_theta = new QLabel(horizontalLayoutWidget);
        lbl_theta->setObjectName(QStringLiteral("lbl_theta"));
        lbl_theta->setFont(font2);
        lbl_theta->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbl_theta, 1, 2, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButton_5 = new QPushButton(tab_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 30, 131, 61));
        label_16 = new QLabel(tab_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 10, 131, 21));
        label_17 = new QLabel(tab_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 40, 131, 21));
        label_18 = new QLabel(tab_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(40, 70, 131, 21));
        tabWidget->addTab(tab_6, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        scrollArea_debug = new QScrollArea(tab_5);
        scrollArea_debug->setObjectName(QStringLiteral("scrollArea_debug"));
        scrollArea_debug->setGeometry(QRect(0, 0, 421, 231));
        scrollArea_debug->setAutoFillBackground(true);
        scrollArea_debug->setStyleSheet(QLatin1String("background-color:black;\n"
"color:green;"));
        scrollArea_debug->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 419, 229));
        scrollArea_debug->setWidget(scrollAreaWidgetContents);
        pushButton_4 = new QPushButton(tab_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(425, 10, 40, 25));
        tabWidget->addTab(tab_5, QString());
        TestWindow->setCentralWidget(centralwidget);
        gridLayoutWidget_2->raise();
        tabWidget->raise();
        label->raise();

        retranslateUi(TestWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestWindow)
    {
        TestWindow->setWindowTitle(QApplication::translate("TestWindow", "MainWindow", nullptr));
        label->setText(QString());
        btn_main_menu->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        btn_red1->setText(QString());
        btn_blue->setText(QString());
        label_2->setText(QString());
        btn_green->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("TestWindow", "INPUT", nullptr));
        label_6->setText(QApplication::translate("TestWindow", "OUTPUT", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TestWindow", "LED", nullptr));
        lbl_distance_sensor4->setText(QApplication::translate("TestWindow", "<html><head/><body><p align=\"center\">XXX cm</p></body></html>", nullptr));
        label_10->setText(QApplication::translate("TestWindow", "<html><head/><body><p align=\"center\">Capteur n\302\2603<br/>(0x14)</p></body></html>", nullptr));
        lbl_distance_sensor1->setText(QApplication::translate("TestWindow", "<html><head/><body><p align=\"center\">XXX cm</p></body></html>", nullptr));
        label_15->setText(QApplication::translate("TestWindow", "<html><head/><body><p align=\"center\">Capteur n\302\2604<br/>(0x16)</p></body></html>", nullptr));
        label_8->setText(QApplication::translate("TestWindow", "<html><head/><body><p align=\"center\">Capteur n\302\2601<br/>(0x10)</p></body></html>", nullptr));
        label_7->setText(QApplication::translate("TestWindow", "<html><head/><body><p align=\"center\">Capteur n\302\2602<br/>(0x12)</p></body></html>", nullptr));
        lbl_distance_sensor3->setText(QApplication::translate("TestWindow", "<html><head/><body><p align=\"center\">XXX cm</p></body></html>", nullptr));
        lbl_distance_sensor2->setText(QApplication::translate("TestWindow", "<html><head/><body><p align=\"center\">XXX cm</p></body></html>", nullptr));
        label_9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TestWindow", "Distance", nullptr));
        label_12->setText(QApplication::translate("TestWindow", "Y", nullptr));
        label_11->setText(QApplication::translate("TestWindow", "X", nullptr));
        lbl_x->setText(QApplication::translate("TestWindow", "0", nullptr));
        label_13->setText(QApplication::translate("TestWindow", "Theta", nullptr));
        lbl_y->setText(QApplication::translate("TestWindow", "0", nullptr));
        lbl_theta->setText(QApplication::translate("TestWindow", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("TestWindow", "Position", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("TestWindow", "Servo", nullptr));
        pushButton_5->setText(QApplication::translate("TestWindow", "Send Test", nullptr));
        label_16->setText(QApplication::translate("TestWindow", "1. GET LED", nullptr));
        label_17->setText(QApplication::translate("TestWindow", "2. SET LED", nullptr));
        label_18->setText(QApplication::translate("TestWindow", "3. GET LED", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("TestWindow", "Test", nullptr));
        pushButton_4->setText(QApplication::translate("TestWindow", "Clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("TestWindow", "Debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestWindow: public Ui_TestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWINDOW_H

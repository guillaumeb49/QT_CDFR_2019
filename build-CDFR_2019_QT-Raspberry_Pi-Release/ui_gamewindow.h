/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QPushButton *btn_main_menu;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLabel *bl_icon_game;
    QTabWidget *tabWidget;
    QWidget *tab_set_up;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *cb_color_selection;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *btn_start_game;
    QWidget *tab_game;
    QLabel *lbl_stateMachine;
    QLCDNumber *lcdNumber;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_2;
    QLabel *label_19;
    QLabel *label_16;
    QLabel *lbl_x;
    QLabel *lbl_y;
    QLabel *lbl_theta;
    QLabel *label_10;
    QLabel *label_20;
    QLabel *lbl_strategy;
    QLabel *lbl_warning_distance;
    QWidget *tab_end_game;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_3;
    QLabel *label_11;
    QLabel *label_15;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *lbl_points_tot;
    QLabel *label_17;
    QLabel *label_18;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->resize(480, 320);
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 480, 57));
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

        bl_icon_game = new QLabel(centralwidget);
        bl_icon_game->setObjectName(QStringLiteral("bl_icon_game"));
        bl_icon_game->setEnabled(true);
        bl_icon_game->setGeometry(QRect(420, 40, 51, 51));
        bl_icon_game->setPixmap(QPixmap(QString::fromUtf8(":/new/icon/images/baseline_play_circle_outline_white_48dp.png")));
        bl_icon_game->setScaledContents(true);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 60, 481, 261));
        tabWidget->setTabPosition(QTabWidget::North);
        tab_set_up = new QWidget();
        tab_set_up->setObjectName(QStringLiteral("tab_set_up"));
        gridLayoutWidget = new QWidget(tab_set_up);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 421, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 1, 1, 1);

        cb_color_selection = new QComboBox(gridLayoutWidget);
        cb_color_selection->addItem(QString());
        cb_color_selection->addItem(QString());
        cb_color_selection->setObjectName(QStringLiteral("cb_color_selection"));

        gridLayout->addWidget(cb_color_selection, 0, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 3, 1, 1, 1);

        btn_start_game = new QPushButton(tab_set_up);
        btn_start_game->setObjectName(QStringLiteral("btn_start_game"));
        btn_start_game->setGeometry(QRect(430, 160, 41, 61));
        tabWidget->addTab(tab_set_up, QString());
        tab_game = new QWidget();
        tab_game->setObjectName(QStringLiteral("tab_game"));
        lbl_stateMachine = new QLabel(tab_game);
        lbl_stateMachine->setObjectName(QStringLiteral("lbl_stateMachine"));
        lbl_stateMachine->setGeometry(QRect(3, 180, 471, 41));
        lbl_stateMachine->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(tab_game);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(13, 10, 311, 171));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(2);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("value", QVariant(90));
        gridLayoutWidget_3 = new QWidget(tab_game);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(270, 0, 214, 191));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(gridLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_19, 2, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_16, 1, 0, 1, 1);

        lbl_x = new QLabel(gridLayoutWidget_3);
        lbl_x->setObjectName(QStringLiteral("lbl_x"));
        QFont font1;
        font1.setPointSize(14);
        lbl_x->setFont(font1);
        lbl_x->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbl_x, 0, 1, 1, 1);

        lbl_y = new QLabel(gridLayoutWidget_3);
        lbl_y->setObjectName(QStringLiteral("lbl_y"));
        lbl_y->setFont(font1);
        lbl_y->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbl_y, 1, 1, 1, 1);

        lbl_theta = new QLabel(gridLayoutWidget_3);
        lbl_theta->setObjectName(QStringLiteral("lbl_theta"));
        lbl_theta->setFont(font1);
        lbl_theta->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbl_theta, 2, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font);

        gridLayout_2->addWidget(label_20, 3, 0, 1, 1);

        lbl_strategy = new QLabel(gridLayoutWidget_3);
        lbl_strategy->setObjectName(QStringLiteral("lbl_strategy"));
        lbl_strategy->setFont(font1);

        gridLayout_2->addWidget(lbl_strategy, 3, 1, 1, 1);

        lbl_warning_distance = new QLabel(tab_game);
        lbl_warning_distance->setObjectName(QStringLiteral("lbl_warning_distance"));
        lbl_warning_distance->setGeometry(QRect(-10, 221, 491, 20));
        lbl_warning_distance->setAutoFillBackground(false);
        lbl_warning_distance->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tab_game, QString());
        tab_end_game = new QWidget();
        tab_end_game->setObjectName(QStringLiteral("tab_end_game"));
        gridLayoutWidget_4 = new QWidget(tab_end_game);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(-1, -1, 421, 231));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox_3 = new QCheckBox(gridLayoutWidget_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setEnabled(true);
        checkBox_3->setCheckable(true);
        checkBox_3->setChecked(true);

        gridLayout_3->addWidget(checkBox_3, 2, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_15, 4, 1, 1, 1);

        checkBox_4 = new QCheckBox(gridLayoutWidget_4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setEnabled(true);
        checkBox_4->setLayoutDirection(Qt::LeftToRight);
        checkBox_4->setCheckable(false);

        gridLayout_3->addWidget(checkBox_4, 1, 0, 1, 1);

        checkBox_2 = new QCheckBox(gridLayoutWidget_4);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setEnabled(true);
        checkBox_2->setCheckable(true);
        checkBox_2->setChecked(true);

        gridLayout_3->addWidget(checkBox_2, 3, 0, 1, 1);

        checkBox = new QCheckBox(gridLayoutWidget_4);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setCheckable(true);
        checkBox->setChecked(true);

        gridLayout_3->addWidget(checkBox, 4, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_12, 1, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_14, 3, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_13, 2, 1, 1, 1);

        lbl_points_tot = new QLabel(gridLayoutWidget_4);
        lbl_points_tot->setObjectName(QStringLiteral("lbl_points_tot"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        lbl_points_tot->setFont(font2);
        lbl_points_tot->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lbl_points_tot, 5, 1, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_17, 5, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_18, 0, 1, 1, 1);

        tabWidget->addTab(tab_end_game, QString());
        GameWindow->setCentralWidget(centralwidget);

        retranslateUi(GameWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "MainWindow", nullptr));
        btn_main_menu->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        bl_icon_game->setText(QString());
        label_2->setText(QApplication::translate("GameWindow", "Tirette ?", nullptr));
        label_3->setText(QApplication::translate("GameWindow", "Connexion ST", nullptr));
        label_4->setText(QApplication::translate("GameWindow", "Position", nullptr));
        label->setText(QApplication::translate("GameWindow", "Choose the Color : ", nullptr));
        label_5->setText(QApplication::translate("GameWindow", "Capteurs", nullptr));
        label_6->setText(QApplication::translate("GameWindow", "0;0;0;0", nullptr));
        cb_color_selection->setItemText(0, QApplication::translate("GameWindow", "Yellow", nullptr));
        cb_color_selection->setItemText(1, QApplication::translate("GameWindow", "Purple", nullptr));

        label_7->setText(QApplication::translate("GameWindow", "Ready!", nullptr));
        label_8->setText(QApplication::translate("GameWindow", "OK", nullptr));
        label_9->setText(QApplication::translate("GameWindow", "X: 0 Y: 0", nullptr));
        btn_start_game->setText(QApplication::translate("GameWindow", "Next", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_set_up), QApplication::translate("GameWindow", "Set-Up", nullptr));
        lbl_stateMachine->setText(QApplication::translate("GameWindow", "State Machine", nullptr));
        label_19->setText(QApplication::translate("GameWindow", "Theta", nullptr));
        label_16->setText(QApplication::translate("GameWindow", "Y", nullptr));
        lbl_x->setText(QString());
        lbl_y->setText(QString());
        lbl_theta->setText(QString());
        label_10->setText(QApplication::translate("GameWindow", "X", nullptr));
        label_20->setText(QApplication::translate("GameWindow", "Strategy", nullptr));
        lbl_strategy->setText(QString());
        lbl_warning_distance->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_game), QApplication::translate("GameWindow", "Game!", nullptr));
        checkBox_3->setText(QApplication::translate("GameWindow", "Atomes tableau p\303\251riodique", nullptr));
        label_11->setText(QApplication::translate("GameWindow", "Actions r\303\251alis\303\251es", nullptr));
        label_15->setText(QApplication::translate("GameWindow", "15", nullptr));
        checkBox_4->setText(QApplication::translate("GameWindow", "Lib\303\251rer Goldonium", nullptr));
        checkBox_2->setText(QApplication::translate("GameWindow", "Poser exp\303\251rience", nullptr));
        checkBox->setText(QApplication::translate("GameWindow", "Activer Exp\303\251rience", nullptr));
        label_12->setText(QApplication::translate("GameWindow", "?", nullptr));
        label_14->setText(QApplication::translate("GameWindow", "5", nullptr));
        label_13->setText(QApplication::translate("GameWindow", "20", nullptr));
        lbl_points_tot->setText(QApplication::translate("GameWindow", "40", nullptr));
        label_17->setText(QApplication::translate("GameWindow", "TOTAL ", nullptr));
        label_18->setText(QApplication::translate("GameWindow", "Points", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_end_game), QApplication::translate("GameWindow", "End of Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H

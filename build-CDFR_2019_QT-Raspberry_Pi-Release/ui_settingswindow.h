/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QPushButton *btn_main_menu;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_3;
    QPushButton *btn_connect_stm32;
    QLabel *lbl_status_connexion_st;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_exit;
    QPushButton *btn_close;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QStringLiteral("SettingsWindow"));
        SettingsWindow->resize(480, 320);
        centralwidget = new QWidget(SettingsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 60, 51, 51));
        label->setStyleSheet(QStringLiteral("color:rgb(138, 226, 52);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/icon/images/baseline_settings_black_48dp.png")));
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

        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 60, 410, 121));
        formLayout_3 = new QFormLayout(formLayoutWidget);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_connect_stm32 = new QPushButton(formLayoutWidget);
        btn_connect_stm32->setObjectName(QStringLiteral("btn_connect_stm32"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, btn_connect_stm32);

        lbl_status_connexion_st = new QLabel(formLayoutWidget);
        lbl_status_connexion_st->setObjectName(QStringLiteral("lbl_status_connexion_st"));
        lbl_status_connexion_st->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lbl_status_connexion_st);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(2, QFormLayout::FieldRole, verticalSpacer);

        btn_exit = new QPushButton(centralwidget);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(415, 270, 60, 50));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/images/baseline_power_settings_new_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_exit->setIcon(icon3);
        btn_exit->setIconSize(QSize(48, 48));
        btn_close = new QPushButton(centralwidget);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setGeometry(QRect(0, 270, 60, 50));
        btn_close->setIcon(icon3);
        btn_close->setIconSize(QSize(48, 48));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(410, 250, 67, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 250, 67, 17));
        SettingsWindow->setCentralWidget(centralwidget);

        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QApplication::translate("SettingsWindow", "MainWindow", nullptr));
        label->setText(QString());
        btn_main_menu->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        btn_connect_stm32->setText(QApplication::translate("SettingsWindow", "Connect STM32", nullptr));
        lbl_status_connexion_st->setText(QString());
        pushButton->setText(QApplication::translate("SettingsWindow", "Reset", nullptr));
        btn_exit->setText(QString());
        btn_close->setText(QString());
        label_2->setText(QApplication::translate("SettingsWindow", "shutdown", nullptr));
        label_3->setText(QApplication::translate("SettingsWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H

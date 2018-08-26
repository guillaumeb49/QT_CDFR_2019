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
    QPushButton *btn_exit;

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
        formLayoutWidget->setGeometry(QRect(10, 60, 410, 251));
        formLayout_3 = new QFormLayout(formLayoutWidget);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_exit = new QPushButton(centralwidget);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(420, 270, 60, 50));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/images/baseline_power_settings_new_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_exit->setIcon(icon3);
        btn_exit->setIconSize(QSize(48, 48));
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
        btn_exit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H

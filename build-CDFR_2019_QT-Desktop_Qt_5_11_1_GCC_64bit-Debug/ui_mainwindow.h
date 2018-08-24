/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_settings;
    QPushButton *btn_info;
    QPushButton *btn_game;
    QPushButton *btn_test;
    QFrame *line;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 320);
        QPalette palette;
        QBrush brush(QColor(121, 85, 72, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QStringLiteral("background-color :rgb(121, 85, 72);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        centralWidget->setPalette(palette1);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 40, 481, 279));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_settings = new QPushButton(gridLayoutWidget);
        btn_settings->setObjectName(QStringLiteral("btn_settings"));
        btn_settings->setMinimumSize(QSize(236, 135));
        QPalette palette2;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(136, 138, 133, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        btn_settings->setPalette(palette2);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        btn_settings->setFont(font);
        btn_settings->setAutoFillBackground(false);
        btn_settings->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background-color:rgb(136, 138, 133);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/images/baseline_settings_white_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_settings->setIcon(icon);
        btn_settings->setIconSize(QSize(75, 75));

        gridLayout->addWidget(btn_settings, 2, 1, 1, 1);

        btn_info = new QPushButton(gridLayoutWidget);
        btn_info->setObjectName(QStringLiteral("btn_info"));
        btn_info->setMinimumSize(QSize(0, 135));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        btn_info->setPalette(palette3);
        btn_info->setFont(font);
        btn_info->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/images/baseline_help_outline_white_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_info->setIcon(icon1);
        btn_info->setIconSize(QSize(75, 75));

        gridLayout->addWidget(btn_info, 4, 0, 1, 1);

        btn_game = new QPushButton(gridLayoutWidget);
        btn_game->setObjectName(QStringLiteral("btn_game"));
        btn_game->setMinimumSize(QSize(0, 135));
        btn_game->setBaseSize(QSize(0, 100));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush4(QColor(255, 152, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        btn_game->setPalette(palette4);
        btn_game->setFont(font);
        btn_game->setAutoFillBackground(false);
        btn_game->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background-color:rgb(255, 152, 0);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/images/baseline_play_circle_outline_white_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_game->setIcon(icon2);
        btn_game->setIconSize(QSize(75, 75));

        gridLayout->addWidget(btn_game, 2, 0, 1, 1);

        btn_test = new QPushButton(gridLayoutWidget);
        btn_test->setObjectName(QStringLiteral("btn_test"));
        btn_test->setMinimumSize(QSize(0, 135));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush5(QColor(255, 193, 7, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        btn_test->setPalette(palette5);
        btn_test->setFont(font);
        btn_test->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background-color:rgb(255, 193, 7);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/images/baseline_build_white_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_test->setIcon(icon3);
        btn_test->setIconSize(QSize(75, 75));

        gridLayout->addWidget(btn_test, 4, 1, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, -10, 486, 57));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(gridLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/icon/images/baseline_home_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(32, 32));
        pushButton_5->setFlat(true);

        gridLayout_2->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/icon/images/baseline_link_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon5);
        pushButton_7->setIconSize(QSize(32, 32));
        pushButton_7->setCheckable(false);
        pushButton_7->setFlat(true);

        gridLayout_2->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/icon/images/baseline_battery_80_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon6);
        pushButton_6->setIconSize(QSize(32, 32));
        pushButton_6->setFlat(true);

        gridLayout_2->addWidget(pushButton_6, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_settings->setText(QApplication::translate("MainWindow", "SETTINGS", nullptr));
        btn_info->setText(QApplication::translate("MainWindow", "INFO", nullptr));
        btn_game->setText(QApplication::translate("MainWindow", "GAME", nullptr));
        btn_test->setText(QApplication::translate("MainWindow", "TEST", nullptr));
        pushButton_5->setText(QString());
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
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
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 40, 481, 279));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(236, 135));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        pushButton_3->setFont(font);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background-color:rgb(136, 138, 133);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/images/baseline_settings_white_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(75, 75));

        gridLayout->addWidget(pushButton_3, 2, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 135));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background-color:rgb(233, 185, 110);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/images/baseline_help_outline_white_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(75, 75));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 135));
        pushButton_2->setBaseSize(QSize(0, 100));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(114, 159, 207, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        pushButton_2->setPalette(palette1);
        pushButton_2->setFont(font);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background-color:rgb(114, 159, 207);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/images/baseline_play_circle_outline_white_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(75, 75));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 135));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background-color:rgb(173, 127, 168);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/images/baseline_build_white_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(75, 75));

        gridLayout->addWidget(pushButton_4, 4, 1, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 486, 40));
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
        pushButton_3->setText(QApplication::translate("MainWindow", "SETTINGS", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "INFO", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "GAME", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "TEST", nullptr));
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

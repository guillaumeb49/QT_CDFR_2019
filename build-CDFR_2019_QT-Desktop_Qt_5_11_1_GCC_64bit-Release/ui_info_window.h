/********************************************************************************
** Form generated from reading UI file 'info_window.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_WINDOW_H
#define UI_INFO_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_6;
    QLabel *label_13;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_8;
    QLabel *label_15;
    QLabel *label_9;
    QLabel *label_16;
    QLabel *label_10;
    QLabel *label_17;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_18;
    QLabel *label_21;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 320);
        QPalette palette;
        QBrush brush(QColor(238, 238, 238, 255));
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
        MainWindow->setStyleSheet(QStringLiteral("background-color :rgb(238, 238, 238);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 486, 57));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(gridLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/images/baseline_home_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(32, 32));
        pushButton_5->setFlat(true);

        gridLayout_2->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/images/baseline_link_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon1);
        pushButton_7->setIconSize(QSize(32, 32));
        pushButton_7->setCheckable(false);
        pushButton_7->setFlat(true);

        gridLayout_2->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/images/baseline_battery_80_black_48dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setIconSize(QSize(32, 32));
        pushButton_6->setFlat(true);

        gridLayout_2->addWidget(pushButton_6, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 60, 51, 51));
        label->setStyleSheet(QStringLiteral("color:rgb(138, 226, 52);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/icon/images/baseline_help_outline_white_48dp.png")));
        label->setScaledContents(true);
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 60, 410, 251));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setAutoFillBackground(false);
        label_11->setStyleSheet(QStringLiteral(""));
        label_11->setScaledContents(false);
        label_11->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, label_11);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, label_12);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, label_13);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, label_14);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, label_15);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_9);

        label_16 = new QLabel(formLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, label_16);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        label_17 = new QLabel(formLayoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(7, QFormLayout::FieldRole, label_17);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(429, 180, 40, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(verticalLayoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAutoFillBackground(true);
        label_19->setStyleSheet(QStringLiteral("background-color:rgb(244, 67, 54);"));

        verticalLayout->addWidget(label_19);

        label_20 = new QLabel(verticalLayoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAutoFillBackground(true);
        label_20->setStyleSheet(QStringLiteral("background-color:rgb(76, 175, 80);"));

        verticalLayout->addWidget(label_20);

        label_18 = new QLabel(verticalLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAutoFillBackground(true);
        label_18->setStyleSheet(QStringLiteral("background-color:rgb(33, 150, 243);"));

        verticalLayout->addWidget(label_18);

        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(430, 150, 40, 17));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_5->setText(QString());
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Adresse IP", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "192.168.0.26", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Connexion STM32", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "OK", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Connexion capteurs", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "OK", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Etat Batterie", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "60 %", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Distance 1", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "0 cm", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Distance 2", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "0 cm", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Distance 3", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "0 cm", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Distance 4", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "0 cm", nullptr));
        label_19->setText(QString());
        label_20->setText(QString());
        label_18->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "LED", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_WINDOW_H

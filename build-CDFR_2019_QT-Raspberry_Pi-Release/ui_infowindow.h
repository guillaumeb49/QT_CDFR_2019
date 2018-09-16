/********************************************************************************
** Form generated from reading UI file 'infowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWINDOW_H
#define UI_INFOWINDOW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbl_led_red;
    QLabel *lbl_led_blue;
    QLabel *lbl_led_green;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QPushButton *btn_main_menu;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_3;
    QLabel *label_43;
    QLabel *lbl_ip;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *label_56;
    QLabel *label_57;
    QLabel *label_58;
    QLabel *label_59;

    void setupUi(QMainWindow *InfoWindow)
    {
        if (InfoWindow->objectName().isEmpty())
            InfoWindow->setObjectName(QStringLiteral("InfoWindow"));
        InfoWindow->resize(480, 320);
        centralwidget = new QWidget(InfoWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(429, 180, 40, 131));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lbl_led_red = new QLabel(verticalLayoutWidget);
        lbl_led_red->setObjectName(QStringLiteral("lbl_led_red"));
        lbl_led_red->setAutoFillBackground(false);
        lbl_led_red->setStyleSheet(QStringLiteral("background-color:rgb(244, 67, 54);"));

        verticalLayout_3->addWidget(lbl_led_red);

        lbl_led_blue = new QLabel(verticalLayoutWidget);
        lbl_led_blue->setObjectName(QStringLiteral("lbl_led_blue"));
        lbl_led_blue->setAutoFillBackground(false);
        lbl_led_blue->setStyleSheet(QStringLiteral("background-color:rgb(76, 175, 80);"));

        verticalLayout_3->addWidget(lbl_led_blue);

        lbl_led_green = new QLabel(verticalLayoutWidget);
        lbl_led_green->setObjectName(QStringLiteral("lbl_led_green"));
        lbl_led_green->setAutoFillBackground(false);
        lbl_led_green->setStyleSheet(QStringLiteral("background-color:rgb(33, 150, 243);"));

        verticalLayout_3->addWidget(lbl_led_green);

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

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 60, 51, 51));
        label->setStyleSheet(QStringLiteral("color:rgb(138, 226, 52);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/icon/images/baseline_help_outline_black_48dp.png")));
        label->setScaledContents(true);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 60, 410, 251));
        formLayout_3 = new QFormLayout(formLayoutWidget);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_43 = new QLabel(formLayoutWidget);
        label_43->setObjectName(QStringLiteral("label_43"));
        QFont font;
        font.setPointSize(14);
        label_43->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_43);

        lbl_ip = new QLabel(formLayoutWidget);
        lbl_ip->setObjectName(QStringLiteral("lbl_ip"));
        lbl_ip->setFont(font);
        lbl_ip->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lbl_ip);

        label_45 = new QLabel(formLayoutWidget);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_45);

        label_46 = new QLabel(formLayoutWidget);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setFont(font);
        label_46->setAutoFillBackground(false);
        label_46->setStyleSheet(QStringLiteral(""));
        label_46->setScaledContents(false);
        label_46->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, label_46);

        label_47 = new QLabel(formLayoutWidget);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_47);

        label_48 = new QLabel(formLayoutWidget);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setFont(font);
        label_48->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, label_48);

        label_49 = new QLabel(formLayoutWidget);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_49);

        label_50 = new QLabel(formLayoutWidget);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setFont(font);
        label_50->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, label_50);

        label_51 = new QLabel(formLayoutWidget);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setFont(font);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_51);

        label_52 = new QLabel(formLayoutWidget);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setFont(font);
        label_52->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, label_52);

        label_53 = new QLabel(formLayoutWidget);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setFont(font);

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_53);

        label_54 = new QLabel(formLayoutWidget);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setFont(font);
        label_54->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, label_54);

        label_55 = new QLabel(formLayoutWidget);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setFont(font);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_55);

        label_56 = new QLabel(formLayoutWidget);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setFont(font);
        label_56->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, label_56);

        label_57 = new QLabel(formLayoutWidget);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setFont(font);

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label_57);

        label_58 = new QLabel(formLayoutWidget);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setFont(font);
        label_58->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(7, QFormLayout::FieldRole, label_58);

        label_59 = new QLabel(centralwidget);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(430, 150, 40, 17));
        label_59->setFont(font);
        label_59->setAlignment(Qt::AlignCenter);
        InfoWindow->setCentralWidget(centralwidget);

        retranslateUi(InfoWindow);

        QMetaObject::connectSlotsByName(InfoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InfoWindow)
    {
        InfoWindow->setWindowTitle(QApplication::translate("InfoWindow", "MainWindow", nullptr));
        lbl_led_red->setText(QString());
        lbl_led_blue->setText(QString());
        lbl_led_green->setText(QString());
        btn_main_menu->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        label->setText(QString());
        label_43->setText(QApplication::translate("InfoWindow", "Adresse IP", nullptr));
        lbl_ip->setText(QApplication::translate("InfoWindow", "XXX.XXX.XX.XX", nullptr));
        label_45->setText(QApplication::translate("InfoWindow", "Connexion STM32", nullptr));
        label_46->setText(QApplication::translate("InfoWindow", "OK", nullptr));
        label_47->setText(QApplication::translate("InfoWindow", "Connexion capteurs", nullptr));
        label_48->setText(QApplication::translate("InfoWindow", "OK", nullptr));
        label_49->setText(QApplication::translate("InfoWindow", "Etat Batterie", nullptr));
        label_50->setText(QApplication::translate("InfoWindow", "60 %", nullptr));
        label_51->setText(QApplication::translate("InfoWindow", "Distance 1", nullptr));
        label_52->setText(QApplication::translate("InfoWindow", "0 cm", nullptr));
        label_53->setText(QApplication::translate("InfoWindow", "Distance 2", nullptr));
        label_54->setText(QApplication::translate("InfoWindow", "0 cm", nullptr));
        label_55->setText(QApplication::translate("InfoWindow", "Distance 3", nullptr));
        label_56->setText(QApplication::translate("InfoWindow", "0 cm", nullptr));
        label_57->setText(QApplication::translate("InfoWindow", "Distance 4", nullptr));
        label_58->setText(QApplication::translate("InfoWindow", "0 cm", nullptr));
        label_59->setText(QApplication::translate("InfoWindow", "LED", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoWindow: public Ui_InfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOWINDOW_H

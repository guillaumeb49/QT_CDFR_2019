/********************************************************************************
** Form generated from reading UI file 'ingamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGAMEDIALOG_H
#define UI_INGAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_InGameDialog
{
public:
    QLCDNumber *lcdNumber;
    QProgressBar *progressBar;
    QLabel *lbl_stateMachine;

    void setupUi(QDialog *InGameDialog)
    {
        if (InGameDialog->objectName().isEmpty())
            InGameDialog->setObjectName(QStringLiteral("InGameDialog"));
        InGameDialog->resize(480, 320);
        lcdNumber = new QLCDNumber(InGameDialog);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 10, 451, 191));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(2);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("value", QVariant(0));
        progressBar = new QProgressBar(InGameDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(7, 200, 461, 51));
        progressBar->setValue(25);
        progressBar->setInvertedAppearance(false);
        lbl_stateMachine = new QLabel(InGameDialog);
        lbl_stateMachine->setObjectName(QStringLiteral("lbl_stateMachine"));
        lbl_stateMachine->setGeometry(QRect(10, 260, 451, 41));
        lbl_stateMachine->setAlignment(Qt::AlignCenter);

        retranslateUi(InGameDialog);

        QMetaObject::connectSlotsByName(InGameDialog);
    } // setupUi

    void retranslateUi(QDialog *InGameDialog)
    {
        InGameDialog->setWindowTitle(QApplication::translate("InGameDialog", "Dialog", nullptr));
        lbl_stateMachine->setText(QApplication::translate("InGameDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InGameDialog: public Ui_InGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGAMEDIALOG_H

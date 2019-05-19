#ifndef INGAMEDIALOG_H
#define INGAMEDIALOG_H

#include <QDialog>

namespace Ui {
class InGameDialog;
}

class InGameDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InGameDialog(QWidget *parent = 0);
    ~InGameDialog();

public:
    Ui::InGameDialog *ui;
};

#endif // INGAMEDIALOG_H

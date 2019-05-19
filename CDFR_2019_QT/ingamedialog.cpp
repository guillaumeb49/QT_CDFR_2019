#include "ingamedialog.h"
#include "ui_ingamedialog.h"

InGameDialog::InGameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InGameDialog)
{
    ui->setupUi(this);
}

InGameDialog::~InGameDialog()
{
    delete ui;
}

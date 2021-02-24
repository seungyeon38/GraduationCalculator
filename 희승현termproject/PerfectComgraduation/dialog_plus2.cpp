#include "dialog_plus2.h"
#include "ui_dialog_plus2.h"

Dialog_plus2::Dialog_plus2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_plus2)
{
    ui->setupUi(this);
}

Dialog_plus2::~Dialog_plus2()
{
    delete ui;
}

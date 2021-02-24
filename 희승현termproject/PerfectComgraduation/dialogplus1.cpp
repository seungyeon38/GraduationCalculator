#include "dialogplus1.h"
#include "ui_dialogplus1.h"

Dialogplus1::Dialogplus1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogplus1)
{
    ui->setupUi(this);
}

Dialogplus1::~Dialogplus1()
{
    delete ui;
}

void Dialogplus1::on_pushButton_next_2_clicked(bool checked)
{
    if(!checked)
    {
        plus2 = new Dialog_plus2(this);
        plus2->setFixedSize(850,870);
        plus2->show();
        this->hide();
    }
}

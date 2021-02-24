#include "graduategak.h"
#include "ui_graduategak.h"

GraduateGak::GraduateGak(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GraduateGak)
{
    ui->setupUi(this);
}

GraduateGak::~GraduateGak()
{
    delete ui;
}

void GraduateGak::on_pushButton_next_2_clicked(bool checked)
{
    if(!checked)
    {
        plus1 = new Dialogplus1(this);
        plus1->setFixedSize(850,870);
        plus1->show();
        this->hide();
    }
}

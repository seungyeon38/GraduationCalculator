#include "majoressentialoption.h"
#include "ui_majoressentialoption.h"
#include "majoroption.h"

MajorEssentialOption::MajorEssentialOption(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MajorEssentialOption)
{
    ui->setupUi(this);
    setWindowTitle("Choose courses you already have _major_essential");

}


MajorEssentialOption::~MajorEssentialOption()
{
    delete ui;
}

void MajorEssentialOption::SetAccount(Account *account){
    account_major_essential = account;
}

void MajorEssentialOption::on_pushButton_left_arrow_clicked()
{
    this->hide();

}

void MajorEssentialOption::on_pushButton_right_arrow_clicked()
{
    major_basic = new MajorBasicOption(this);
    major_basic->setFixedSize(850,870);
    major_basic->show();
    major_basic->SetAccount(account_major_essential);
    this->hide();
}

void MajorEssentialOption::on_checkBox_2_0_clicked(){

    if(ui->checkBox_2_0->isChecked())
    {
        account_major_essential->SaveSelectedMajorData(2,0);
    }
    else
    {
        account_major_essential->DeleteSelectedMajorData(2,0);
    }
}

void MajorEssentialOption::on_checkBox_2_1_clicked()
{
    if(ui->checkBox_2_1->isChecked())
    {
        account_major_essential->SaveSelectedMajorData(2,1);
    }
    else
    {
        account_major_essential->DeleteSelectedMajorData(2,1);
    }
}

void MajorEssentialOption::on_checkBox_2_2_clicked()
{
    if(ui->checkBox_2_2->isChecked())
    {
        account_major_essential->SaveSelectedMajorData(2,2);
    }
    else
    {
        account_major_essential->DeleteSelectedMajorData(2,2);
    }
}


void MajorEssentialOption::on_checkBox_2_3_clicked()
{
    if(ui->checkBox_2_3->isChecked())
    {
        account_major_essential->SaveSelectedMajorData(2,3);
    }
    else
    {
        account_major_essential->DeleteSelectedMajorData(2,3);
    }
}




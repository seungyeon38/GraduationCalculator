#include "majorbasicoption.h"
#include "ui_majorbasicoption.h"

MajorBasicOption::MajorBasicOption(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MajorBasicOption)
{
    ui->setupUi(this);
    setWindowTitle("Choose courses you already have _major_basic");

}

MajorBasicOption::~MajorBasicOption()
{
    delete ui;
}

void MajorBasicOption::SetAccount(Account *account)
{
    account_major_basic = account;
}

void MajorBasicOption::on_pushButton_right_arrow_clicked()
{
    liberal_essential = new LiberalEssentialOption(this);
    liberal_essential->setFixedSize(850,870);
    liberal_essential->show();
    liberal_essential->SetAccount(account_major_basic);
    this->hide();
}

void MajorBasicOption::on_checkBox_1_0_clicked()
{
    if(ui->checkBox_1_0->isChecked())
    {
        account_major_basic->SaveSelectedMajorData(1,0);
    }
    else
    {
        account_major_basic->DeleteSelectedMajorData(1,0);
    }
}


void MajorBasicOption::on_checkBox_1_1_clicked()
{
    if(ui->checkBox_1_1->isChecked())
    {
        account_major_basic->SaveSelectedMajorData(1,1);
    }
    else
    {
        account_major_basic->DeleteSelectedMajorData(1,1);
    }
}

void MajorBasicOption::on_checkBox_1_2_clicked()
{
    if(ui->checkBox_1_2->isChecked())
    {
        account_major_basic->SaveSelectedMajorData(1,2);
    }
    else
    {
        account_major_basic->DeleteSelectedMajorData(1,2);
    }
}

void MajorBasicOption::on_checkBox_1_3_clicked()
{
    if(ui->checkBox_1_3->isChecked())
    {
        account_major_basic->SaveSelectedMajorData(1,3);
    }
    else
    {
        account_major_basic->DeleteSelectedMajorData(1,3);
    }
}

void MajorBasicOption::on_checkBox_1_4_clicked()
{
    if(ui->checkBox_1_4->isChecked())
    {
        account_major_basic->SaveSelectedMajorData(1,4);
    }
    else
    {
        account_major_basic->DeleteSelectedMajorData(1,4);
    }
}

void MajorBasicOption::on_checkBox_1_5_clicked()
{
    if(ui->checkBox_1_5->isChecked())
    {
        account_major_basic->SaveSelectedMajorData(1,5);
    }
    else
    {
        account_major_basic->DeleteSelectedMajorData(1,5);
    }
}

void MajorBasicOption::on_checkBox_1_6_clicked()
{
    if(ui->checkBox_1_6->isChecked())
    {
        account_major_basic->SaveSelectedMajorData(1,6);
    }
    else
    {
        account_major_basic->DeleteSelectedMajorData(1,6);
    }
}

void MajorBasicOption::on_checkBox_1_7_clicked()
{
    if(ui->checkBox_1_7->isChecked())
    {
        account_major_basic->SaveSelectedMajorData(1,7);
    }
    else
    {
        account_major_basic->DeleteSelectedMajorData(1,7);
    }
}

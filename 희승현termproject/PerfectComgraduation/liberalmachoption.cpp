#include "liberalmachoption.h"
#include "ui_liberalmachoption.h"

LiberalMachOption::LiberalMachOption(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LiberalMachOption)
{
    ui->setupUi(this);
    setWindowTitle("Choose courses you already have _liberal_mach");

}

LiberalMachOption::~LiberalMachOption()
{
    delete ui;
}

void LiberalMachOption::SetAccount(Account *account)
{
    account_liberal_mach = account;
}

void LiberalMachOption::on_pushButton_right_arrow_clicked()
{
    liberal_mach_practice = new LiberalMachPracticeOption(this);
    liberal_mach_practice->setFixedSize(850,870);
    liberal_mach_practice->show();
    liberal_mach_practice->SetAccount(account_liberal_mach);
    this->hide();
}


void LiberalMachOption::on_checkBox_6_0_clicked()
{
    if(ui->checkBox_6_0->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,0);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,0);
    }
}


void LiberalMachOption::on_checkBox_6_1_clicked()
{
    if(ui->checkBox_6_1->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,1);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,1);
    }
}

void LiberalMachOption::on_checkBox_6_2_clicked()
{
    if(ui->checkBox_6_2->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,2);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,2);
    }
}

void LiberalMachOption::on_checkBox_6_3_clicked()
{
    if(ui->checkBox_6_3->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,3);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,3);
    }
}

void LiberalMachOption::on_checkBox_6_4_clicked()
{
    if(ui->checkBox_6_4->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,4);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,4);
    }
}

void LiberalMachOption::on_checkBox_6_5_clicked()
{
    if(ui->checkBox_6_5->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,5);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,5);
    }
}

void LiberalMachOption::on_checkBox_6_6_clicked()
{
    if(ui->checkBox_6_6->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,6);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,6);
    }
}

void LiberalMachOption::on_checkBox_6_7_clicked()
{
    if(ui->checkBox_6_7->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,7);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,7);
    }
}

void LiberalMachOption::on_checkBox_6_8_clicked()
{
    if(ui->checkBox_6_8->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,8);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,8);
    }
}

void LiberalMachOption::on_checkBox_6_9_clicked()
{
    if(ui->checkBox_6_9->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,9);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,9);
    }
}

void LiberalMachOption::on_checkBox_6_10_clicked()
{
    if(ui->checkBox_6_10->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,10);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,10);
    }
}

void LiberalMachOption::on_checkBox_6_11_clicked()
{
    if(ui->checkBox_6_11->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,11);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,11);
    }
}

void LiberalMachOption::on_checkBox_6_12_clicked()
{
    if(ui->checkBox_6_12->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,12);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,12);
    }
}


void LiberalMachOption::on_checkBox_6_13_clicked()
{
    if(ui->checkBox_6_13->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,13);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,13);
    }
}

void LiberalMachOption::on_checkBox_6_14_clicked()
{
    if(ui->checkBox_6_14->isChecked())
    {
        account_liberal_mach->SaveSelectedLiberalData(6,14);
    }
    else
    {
        account_liberal_mach->DeleteSelectedLiberalData(6,14);
    }
}

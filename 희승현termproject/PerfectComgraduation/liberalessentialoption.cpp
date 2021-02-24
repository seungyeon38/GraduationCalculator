#include "liberalessentialoption.h"
#include "ui_liberalessentialoption.h"
#include <QDebug>

LiberalEssentialOption::LiberalEssentialOption(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LiberalEssentialOption)
{
    ui->setupUi(this);
    setWindowTitle("Choose courses you already have _liberal_essential");

}

LiberalEssentialOption::~LiberalEssentialOption()
{
    delete ui;
}

void LiberalEssentialOption::SetAccount(Account *account)
{
    account_liberal_essential = account;
}

void LiberalEssentialOption::on_pushButton_right_arrow_clicked()
{
    liberal_main = new LiberalMainOption(this);
    liberal_main->setFixedSize(850,870);
    liberal_main->show();
    liberal_main->SetAccount(account_liberal_essential);
    this->hide();
}

void LiberalEssentialOption::on_checkBox_0_0_clicked()
{
    if(ui->checkBox_0_0->isChecked())
    {
        account_liberal_essential->SaveSelectedLiberalData(0,0);
    }
    else
    {
        account_liberal_essential->DeleteSelectedLiberalData(0,0);
    }
}


void LiberalEssentialOption::on_checkBox_0_1_clicked()
{
    if(ui->checkBox_0_1->isChecked())
    {
        account_liberal_essential->SaveSelectedLiberalData(0,1);
    }
    else
    {
        account_liberal_essential->DeleteSelectedLiberalData(0,1);
    }
}


void LiberalEssentialOption::on_checkBox_0_2_clicked()
{
    if(ui->checkBox_0_2->isChecked())
    {
        account_liberal_essential->SaveSelectedLiberalData(0,2);
    }
    else
    {
        account_liberal_essential->DeleteSelectedLiberalData(0,2);
    }
}

void LiberalEssentialOption::on_checkBox_0_3_clicked()
{
    if(ui->checkBox_0_3->isChecked())
    {
        account_liberal_essential->SaveSelectedLiberalData(0,3);
    }
    else
    {
        account_liberal_essential->DeleteSelectedLiberalData(0,3);
    }
}

void LiberalEssentialOption::on_checkBox_0_4_clicked()
{
    if(ui->checkBox_0_4->isChecked())
    {
        account_liberal_essential->SaveSelectedLiberalData(0,4);
    }
    else
    {
        account_liberal_essential->DeleteSelectedLiberalData(0,4);
    }
}

void LiberalEssentialOption::on_checkBox_0_5_clicked()
{
    if(ui->checkBox_0_5->isChecked())
    {
        account_liberal_essential->SaveSelectedLiberalData(0,5);
    }
    else
    {
        account_liberal_essential->DeleteSelectedLiberalData(0,5);
    }
}



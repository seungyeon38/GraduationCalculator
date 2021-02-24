#include "liberalmainoption.h"
#include "ui_liberalmainoption.h"

LiberalMainOption::LiberalMainOption(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LiberalMainOption)
{
    ui->setupUi(this);
    setWindowTitle("Choose courses you already have _liberal_main");
}

LiberalMainOption::~LiberalMainOption()
{
    delete ui;
}

void LiberalMainOption::SetAccount(Account *account)
{
    account_liberal_main = account;
}

void LiberalMainOption::on_pushButton_right_arrow_clicked()
{
    liberal_mach = new LiberalMachOption(this);
    liberal_mach->setFixedSize(850,870);
    liberal_mach->show();
    liberal_mach->SetAccount(account_liberal_main);
    this->hide();

}

void LiberalMainOption::on_checkBox_challenge_clicked()
{
    if(ui->checkBox_challenge->isChecked())
    {
        for(int i = 0; i < 12; i++)
            account_liberal_main->SaveSelectedLiberalData(1,i);
    }
    else
    {
        for(int i = 0; i < 12; i++)
            account_liberal_main->DeleteSelectedLiberalData(1,i);
    }
}


void LiberalMainOption::on_checkBox_communication_clicked()
{
    if(ui->checkBox_communication->isChecked())
    {
        for(int i = 0; i < 9; i++)
        account_liberal_main->SaveSelectedLiberalData(2,i);
    }
    else
    {
        for(int i = 0; i < 9; i++)
        account_liberal_main->DeleteSelectedLiberalData(2,i);
    }
}


void LiberalMainOption::on_checkBox_trust_clicked()
{
    if(ui->checkBox_trust->isChecked())
    {
        for(int i = 0; i < 11; i++)
        account_liberal_main->SaveSelectedLiberalData(3,i);
    }
    else
    {
        for(int i = 0; i < 11; i++)
        account_liberal_main->DeleteSelectedLiberalData(3,i);
    }
}


void LiberalMainOption::on_checkBox_unite_clicked()
{
    if(ui->checkBox_unite->isChecked())
    {
        for(int i = 0; i < 9; i++)
        account_liberal_main->SaveSelectedLiberalData(4,i);
    }
    else
    {
        for(int i = 0; i < 9; i++)
        account_liberal_main->DeleteSelectedLiberalData(4,i);
    }
}


void LiberalMainOption::on_checkBox_creative_clicked()
{
    if(ui->checkBox_creative->isChecked())
    {
        for(int i = 0; i < 11; i++)
        account_liberal_main->SaveSelectedLiberalData(5,i);
    }
    else
    {
        for(int i = 0; i < 11; i++)
        account_liberal_main->DeleteSelectedLiberalData(5,i);
    }
}



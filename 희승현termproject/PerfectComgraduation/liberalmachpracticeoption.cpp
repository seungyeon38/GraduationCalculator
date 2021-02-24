#include "liberalmachpracticeoption.h"
#include "ui_liberalmachpracticeoption.h"

LiberalMachPracticeOption::LiberalMachPracticeOption(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LiberalMachPracticeOption)
{
    ui->setupUi(this);
    setWindowTitle("Choose courses you already have _liberal_mach_practice");
}

LiberalMachPracticeOption::~LiberalMachPracticeOption()
{
    delete ui;
}

void LiberalMachPracticeOption::SetAccount(Account *account)
{
    account_liberal_mach_practice = account;
}

void LiberalMachPracticeOption::on_pushButton_right_arrow_clicked()
{
    main_window = new MainWindow(this);
    main_window->setFixedSize(850,870);
    main_window->show();
    main_window->SetAccount(account_liberal_mach_practice);
    main_window->ShowScore();
    main_window->ShowUsername(account_liberal_mach_practice);
    this->hide();
}

void LiberalMachPracticeOption::on_checkBox_7_0_clicked()
{
    if(ui->checkBox_7_0->isChecked())
    {
        account_liberal_mach_practice->SaveSelectedLiberalData(7,0);
    }
    else
    {
        account_liberal_mach_practice->DeleteSelectedLiberalData(7,0);
    }
}

void LiberalMachPracticeOption::on_checkBox_7_1_clicked()
{
    if(ui->checkBox_7_1->isChecked())
    {
        account_liberal_mach_practice->SaveSelectedLiberalData(7,1);
    }
    else
    {
        account_liberal_mach_practice->DeleteSelectedLiberalData(7,1);
    }
}

void LiberalMachPracticeOption::on_checkBox_7_2_clicked()
{
    if(ui->checkBox_7_2->isChecked())
    {
        account_liberal_mach_practice->SaveSelectedLiberalData(7,2);
    }
    else
    {
        account_liberal_mach_practice->DeleteSelectedLiberalData(7,2);
    }
}

void LiberalMachPracticeOption::on_checkBox_7_3_clicked()
{
    if(ui->checkBox_7_3->isChecked())
    {
        account_liberal_mach_practice->SaveSelectedLiberalData(7,3);
    }
    else
    {
        account_liberal_mach_practice->DeleteSelectedLiberalData(7,3);
    }
}

void LiberalMachPracticeOption::on_checkBox_7_4_clicked()
{
    if(ui->checkBox_7_4->isChecked())
    {
        account_liberal_mach_practice->SaveSelectedLiberalData(7,4);
    }
    else
    {
        account_liberal_mach_practice->DeleteSelectedLiberalData(7,4);
    }
}

void LiberalMachPracticeOption::on_checkBox_7_5_clicked()
{
    if(ui->checkBox_7_5->isChecked())
    {
        account_liberal_mach_practice->SaveSelectedLiberalData(7,5);
    }
    else
    {
        account_liberal_mach_practice->DeleteSelectedLiberalData(7,5);
    }
}

void LiberalMachPracticeOption::on_checkBox_7_6_clicked()
{
    if(ui->checkBox_7_6->isChecked())
    {
        account_liberal_mach_practice->SaveSelectedLiberalData(7,6);
    }
    else
    {
        account_liberal_mach_practice->DeleteSelectedLiberalData(7,6);
    }
}

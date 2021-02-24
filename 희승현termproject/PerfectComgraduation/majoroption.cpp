#include "majoroption.h"
#include "ui_majoroption.h"
MajorOption::MajorOption(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MajorOption)
{
    ui->setupUi(this);
    setWindowTitle("Choose courses you already have _major");
}

MajorOption::~MajorOption()
{
    delete ui;
}

void MajorOption::SetAccount(Account *account){

    account_major = account;

}

void MajorOption::on_pushButton_right_arrow_clicked()
{
    major_essential = new MajorEssentialOption(this);
    major_essential->setFixedSize(850,870);
    major_essential->show();
    major_essential->SetAccount(account_major);
    this->hide();
}


void MajorOption::on_checkBox_0_0_clicked()
{
    if(ui->checkBox_0_0->isChecked())
    {
       account_major->SaveSelectedMajorData(0,0);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,0);
    }
}



void MajorOption::on_checkBox_0_1_clicked()
{
    if(ui->checkBox_0_1->isChecked())
    {
        account_major->SaveSelectedMajorData(0,1);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,1);

    }
}

void MajorOption::on_checkBox_0_2_clicked()
{
    if(ui->checkBox_0_2->isChecked())
    {
        account_major->SaveSelectedMajorData(0,2);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,2);
    }
}

void MajorOption::on_checkBox_0_3_clicked()
{
    if(ui->checkBox_0_3->isChecked())
    {
        account_major->SaveSelectedMajorData(0,3);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,3);
    }
}

void MajorOption::on_checkBox_0_4_clicked()
{
    if(ui->checkBox_0_4->isChecked())
    {
        account_major->SaveSelectedMajorData(0,4);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,4);
    }
}

void MajorOption::on_checkBox_0_5_clicked()
{
    if(ui->checkBox_0_5->isChecked())
    {
        account_major->SaveSelectedMajorData(0,5);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,5);
    }
}

void MajorOption::on_checkBox_0_6_clicked()
{
    if(ui->checkBox_0_6->isChecked())
    {
        account_major->SaveSelectedMajorData(0,6);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,6);
    }
}

void MajorOption::on_checkBox_0_7_clicked()
{
    if(ui->checkBox_0_7->isChecked())
    {
        account_major->SaveSelectedMajorData(0,7);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,7);
    }
}

void MajorOption::on_checkBox_0_8_clicked()
{
    if(ui->checkBox_0_8->isChecked())
    {
        account_major->SaveSelectedMajorData(0,8);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,8);
    }
}

void MajorOption::on_checkBox_0_9_clicked()
{
    if(ui->checkBox_0_9->isChecked())
    {
        account_major->SaveSelectedMajorData(0,9);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,9);
    }
}

void MajorOption::on_checkBox_0_10_clicked()
{
    if(ui->checkBox_0_10->isChecked())
    {
        account_major->SaveSelectedMajorData(0,10);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,10);
    }
}

void MajorOption::on_checkBox_0_11_clicked()
{
    if(ui->checkBox_0_11->isChecked())
    {
        account_major->SaveSelectedMajorData(0,11);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,11);
    }
}

void MajorOption::on_checkBox_0_12_clicked()
{
    if(ui->checkBox_0_12->isChecked())
    {
        account_major->SaveSelectedMajorData(0,12);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,12);
    }
}

void MajorOption::on_checkBox_0_13_clicked()
{
    if(ui->checkBox_0_13->isChecked())
    {
        account_major->SaveSelectedMajorData(0,13);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,13);
    }
}

void MajorOption::on_checkBox_0_14_clicked()
{
    if(ui->checkBox_0_14->isChecked())
    {
        account_major->SaveSelectedMajorData(0,14);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,14);
    }
}

void MajorOption::on_checkBox_0_15_clicked()
{
    if(ui->checkBox_0_15->isChecked())
    {
        account_major->SaveSelectedMajorData(0,15);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,15);
    }
}


void MajorOption::on_checkBox_0_16_clicked()
{
    if(ui->checkBox_0_16->isChecked())
    {
        account_major->SaveSelectedMajorData(0,16);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,16);
    }
}


void MajorOption::on_checkBox_0_17_clicked()
{
    if(ui->checkBox_0_17->isChecked())
    {
        account_major->SaveSelectedMajorData(0,17);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,17);
    }
}


void MajorOption::on_checkBox_0_18_clicked()
{
    if(ui->checkBox_0_18->isChecked())
    {
        account_major->SaveSelectedMajorData(0,18);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,18);
    }
}

void MajorOption::on_checkBox_0_19_clicked()
{
    if(ui->checkBox_0_19->isChecked())
    {
        account_major->SaveSelectedMajorData(0,19);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,19);
    }
}

void MajorOption::on_checkBox_0_20_clicked()
{
    if(ui->checkBox_0_20->isChecked())
    {
        account_major->SaveSelectedMajorData(0,20);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,20);
    }
}

void MajorOption::on_checkBox_0_21_clicked()
{
    if(ui->checkBox_0_21->isChecked())
    {
        account_major->SaveSelectedMajorData(0,21);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,21);
    }
}


void MajorOption::on_checkBox_0_22_clicked()
{
    if(ui->checkBox_0_22->isChecked())
    {
        account_major->SaveSelectedMajorData(0,22);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,22);
    }
}

void MajorOption::on_checkBox_0_23_clicked()
{
    if(ui->checkBox_0_23->isChecked())
    {
        account_major->SaveSelectedMajorData(0,23);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,23);
    }
}

void MajorOption::on_checkBox_0_24_clicked()
{
    if(ui->checkBox_0_24->isChecked())
    {
        account_major->SaveSelectedMajorData(0,24);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,24);
    }
}

void MajorOption::on_checkBox_0_25_clicked()
{
    if(ui->checkBox_0_25->isChecked())
    {
        account_major->SaveSelectedMajorData(0,25);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,25);
    }
}

void MajorOption::on_checkBox_0_26_clicked()
{
    if(ui->checkBox_0_26->isChecked())
    {
        account_major->SaveSelectedMajorData(0,26);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,26);
    }
}

void MajorOption::on_checkBox_0_27_clicked()
{
    if(ui->checkBox_0_27->isChecked())
    {
        account_major->SaveSelectedMajorData(0,27);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,27);
    }
}

void MajorOption::on_checkBox_0_28_clicked()
{
    if(ui->checkBox_0_28->isChecked())
    {
        account_major->SaveSelectedMajorData(0,28);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,28);
    }
}

void MajorOption::on_checkBox_0_29_clicked()
{
    if(ui->checkBox_0_29->isChecked())
    {
        account_major->SaveSelectedMajorData(0,29);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,29);
    }
}


void MajorOption::on_checkBox_0_30_clicked()
{
    if(ui->checkBox_0_30->isChecked())
    {
        account_major->SaveSelectedMajorData(0,30);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,30);
    }
}


void MajorOption::on_checkBox_0_31_clicked()
{
    if(ui->checkBox_0_31->isChecked())
    {
        account_major->SaveSelectedMajorData(0,31);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,31);
    }
}

void MajorOption::on_checkBox_0_32_clicked()
{
    if(ui->checkBox_0_32->isChecked())
    {
        account_major->SaveSelectedMajorData(0,32);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,32);
    }
}

void MajorOption::on_checkBox_0_33_clicked()
{
    if(ui->checkBox_0_33->isChecked())
    {
        account_major->SaveSelectedMajorData(0,33);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,33);
    }
}

void MajorOption::on_checkBox_0_34_clicked()
{
    if(ui->checkBox_0_34->isChecked())
    {
        account_major->SaveSelectedMajorData(0,34);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,34);
    }
}


void MajorOption::on_checkBox_0_35_clicked()
{
    if(ui->checkBox_0_35->isChecked())
    {
        account_major->SaveSelectedMajorData(0,35);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,35);
    }
}

void MajorOption::on_checkBox_0_36_clicked()
{
    if(ui->checkBox_0_36->isChecked())
    {
        account_major->SaveSelectedMajorData(0,36);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,36);
    }
}

void MajorOption::on_checkBox_0_37_clicked()
{
    if(ui->checkBox_0_37->isChecked())
    {
        account_major->SaveSelectedMajorData(0,37);
    }
    else
    {
        account_major->DeleteSelectedMajorData(0,37);
    }
}

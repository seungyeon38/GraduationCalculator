#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::SetAccount(Account *account)
{
    account_login = account;
}


void LoginWindow::on_pushButton_login_clicked()
{
    account_login->SetUsername(ui->lineEdit_Username->text());
    account_login->SetGrade(ui->lineEdit_Grade->text());
    account_login->SetSemester(ui->lineEdit_Semester->text());

    major = new MajorOption(this);
    major->setFixedSize(850,870);
    major->show();
    major->SetAccount(account_login);
    this->hide();
}


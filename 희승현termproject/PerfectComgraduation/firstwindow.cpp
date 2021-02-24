#include "firstwindow.h"
#include "ui_firstwindow.h"
#include <QLabel>
#include <QImage>
#include <QPixmap>
FirstWindow::FirstWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this,SLOT(myfunction()));
    timer->start(4500);
}

FirstWindow::~FirstWindow()
{
    delete ui;
}

void FirstWindow::SetAccount(Account *account)
{
    account_first = account;
}

void FirstWindow::myfunction()
{
    timer->stop();
    this->hide();
    loginWindow = new LoginWindow(this);
    loginWindow->setFixedSize(850,870);
    loginWindow->SetAccount(account_first);
    loginWindow->show();
}


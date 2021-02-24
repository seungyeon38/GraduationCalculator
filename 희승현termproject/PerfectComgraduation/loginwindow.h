#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "majoroption.h"
namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
    void SetAccount(Account*);


private slots:

    void on_pushButton_login_clicked();

private:
    Ui::LoginWindow *ui;
    Account *account_login;
    MajorOption *major;

};

#endif // LOGINWINDOW_H

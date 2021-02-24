#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "loginwindow.h"
#include "account.h"
namespace Ui {
class FirstWindow;
}

class FirstWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstWindow(QWidget *parent = nullptr);
    ~FirstWindow();
    void SetAccount(Account*);

public slots:
    void myfunction();

private:
    Ui::FirstWindow *ui;
    QTimer *timer;
    LoginWindow *loginWindow;
    Account *account_first;
};

#endif // FIRSTWINDOW_H

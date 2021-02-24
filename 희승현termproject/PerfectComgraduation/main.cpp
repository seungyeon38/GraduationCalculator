#include "firstwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Account account;

    FirstWindow w;
    w.setFixedSize(850,870);
    w.SetAccount(&account);
    w.show();


    return a.exec();
}

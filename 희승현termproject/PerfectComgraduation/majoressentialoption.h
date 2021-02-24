#ifndef MAJORESSENTIALOPTION_H
#define MAJORESSENTIALOPTION_H

#include <QMainWindow>
#include "majorbasicoption.h"
#include "account.h"
namespace Ui {
class MajorEssentialOption;
}

class MajorEssentialOption : public QMainWindow
{
    Q_OBJECT

public:
    explicit MajorEssentialOption(QWidget *parent = nullptr);
    ~MajorEssentialOption();
    void SetAccount(Account * account);


private slots:
    void on_pushButton_left_arrow_clicked();

    void on_checkBox_2_0_clicked();

    void on_checkBox_2_1_clicked();

    void on_checkBox_2_2_clicked();

    void on_checkBox_2_3_clicked();


    void on_pushButton_right_arrow_clicked();

private:
    Ui::MajorEssentialOption *ui;
    Account *account_major_essential;
    MajorBasicOption *major_basic;

};

#endif // MAJORESSENTIALOPTION_H

#ifndef LIBERALMACHOPTION_H
#define LIBERALMACHOPTION_H

#include <QMainWindow>
#include "account.h"
#include "liberalmachpracticeoption.h"
namespace Ui {
class LiberalMachOption;
}

class LiberalMachOption : public QMainWindow
{
    Q_OBJECT

public:
    explicit LiberalMachOption(QWidget *parent = nullptr);
    ~LiberalMachOption();
    void SetAccount(Account *account);


private slots:
    void on_pushButton_right_arrow_clicked();

    void on_checkBox_6_0_clicked();

    void on_checkBox_6_1_clicked();

    void on_checkBox_6_2_clicked();

    void on_checkBox_6_3_clicked();

    void on_checkBox_6_4_clicked();

    void on_checkBox_6_5_clicked();

    void on_checkBox_6_6_clicked();

    void on_checkBox_6_7_clicked();

    void on_checkBox_6_8_clicked();

    void on_checkBox_6_9_clicked();

    void on_checkBox_6_10_clicked();

    void on_checkBox_6_11_clicked();

    void on_checkBox_6_12_clicked();

    void on_checkBox_6_13_clicked();

    void on_checkBox_6_14_clicked();

private:
    Ui::LiberalMachOption *ui;
    Account *account_liberal_mach;
    LiberalMachPracticeOption *liberal_mach_practice;
};

#endif // LIBERALMACHOPTION_H

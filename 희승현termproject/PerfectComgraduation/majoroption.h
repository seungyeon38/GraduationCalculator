#ifndef MAJOROPTION_H
#define MAJOROPTION_H

#include <QMainWindow>
#include "majoressentialoption.h"
#include "account.h"
namespace Ui {
class MajorOption;
}

class MajorOption : public QMainWindow
{
    Q_OBJECT

public:
    explicit MajorOption(QWidget *parent = nullptr);
    void SetAccount(Account *account);
    ~MajorOption();

private slots:
    void on_pushButton_right_arrow_clicked();

    void on_checkBox_0_0_clicked();

    void on_checkBox_0_1_clicked();

    void on_checkBox_0_2_clicked();

    void on_checkBox_0_3_clicked();

    void on_checkBox_0_4_clicked();

    void on_checkBox_0_5_clicked();

    void on_checkBox_0_6_clicked();

    void on_checkBox_0_7_clicked();

    void on_checkBox_0_8_clicked();

    void on_checkBox_0_9_clicked();

    void on_checkBox_0_10_clicked();

    void on_checkBox_0_11_clicked();

    void on_checkBox_0_12_clicked();

    void on_checkBox_0_13_clicked();

    void on_checkBox_0_14_clicked();

    void on_checkBox_0_15_clicked();

    void on_checkBox_0_16_clicked();

    void on_checkBox_0_17_clicked();

    void on_checkBox_0_18_clicked();

    void on_checkBox_0_19_clicked();

    void on_checkBox_0_20_clicked();

    void on_checkBox_0_21_clicked();

    void on_checkBox_0_22_clicked();

    void on_checkBox_0_23_clicked();

    void on_checkBox_0_24_clicked();

    void on_checkBox_0_25_clicked();

    void on_checkBox_0_26_clicked();

    void on_checkBox_0_27_clicked();

    void on_checkBox_0_28_clicked();

    void on_checkBox_0_29_clicked();

    void on_checkBox_0_30_clicked();

    void on_checkBox_0_31_clicked();

    void on_checkBox_0_32_clicked();

    void on_checkBox_0_33_clicked();

    void on_checkBox_0_34_clicked();

    void on_checkBox_0_35_clicked();

    void on_checkBox_0_36_clicked();

    void on_checkBox_0_37_clicked();

private:
    Ui::MajorOption *ui;
    Account *account_major;
    MajorEssentialOption *major_essential;
};

#endif // MAJOROPTION_H

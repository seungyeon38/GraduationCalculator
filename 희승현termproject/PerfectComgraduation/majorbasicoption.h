#ifndef MAJORBASICOPTION_H
#define MAJORBASICOPTION_H

#include <QMainWindow>
#include "liberalessentialoption.h"
#include "account.h"
namespace Ui {
class MajorBasicOption;
}

class MajorBasicOption : public QMainWindow
{
    Q_OBJECT

public:
    explicit MajorBasicOption(QWidget *parent = nullptr);
    ~MajorBasicOption();
    void SetAccount(Account *account);

private slots:
    void on_checkBox_1_0_clicked();

    void on_checkBox_1_1_clicked();

    void on_pushButton_right_arrow_clicked();

    void on_checkBox_1_2_clicked();

    void on_checkBox_1_3_clicked();

    void on_checkBox_1_4_clicked();

    void on_checkBox_1_5_clicked();

    void on_checkBox_1_6_clicked();

    void on_checkBox_1_7_clicked();

private:
    Ui::MajorBasicOption *ui;
    Account *account_major_basic;
    LiberalEssentialOption *liberal_essential;
};

#endif // MAJORBASICOPTION_H

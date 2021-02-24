#ifndef LIBERALMACHPRACTICEOPTION_H
#define LIBERALMACHPRACTICEOPTION_H

#include <QMainWindow>
#include "account.h"
#include "mainwindow.h"
#include "subjectinfo.h"
namespace Ui {
class LiberalMachPracticeOption;
}

class LiberalMachPracticeOption : public QMainWindow
{
    Q_OBJECT

public:
    explicit LiberalMachPracticeOption(QWidget *parent = nullptr);
    ~LiberalMachPracticeOption();
    void SetAccount(Account *account);


private slots:
    void on_pushButton_right_arrow_clicked();

    void on_checkBox_7_0_clicked();

    void on_checkBox_7_1_clicked();

    void on_checkBox_7_2_clicked();

    void on_checkBox_7_3_clicked();

    void on_checkBox_7_4_clicked();

    void on_checkBox_7_5_clicked();

    void on_checkBox_7_6_clicked();


private:
    Ui::LiberalMachPracticeOption *ui;
    Account *account_liberal_mach_practice;
    MainWindow *main_window;
};

#endif // LIBERALMACHPRACTICEOPTION_H

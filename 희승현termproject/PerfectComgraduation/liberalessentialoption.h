#ifndef LIBERALESSENTIALOPTION_H
#define LIBERALESSENTIALOPTION_H

#include <QMainWindow>
#include "account.h"
#include "liberalmainoption.h"

namespace Ui {
class LiberalEssentialOption;
}

class LiberalEssentialOption : public QMainWindow
{
    Q_OBJECT

public:
    explicit LiberalEssentialOption(QWidget *parent = nullptr);
    ~LiberalEssentialOption();
    void SetAccount(Account *account);

private slots:
    void on_checkBox_0_0_clicked();

    void on_checkBox_0_1_clicked();

    void on_checkBox_0_2_clicked();

    void on_checkBox_0_3_clicked();

    void on_checkBox_0_4_clicked();

    void on_checkBox_0_5_clicked();

    void on_pushButton_right_arrow_clicked();

private:
    Ui::LiberalEssentialOption *ui;
    Account *account_liberal_essential;
    LiberalMainOption *liberal_main;
};

#endif // LIBERALESSENTIALOPTION_H

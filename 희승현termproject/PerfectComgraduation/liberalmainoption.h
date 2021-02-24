#ifndef LIBERALMAINOPTION_H
#define LIBERALMAINOPTION_H
#include <QMainWindow>
#include "account.h"
#include "liberalmachoption.h"
namespace Ui {
class LiberalMainOption;
}

class LiberalMainOption : public QMainWindow
{
    Q_OBJECT

public:
    explicit LiberalMainOption(QWidget *parent = nullptr);
    ~LiberalMainOption();
    void SetAccount(Account *account);

private slots:
    void on_checkBox_challenge_clicked();

    void on_checkBox_communication_clicked();

    void on_checkBox_trust_clicked();

    void on_checkBox_unite_clicked();

    void on_checkBox_creative_clicked();

    void on_pushButton_right_arrow_clicked();

private:
    Ui::LiberalMainOption *ui;
    Account *account_liberal_main;
    LiberalMachOption *liberal_mach;
};

#endif // LIBERALMAINOPTION_H

#ifndef DIALOGPLUS1_H
#define DIALOGPLUS1_H

#include <QDialog>
#include "dialog_plus2.h"

namespace Ui {
class Dialogplus1;
}

class Dialogplus1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogplus1(QWidget *parent = nullptr);
    ~Dialogplus1();

private slots:
    void on_pushButton_next_2_clicked(bool checked);

private:
    Ui::Dialogplus1 *ui;
    Dialog_plus2 *plus2;
};

#endif // DIALOGPLUS1_H

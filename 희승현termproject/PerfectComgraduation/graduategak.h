#ifndef GRADUATEGAK_H
#define GRADUATEGAK_H

#include <QDialog>
#include "dialogplus1.h"
namespace Ui {
class GraduateGak;
}

class GraduateGak : public QDialog
{
    Q_OBJECT

public:
    explicit GraduateGak(QWidget *parent = nullptr);
    ~GraduateGak();

private slots:
    void on_pushButton_next_2_clicked(bool checked);

private:
    Ui::GraduateGak *ui;
    Dialogplus1 *plus1;
};

#endif // GRADUATEGAK_H

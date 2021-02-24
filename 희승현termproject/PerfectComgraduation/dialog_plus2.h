#ifndef DIALOG_PLUS2_H
#define DIALOG_PLUS2_H

#include <QDialog>
namespace Ui {
class Dialog_plus2;
}

class Dialog_plus2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_plus2(QWidget *parent = nullptr);
    ~Dialog_plus2();

private:
    Ui::Dialog_plus2 *ui;
};

#endif // DIALOG_PLUS2_H

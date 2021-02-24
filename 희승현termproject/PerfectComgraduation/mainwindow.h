#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graduatecondition.h"
#include "curriculum.h"
#include "calculator.h"
#include "graduategak.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void SetAccount(Account *account);
    void ShowScore();
    void SetAccountCalculator(Account *account);
    void ShowUsername(Account*);

private slots:
    void on_pushButton_menu_clicked(bool checked);

    void on_pushButton_curriculum_flowchart_clicked(bool checked);

    void on_pushButton_remove_menu_clicked(bool checked);

    void on_pushButton_calculator_clicked(bool checked);

    void on_pushButton_graduate_gak_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    GraduateCondition graduatecon;
    Curriculum *curri;
    calculator *cal;
    GraduateGak *gak;
    Dialogplus1 *gak1;
    Dialog_plus2 *gak2;


    QVector<int> scorevector;
};

#endif // MAINWINDOW_H

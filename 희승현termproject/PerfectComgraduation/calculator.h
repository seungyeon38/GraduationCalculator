#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>
#include <QListWidgetItem>
#include "subjectinfo.h"
#include "graduatecondition.h"
namespace Ui {
class calculator;
}

class calculator : public QDialog
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();

    void SetAccount(Account * account);
    void SetVector(QVector<int>);

    void InitMajorRecommendSubjects();
    void InitLiberalRecommendSubjects();

    bool IsCheckedMajorSubject(int, int);
    bool IsCheckedLiberalSubject(int, int);

    void RecommendMajors();
    void RecommendLiberals();

    void Print();
    void ItemColor();

    void ShowScore();

    void FindMajorSubject(QString);

    void FindLiberalEssential(QString);
    void FindLiberalMain(QString);
    void FindLiberalMach(QString);

private slots:

    void on_listWidget_liberal_essential_itemPressed(QListWidgetItem *item);

    void on_listWidget_liberal_main_itemPressed(QListWidgetItem *item);

    void on_listWidget_liberal_mach_itemPressed(QListWidgetItem *item);

    void on_listWidget_major_itemClicked(QListWidgetItem *item);

private:

    Ui::calculator *ui;
    SubjectInfo subjectinfo;
    Account *user_account;
    QVector<QVector<Major>> recommendable_majors;
    QVector<QVector<Liberal>> recommendable_liberals;

    QVector<int> scorevector;

    QListWidgetItem *item;

};

#endif // CALCULATOR_H

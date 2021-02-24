#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menu->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SetAccount(Account *account)
{
    graduatecon.InitAccount(account);
}

void MainWindow::ShowScore()
{

    ui->label_bsm_score->setNum(graduatecon.BSM());
    scorevector.push_back(graduatecon.BSM());
    ui->label_engineering_score->setNum(graduatecon.SubOfEngineering());
    scorevector.push_back(graduatecon.SubOfEngineering());
    ui->label_major_basic_score->setNum(graduatecon.MajorBasic());
    scorevector.push_back(graduatecon.MajorBasic());
    ui->label_major_essential_score->setNum(graduatecon.MajorEssential());
    scorevector.push_back(graduatecon.MajorEssential());
    ui->label_liberal_essential_score->setNum(graduatecon.GraduateConditionEssential());
    scorevector.push_back(graduatecon.GraduateConditionEssential());
    ui->label_liberal_main_score->setNum(graduatecon.GraduateConditionMain());
    scorevector.push_back(graduatecon.GraduateConditionMain());
    ui->label_liberal_mach_score->setNum(graduatecon.GraduateConditionMach());
    scorevector.push_back(graduatecon.GraduateConditionMach());
    ui->label_liberal_mach_practice_score->setNum(graduatecon.GraduateConditionMachPractice());
    scorevector.push_back(graduatecon.GraduateConditionMachPractice());
}

void MainWindow::SetAccountCalculator(Account *account)
{
    cal->SetAccount(account);
    cal->SetVector(scorevector);
}

void MainWindow::ShowUsername(Account *account)
{
    ui->label_Username->setText(account->GetUsername());
}

void MainWindow::on_pushButton_menu_clicked(bool checked)
{
    if(!checked)
    {
        //ui->menu->setStyleSheet("background-color: rgb(255,245,245);");
        //ui->pushButton_curriculum_flowchart->setStyleSheet("background-color: rgb(245,245,250);");
        ui->menu->show();

    }

}

void MainWindow::on_pushButton_remove_menu_clicked(bool checked)
{
    if(!checked)
    {
         ui->menu->hide();
    }

}

void MainWindow::on_pushButton_curriculum_flowchart_clicked(bool checked)
{
    if(!checked)
    {
        curri = new Curriculum(this);
        curri->setFixedSize(999,789);
        curri->setModal(true);
        curri->imgload();
        curri->exec();
    }
}

void MainWindow::on_pushButton_calculator_clicked(bool checked)
{
    if(!checked)
    {
        cal = new calculator(this);
        SetAccountCalculator(graduatecon.GetAccount());
        cal->RecommendLiberals();
        cal->RecommendMajors();
        cal->Print();
        cal->ShowScore();
        cal->ItemColor();
        cal->setFixedSize(850, 870);
        cal->setModal(true);
        cal->exec();
    }
}

void MainWindow::on_pushButton_graduate_gak_clicked(bool checked)
{
    if(!checked)
    {
        gak = new GraduateGak(this);
        gak->setFixedSize(850,870);
        gak->setModal(true);
        gak->exec();
    }
}

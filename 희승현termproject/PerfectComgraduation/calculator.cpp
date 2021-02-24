#include "calculator.h"
#include "ui_calculator.h"
#include <QDebug>
#include <QColor>
calculator::calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);
    InitMajorRecommendSubjects();
    InitLiberalRecommendSubjects();
}

void calculator::SetAccount(Account *account)
{
    user_account = account;
}

void calculator::SetVector(QVector<int> vector1)
{
    scorevector = vector1;
}

void calculator::InitMajorRecommendSubjects()
{
    for (size_t i = 0; i < 3; i++)
    {
          recommendable_majors.push_back(QVector<Major>());
    }
}

void calculator::InitLiberalRecommendSubjects()
{
    for (size_t i = 0; i < 8; i++)
    {
          recommendable_liberals.push_back(QVector<Liberal>());
    }
}

bool calculator::IsCheckedMajorSubject(int _first, int _second)
{
    for (size_t i = 0; i < user_account->GetMajorIndex().size(); i++) {
          if (user_account->GetMajorIndex()[i].first == _first && user_account->GetMajorIndex()[i].second == _second)
          {
             return false;
          }
    }
    return true;
}

bool calculator::IsCheckedLiberalSubject(int _first, int _second)
{
    for (size_t i = 0; i < user_account->GetLiberalIndex().size(); i++){
          if (user_account->GetLiberalIndex()[i].first == _first && user_account->GetLiberalIndex()[i].second == _second) {
             return false;
          }
    }
    return true;
}


void calculator::RecommendMajors()
{
    for (size_t i = 0; i < 3; i++) {
          for (size_t j = 0; j < subjectinfo.GetMajorSubjects()[i].size(); j++)
          {
             if (IsCheckedMajorSubject(i, j))
             {
                recommendable_majors[i].push_back(subjectinfo.GetMajorSubjects()[i][j]);
             }
          }
    }
}

void calculator::RecommendLiberals()
{
    for (size_t i = 0; i < 8; i++) {
          for (size_t j = 0; j < subjectinfo.GetLiberalSubjects()[i].size(); j++)
          {
             if (IsCheckedLiberalSubject(i, j))
             {

                 recommendable_liberals[i].push_back(subjectinfo.GetLiberalSubjects()[i][j]);

             }
          }
    }
}

void calculator::Print()
{
         for(int i = 0; i < 3; i++){
              for(int j = 0 ; j < recommendable_majors[i].size();j++) {
                   item = new QListWidgetItem;
                   item -> setText(recommendable_majors[i][j].getName());
                   ui->listWidget_major->addItem(item);
               }
         }

         for(int i = 0; i < recommendable_liberals[0].size(); i++){
               {
                   item = new QListWidgetItem;
                   item -> setText(recommendable_liberals[0][i].getName());
                   ui->listWidget_liberal_essential->addItem(item);
               }
         }

         for(int i = 1; i < 6; i++){
             int num = 1;

             for(int j = 0; j < recommendable_liberals[i].size(); j++)
               {
                   item = new QListWidgetItem;
                   item -> setText(recommendable_liberals[i][j].getName());
                   ui->listWidget_liberal_main->addItem(item);

               }

             num++;

         }

         for(int i = 6; i < 8; i++){
             for(int j = 0; j < recommendable_liberals[i].size(); j++)
               {
                   item = new QListWidgetItem;
                   item -> setText(recommendable_liberals[i][j].getName());
                   ui->listWidget_liberal_mach->addItem(item);
               }
         }
}

void calculator::ItemColor()
{
    int nowGrade = user_account->GetGrade().toInt();
    int nowSemester = user_account->GetSemester().toInt();
    int nextGrade = 0;
    int nextSemester = 0;


        if( nowSemester == 1)
        {
            nextGrade = nowGrade;
            nextSemester = nowSemester + 1;
        }
        else if (nowSemester == 2)
        {
            nextGrade = nowGrade + 1;
            nextSemester = 1;
        }

        for(int j = 0; j < recommendable_majors.size(); j++)
        {
            for(int k = 0; k < recommendable_majors[j].size(); k++)
            {
                if(recommendable_majors[j][k].getSubGrade() == nextGrade && recommendable_majors[j][k].getSubSemester() == nextSemester)
                {
                    for(int l = 0; l < ui->listWidget_major->count(); l++)
                    {
                       if((ui->listWidget_major->item(l)->text()) == recommendable_majors[j][k].getName())
                       {
                           ui->listWidget_major->item(l)->setBackgroundColor(QColor::fromRgb(235,255,153));
                       }

                    }

                }
            }
        }
}

void calculator::ShowScore()
{
    ui->label_bsm_score->setNum(scorevector[0]);
    ui->label_engineering_score->setNum(scorevector[1]);
    ui->label_major_basic_score->setNum(scorevector[2]);
    ui->label_major_essential_score->setNum(scorevector[3]);
    ui->label_liberal_essential_score->setNum(scorevector[4]);
    ui->label_liberal_main_score->setNum(scorevector[5]);
    ui->label_liberal_mach_score->setNum(scorevector[6]);
    ui->label_liberal_mach_practice_score->setNum(scorevector[7]);
}

calculator::~calculator()
{
    delete ui;
}


void calculator::on_listWidget_major_itemClicked(QListWidgetItem *item)
{
    if(ui->listWidget_major->item(ui->listWidget_major->currentRow()) -> isSelected() == false)
    {
        ui->listWidget_major->item(ui->listWidget_major->currentRow())->setBackgroundColor(Qt::white);

    }

    else
    {
        ui->listWidget_major->item(ui->listWidget_major->currentRow())->setBackgroundColor(QColor::fromRgb(255,185,164));
        FindMajorSubject(ui->listWidget_major->item(ui->listWidget_major->currentRow())->text());
        ui->listWidget_major->item(ui->listWidget_major->currentRow())->setSelected(false);
    }


}

void calculator::FindMajorSubject(QString selected_subject_name)
{

 for (size_t i = 0; i < 3; i++) {
   for (size_t j = 0; j < recommendable_majors[i].size(); j++) {
       if (recommendable_majors[i][j].getName() == selected_subject_name) {
          if (i == 0) {
             if (recommendable_majors[i][j].getDetailedSort() == "BSM") {
                scorevector[0] -= recommendable_majors[i][j].getPoint();
                if(scorevector[0] < 0)
                {
                 scorevector[0] = 0;
                }
             }


             else if (recommendable_majors[i][j].getDetailedSort() == "Engineering_subject") {
                scorevector[1] -= recommendable_majors[i][j].getPoint();
                if(scorevector[1] < 1)
                {
                 scorevector[1] = 0;
                }
             }
          }
          else if (i == 1) {
             if (recommendable_majors[i][j].getDetailedSort() == "BSM") {
                scorevector[0] -= recommendable_majors[i][j].getPoint();
                scorevector[2] -= recommendable_majors[i][j].getPoint();
                if(scorevector[0] < 0)
                {
                 scorevector[0] = 0;
                 if(scorevector[2] < 0)
                 {
                     scorevector[2] = 0;
                 }
                }
                else if(scorevector[2] < 0)
                 scorevector[2] = 0;
             }
             else{
                scorevector[2] -= recommendable_majors[i][j].getPoint();
                if(scorevector[2] < 0)
                    scorevector[2] = 0;
             }
          }
          else if (i == 2){
              scorevector[1] -= 3;
              scorevector[3] -= 3;

              if(scorevector[1] < 0)
              {
                  scorevector[1] = 0;
                  if(scorevector[3] < 0)
                      scorevector[3] = 0;
              }
              else if(scorevector[3] < 0)
              {
                  scorevector[3] = 0;
              }

             }
          }
          }
       }
  ShowScore();
}

void calculator::on_listWidget_liberal_essential_itemPressed(QListWidgetItem *item)
{
    ui->listWidget_liberal_essential->item(ui->listWidget_liberal_essential->currentRow())->setBackgroundColor(QColor::fromRgb(255,185,164));
    FindLiberalEssential(ui->listWidget_liberal_essential->item(ui->listWidget_liberal_essential->currentRow())->text());
}

void calculator::on_listWidget_liberal_main_itemPressed(QListWidgetItem *item)
{
    ui->listWidget_liberal_main->item(ui->listWidget_liberal_main->currentRow())->setBackgroundColor(QColor::fromRgb(255,185,164));
    FindLiberalMain(ui->listWidget_liberal_main->item(ui->listWidget_liberal_main->currentRow())->text());
}

void calculator::on_listWidget_liberal_mach_itemPressed(QListWidgetItem *item)
{
    ui->listWidget_liberal_mach->item(ui->listWidget_liberal_mach->currentRow())->setBackgroundColor(QColor::fromRgb(255,185,164));
    FindLiberalMach(ui->listWidget_liberal_mach->item(ui->listWidget_liberal_mach->currentRow())->text());
}

void calculator::FindLiberalEssential(QString selected_subject_name)
{
   for (size_t i = 0;i< recommendable_liberals[0].size(); i++) {
      if ( recommendable_liberals[0][i].getName() == selected_subject_name) {
         scorevector[4]-=recommendable_liberals[0][i].getPoint();
         if(scorevector[4] < 0)
         {
             scorevector[4] = 0;
         }
      }
   }
ShowScore();
}

void calculator::FindLiberalMain(QString selected_subject_name)
{
   for (size_t i = 0; i < recommendable_liberals[1].size(); i++) {
      if (recommendable_liberals[1][i].getName() == selected_subject_name){
              scorevector[5] -= 3;

         if (scorevector[5] < 0) {
            scorevector[5] = 0;
         }

      }
   }

   for (size_t i = 0; i < recommendable_liberals[2].size(); i++) {
      if (recommendable_liberals[2][i].getName() == selected_subject_name) {
              scorevector[5] -= 3;
              if (scorevector[5] < 0) {
                 scorevector[5] = 0;
              }
          }


   }

   for (size_t i = 0; i < recommendable_liberals[3].size(); i++) {
      if (recommendable_liberals[3][i].getName() == selected_subject_name) {
              scorevector[5] -= 3;
              if (scorevector[5] < 0) {
                 scorevector[5] = 0;
              }
      }
   }

   for (size_t i = 0; i < recommendable_liberals[4].size(); i++) {
      if (recommendable_liberals[4][i].getName() == selected_subject_name) {
              scorevector[5] -= 3;
         if (scorevector[5] < 0) {
            scorevector[5] = 0;
         }

      }
   }

   for (size_t i = 0; i < recommendable_liberals[5].size(); i++) {
      if (recommendable_liberals[5][i].getName() == selected_subject_name) {
              scorevector[5] -= 3;
         if (scorevector[5] < 0) {
            scorevector[5] = 0;
         }

      }
   }
   ShowScore();
}

void calculator::FindLiberalMach(QString selected_subject_name)
{
   for (size_t i = 0; i<recommendable_liberals[6].size(); i++) {
      if (recommendable_liberals[6][i].getName() == selected_subject_name) {
         scorevector[6] -= 2;
         if (scorevector[6] < 0) {
            scorevector[6] = 0;
         }
      }
   }

   for (size_t i = 0; i<recommendable_liberals[7].size(); i++) {
      if (recommendable_liberals[7][i].getName() == selected_subject_name) {
         scorevector[7] -= 1;
         if (scorevector[7] < 0) {
            scorevector[7] = 0;
         }
      }
   }
   ShowScore();
}






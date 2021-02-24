#include "account.h"



Account::Account()
{

}

void Account::SetUsername(QString user)
{
    username = user;
}

void Account::SetGrade(QString gra)
{
    grade = gra;
}

void Account::SetSemester(QString sem)
{
    semester = sem;
}

QString Account::GetUsername()
{
    return username;
}

QString Account::GetGrade()
{
    return grade;
}

QString Account::GetSemester()
{
    return semester;
}

void Account::SaveSelectedMajorData(int first, int second)
{

    selected_majors.push_back(pair<int,int>(first, second));

}

void Account::SaveSelectedLiberalData(int first, int second)
{
    selected_liberals.push_back(pair<int,int>(first, second));

}

void Account::DeleteSelectedMajorData(int first, int second)
{
   for (size_t i = selected_majors.size() - 1; i >= 0; i--) {
      if (selected_majors[i].first == first) {
         if (selected_majors[i].second == second) {
            selected_majors.erase(selected_majors.begin()+i);
            break;
         }
      }
   }
}

void Account::DeleteSelectedLiberalData(int first, int second) {

   for (size_t i = selected_liberals.size() - 1; i >= 0; i--) {
      if (selected_liberals[i].first == first) {
         if (selected_liberals[i].second == second) {
            selected_liberals.erase(selected_liberals.begin() + i);
            break;
         }
      }
   }
}

QVector<pair<int, int>> Account::GetMajorIndex()
{
   return selected_majors;
}

QVector<pair<int, int>> Account::GetLiberalIndex()
{
    return selected_liberals;
}

Account::~Account()
{
}


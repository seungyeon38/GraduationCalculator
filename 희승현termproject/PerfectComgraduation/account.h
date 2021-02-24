#pragma once
#include "basicheader.h"
class Account
{
private:
    QString username;
    QString grade;
    QString semester;

   QVector<pair<int,int>> selected_majors;
   QVector<pair<int,int>> selected_liberals;

public:
   Account();
   void SetUsername(QString);
   void SetGrade(QString);
   void SetSemester(QString);
   QString GetUsername();
   QString GetGrade();
   QString GetSemester();
   void SaveSelectedMajorData(int, int);
   void SaveSelectedLiberalData(int, int);
   void DeleteSelectedMajorData(int, int);
   void DeleteSelectedLiberalData(int, int);
   QVector<pair<int, int>> GetMajorIndex();
   QVector<pair<int, int>> GetLiberalIndex();
   ~Account();
};

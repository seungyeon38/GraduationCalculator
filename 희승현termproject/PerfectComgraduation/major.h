#include "subject.h"

#pragma once


class Major : public Subject
{
private:
   int sub_grade;
   int sub_semester;
   QString detailedSort;

public:
   Major();
   Major(QString sortation, QString name, int point, QString detailedSort, int grade, int semester);

   QString getDetailedSort();
   ~Major();


   int getSubGrade();
   int getSubSemester();


};

enum MajorIndex { MAJOR = 0  ,BASIC = 1,  ESSENTIAL = 2 };

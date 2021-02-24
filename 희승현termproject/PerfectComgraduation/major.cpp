#include "major.h"

Major::Major() : Subject("x","x",3){
    sub_grade = 0;
    sub_semester = 0;
    detailedSort = "x";
}


Major::Major(QString sortation,QString name, int point, QString detailedSort, int grade, int semester)
   : Subject(sortation, name, point), sub_grade(grade), sub_semester(semester)
{
   this->detailedSort = detailedSort;
}

QString Major::getDetailedSort()
{
   return detailedSort;
}

Major::~Major()
{
}


int Major::getSubGrade()
{
   return sub_grade;
}

int Major::getSubSemester()
{
   return sub_semester;
}


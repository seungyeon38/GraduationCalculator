#include "subject.h"


Subject::Subject(){
    sortation = "x";
    name = "x";
    point = 0;
}


Subject::~Subject()
{
    }


Subject::Subject(QString sortation, QString name, int point) : point(point) {
   this->sortation = sortation;
   this->name = name;
}

QString Subject::getName()
{
   return name;
}

int Subject::getPoint()
{
   return point;
}

#pragma once
#include"basicheader.h"

class Subject
{
private:
   QString sortation;
   QString name;
   int point;
public:
   Subject();
   ~Subject();
   Subject(QString sortation, QString name, int point);
   QString getName();
   int getPoint();
};

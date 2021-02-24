#pragma once
#include"subject.h"

class Liberal :public Subject
{
public:
   Liberal();
   Liberal(QString sortation, QString name, int point);
};

enum LiberalIndex { LIBERAL_ESSENTIAL ,MAIN_CHALLENGE , MAIN_COMMUNICATION , MAIN_TRUST , MAIN_UNITE, MAIN_CREATIVE , MACH , MACH_PRACTICE };

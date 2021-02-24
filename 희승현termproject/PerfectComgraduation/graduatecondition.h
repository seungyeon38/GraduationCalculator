#pragma once
#include "account.h"
#include "subjectinfo.h"

class GraduateCondition
{
private:
   Account *user_account;
   SubjectInfo subjectinfo;
public:
   GraduateCondition();
   void InitAccount(Account *account);
   Account* GetAccount();

   int SubOfEngineering();
   int BSM();
   int MajorEssential();
   int MajorBasic();

   int GraduateConditionEssential();
   int GraduateConditionMain();
   int GraduateConditionMach();
   int GraduateConditionMachPractice();
   ~GraduateCondition();
};

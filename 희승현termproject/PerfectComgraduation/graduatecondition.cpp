#include "graduatecondition.h"


GraduateCondition::GraduateCondition()
{
}
void GraduateCondition::InitAccount(Account *account)
{
    user_account = account;
}

Account *GraduateCondition::GetAccount()
{
    return user_account;
}

int GraduateCondition::SubOfEngineering()
{
   int remainscore = 84;

   for (size_t i = 0; i < user_account->GetMajorIndex().size(); i++) {
      if (subjectinfo.GetMajorSubjects()[user_account->GetMajorIndex()[i].first][user_account->GetMajorIndex()[i].second].getDetailedSort() == "Engineering_subject") {
         remainscore -= subjectinfo.GetMajorSubjects()[user_account->GetMajorIndex()[i].first][user_account->GetMajorIndex()[i].second].getPoint();
      }

   }
   return remainscore;
}

int GraduateCondition::BSM() {

   int remainscore = 18;

   for (size_t i = 0; i < user_account->GetMajorIndex().size(); i++) {
      if (subjectinfo.GetMajorSubjects()[user_account->GetMajorIndex()[i].first][user_account->GetMajorIndex()[i].second].getDetailedSort() == "BSM") {
         remainscore -= subjectinfo.GetMajorSubjects()[user_account->GetMajorIndex()[i].first][user_account->GetMajorIndex()[i].second].getPoint();
      }
   }

   return remainscore;
}

int GraduateCondition::MajorEssential() {

   int remainscore = 12;

   for (size_t i = 0; i < user_account->GetMajorIndex().size(); i++) {
      if (user_account->GetMajorIndex()[i].first == MajorIndex::ESSENTIAL) {
         remainscore -= 3;
      }
   }
   return remainscore;
}

int GraduateCondition::MajorBasic() {

   int remainscore = 14;

   for (size_t i = 0; i < user_account->GetMajorIndex().size(); i++) {
      if (user_account->GetMajorIndex()[i].first == MajorIndex::BASIC) {
         remainscore -= subjectinfo.GetMajorSubjects()[1][user_account->GetMajorIndex()[i].second].getPoint();
      }
   }
   return remainscore;
}

int GraduateCondition::GraduateConditionEssential()
{
   int num = 0;
   for (size_t i = 0; i < user_account->GetLiberalIndex().size(); i++) {
      if (user_account->GetLiberalIndex()[i].first == LiberalIndex::LIBERAL_ESSENTIAL)
         num++;
   }
   return 12 - 2 * num;
}

int GraduateCondition::GraduateConditionMain()
{
   int num = 0;
   for (size_t i = 0; i < user_account->GetLiberalIndex().size(); i++) {
      if (user_account->GetLiberalIndex()[i].first == LiberalIndex::MAIN_CHALLENGE) {
         num++;
         break;
      }
   }

   for (size_t i = 0; i < user_account->GetLiberalIndex().size(); i++) {
      if (user_account->GetLiberalIndex()[i].first == LiberalIndex::MAIN_COMMUNICATION) {
         num++;
         break;
      }
   }

   for (size_t i = 0; i < user_account->GetLiberalIndex().size(); i++) {
      if (user_account->GetLiberalIndex()[i].first == LiberalIndex::MAIN_TRUST) {
         num++;
         break;
      }
   }

   for (size_t i = 0; i < user_account->GetLiberalIndex().size(); i++) {
      if (user_account->GetLiberalIndex()[i].first == LiberalIndex::MAIN_UNITE){
         num++;
         break;
      }
   }

   for (size_t i = 0; i < user_account->GetLiberalIndex().size(); i++) {
      if (user_account->GetLiberalIndex()[i].first == LiberalIndex::MAIN_CREATIVE) {
         num++;
         break;
      }

   }
   return 15 - 3 * num;
}

int GraduateCondition::GraduateConditionMach()
{
   int num = 0;
   for (size_t i = 0; i < user_account->GetLiberalIndex().size(); i++) {
      if (user_account->GetLiberalIndex()[i].first == LiberalIndex::MACH){
          num++;
      }
   }
   if(4 - 2 * num > 0){
        return 4 - 2 * num;
   }
   else
       return 0;
}

int GraduateCondition::GraduateConditionMachPractice()
{
   int num = 0;
   for (size_t i = 0; i < user_account->GetLiberalIndex().size(); i++) {
      if (user_account->GetLiberalIndex()[i].first == LiberalIndex::MACH_PRACTICE)
          num++;
   }
   if(2 - num > 0){
        return 2 - num;
   }
   else
       return 0;

}

GraduateCondition::~GraduateCondition()
{
}

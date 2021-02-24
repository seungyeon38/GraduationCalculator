#include "subjectinfo.h"


SubjectInfo::SubjectInfo()
{


  InitMajorSubjects();
  InitLiberalSubjects();
   MajorFileOpen();
   LiberalFileOpen();

}

void SubjectInfo::InitMajorSubjects()
{
   for (size_t i = 0; i < 3; i++) {
      major_subjects.push_back(QVector<Major>());

   }
}

void SubjectInfo::InitLiberalSubjects()
{
   for (size_t i = 0; i < 8; i++) {
      liberal_subjects.push_back(QVector<Liberal>());
   }
}


void SubjectInfo::MajorFileOpen()
{
   QString _sortation;
   QString _detailedSort;
   QString _name;
   int _point;
   int _grade;
   int _semester;
   QFile file("C:/Users/LeeSeungyeon/Documents/PerfectComgraduation/major2.txt");
   QString line;
   QStringList list;

   if(file.open(QIODevice::ReadOnly | QIODevice::Text))
   {
      QTextStream text(&file);
      while(!text.atEnd())
      {
          line = text.readLine();
          QTextCodec *codec = QTextCodec::codecForLocale();
          QString strUnicodeLine = codec->toUnicode( line.toLocal8Bit() );
          list = line.split(" ");
          _sortation = list[0];
          _detailedSort = list[1];
          _name = list[2];
          _point = list[3].toInt();
          _grade = list[4].toInt();
          _semester = list[5].toInt();


          Major major1(_sortation,_name,_point,_detailedSort,_grade,_semester);

          if (_sortation == "major") {
             major_subjects[MajorIndex::MAJOR].push_back(major1);
          }

          else if (_sortation == "major_basic") {
             major_subjects[MajorIndex::BASIC].push_back(major1);
          }

          else {
             major_subjects[MajorIndex::ESSENTIAL].push_back(major1);
          }
      }
    }


}

void SubjectInfo::LiberalFileOpen()
{
   QString _sortation;
   QString _name;
   int _point;

   QFile essential("C:/Users/LeeSeungyeon/Documents/PerfectComgraduation/liberal_essential2.txt");
   QFile main("C:/Users/LeeSeungyeon/Documents/PerfectComgraduation/liberal_main2.txt");
   QFile mach("C:/Users/LeeSeungyeon/Documents/PerfectComgraduation/MACH2.txt");

   QString essential_line;
   QStringList essential_list;

   if(essential.open(QIODevice::ReadOnly | QIODevice::Text))

   {
       QTextStream essential_stream(&essential);
       while(!essential_stream.atEnd())
       {           
           essential_line = essential_stream.readLine();
           QTextCodec *codec = QTextCodec::codecForLocale();
           QString strUnicodeLine = codec->toUnicode( essential_line.toLocal8Bit() );
           essential_list = essential_line.split(" ");
           _sortation = essential_list[0];
           _name = essential_list[1];
           _point = essential_list[2].toInt();



           Liberal liberal(_sortation, _name, _point);

           liberal_subjects[LiberalIndex::LIBERAL_ESSENTIAL].push_back(liberal);
       }
   }

   QString main_line;
   QStringList main_list;
   if(main.open(QIODevice::ReadOnly | QIODevice::Text))
   {
       QTextStream main_stream(&main);
       while(!main_stream.atEnd())
       {
           main_line = main_stream.readLine();
           QTextCodec *codec = QTextCodec::codecForLocale();
           QString strUnicodeLine = codec->toUnicode( main_line.toLocal8Bit() );
           main_list = main_line.split(" ");
           _sortation = main_list[0];
           _name = main_list[1];
           _point = main_list[2].toInt();


           Liberal liberal(_sortation, _name, _point);

           if (_sortation == "liberal_main_challenge")
              liberal_subjects[LiberalIndex::MAIN_CHALLENGE].push_back(liberal);
           else if (_sortation == "liberal_main_communication")
              liberal_subjects[LiberalIndex::MAIN_COMMUNICATION].push_back(liberal);
           else if (_sortation == "liberal_main_trust")
              liberal_subjects[LiberalIndex::MAIN_TRUST].push_back(liberal);
           else if (_sortation == "liberal_main_unite")
              liberal_subjects[LiberalIndex::MAIN_UNITE].push_back(liberal);
           else
              liberal_subjects[LiberalIndex::MAIN_CREATIVE].push_back(liberal);
       }

   }

   QString mach_line;
   QStringList mach_list;
   if(mach.open(QIODevice::ReadOnly | QIODevice::Text))
   {
       QTextStream mach_stream(&mach);
       while(!mach_stream.atEnd())
       {
           mach_line = mach_stream.readLine();
           QTextCodec *codec = QTextCodec::codecForLocale();
           QString strUnicodeLine = codec->toUnicode( mach_line.toLocal8Bit() );
           mach_list = mach_line.split(" ");
           _sortation = mach_list[0];
           _name = mach_list[1];
           _point = mach_list[2].toInt();

           Liberal liberal(_sortation, _name, _point);

           if(_sortation == "liberal_MACH"){
               liberal_subjects[LiberalIndex::MACH].push_back(liberal);
           }

           else if(_sortation == "liberal_MACH_Practice"){
               liberal_subjects[LiberalIndex::MACH_PRACTICE].push_back(liberal);

           }
       }
   }
}


QVector<QVector<Major>> SubjectInfo::GetMajorSubjects()
{
   return major_subjects;
}


QVector<QVector<Liberal>> SubjectInfo::GetLiberalSubjects()
{
   return liberal_subjects;
}



SubjectInfo::~SubjectInfo()
{
}

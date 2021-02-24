#pragma once
#include "major.h"
#include "liberal.h"
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QTextCodec>

class SubjectInfo
{
private:
   QVector<QVector<Major>> major_subjects;
   QVector<QVector<Liberal>> liberal_subjects;

public:
   SubjectInfo();
   void MajorFileOpen();
   void LiberalFileOpen();
   void InitMajorSubjects();
   void InitLiberalSubjects();
   QVector<QVector<Major>> GetMajorSubjects();
   QVector<QVector<Liberal>> GetLiberalSubjects();
   ~SubjectInfo();
};

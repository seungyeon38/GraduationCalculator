#include "curriculum.h"
#include "ui_curriculum.h"
#include <QLabel>
#include <QImage>
#include <QPixmap>
Curriculum::Curriculum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Curriculum)
{
    ui->setupUi(this);
}

Curriculum::~Curriculum()
{
    delete ui;
}

void Curriculum::imgload()
{
    QImage img2;
    QPixmap buf2;

    img2.load("C:/Users/LeeSeungyeon/Documents/Curriculum_.png");
    buf2 = QPixmap::fromImage(img2);
    buf2 = buf2.scaled(img2.width(), img2.height());

    QLabel *ibView = new QLabel(this);
    ibView->setPixmap(buf2);
    ibView->resize(buf2.width(), buf2.height());
    ibView->show();
}


#ifndef CURRICULUM_H
#define CURRICULUM_H

#include <QDialog>

namespace Ui {
class Curriculum;
}

class Curriculum : public QDialog
{
    Q_OBJECT

public:
    explicit Curriculum(QWidget *parent = nullptr);
    ~Curriculum();
    void imgload();
private:
    Ui::Curriculum *ui;
};

#endif // CURRICULUM_H

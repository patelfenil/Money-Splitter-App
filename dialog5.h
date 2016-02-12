#ifndef DIALOG5_H
#define DIALOG5_H

#include <QDialog>

namespace Ui {
class Dialog5;
}

class Dialog5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog5(QWidget *parent = 0);
    ~Dialog5();

public slots:
    void on_Dialog5_accepted(QString c,QString d,QString e,QString f,QString g,QString h,double a1,double b1,double c1,double d1,double e1,double f1);

public:
    Ui::Dialog5 *ui;

};

#endif // DIALOG5_H

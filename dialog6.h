#ifndef DIALOG6_H
#define DIALOG6_H

#include <QDialog>

namespace Ui {
class Dialog6;
}

class Dialog6 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog6(QWidget *parent = 0);
    ~Dialog6();

public slots:
    void on_Dialog6_accepted(QString c,QString d,QString e,QString f,QString g,QString h,double a1,double b1,double c1,double d1,double e1,double f1,int a);



private:
    Ui::Dialog6 *ui;
};

#endif // DIALOG6_H

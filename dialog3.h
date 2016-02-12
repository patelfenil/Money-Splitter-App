#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>
#include <QCheckBox>
#include <QDoubleSpinBox>
namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(QWidget *parent = 0);
    ~Dialog3();
    QCheckBox *check1,*check2,*check3,*check4,*check5,*check6;
     //QLineEdit *lineEdit1,*lineEdit2,*lineEdit3,*lineEdit4,*lineEdit5,*lineEdit6;
    QDoubleSpinBox *db1,*db2,*db3,*db4,*db5,*db6;
    QString x1,x2,x3,x4,x5,x6;
    int x7,x8;
    double x9,x10,x11,x12,x13,x14;
public slots:
    void on_Dialog3_accepted(int a,int b,QString c,QString d,QString e,QString f,QString g,QString h,double a1,double b1,double c1,double d1,double e1,double f1);

public:
    Ui::Dialog3 *ui;
public slots:
    void on_pushButton_clicked();
};

#endif // DIALOG3_H

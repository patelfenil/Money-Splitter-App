#ifndef DIALOG2_H
#define DIALOG2_H
#include <QCheckBox>
#include <QDialog>
#include <QLineEdit>
#include <QDoubleSpinBox>
namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = 0);
    ~Dialog2();
    QCheckBox *check1,*check2,*check3,*check4,*check5,*check6;
     //QLineEdit *lineEdit1,*lineEdit2,*lineEdit3,*lineEdit4,*lineEdit5,*lineEdit6;
    QDoubleSpinBox *db1,*db2,*db3,*db4,*db5,*db6;
    QString x1,x2,x3,x4,x5,x6;
    int x7,x8;
public slots:
    void on_Dialog2_accepted(int a,int b,QString c,QString d,QString e,QString f,QString g,QString h);

public:
    Ui::Dialog2 *ui;
private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG2_H

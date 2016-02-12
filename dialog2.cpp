#include "dialog2.h"
#include "ui_dialog2.h"
#include "dialog1.h"
#include <QLabel>
#include <QMessageBox>
#include "dialog3.h"
#include "dialog5.h"
#include "dialog6.h"
Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);

}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_Dialog2_accepted(int a,int b,QString c,QString d,QString e,QString f,QString g,QString h)
{
    QFont font;
    font.setPointSize(10);
    x1=c;
    x2=d;
    x3=e;
    x4=f;
    x5=g;
    x6=h;
    x7=a;
    x8=b-1;
    //x=b-1;
int j1=a+2;
   //QMessageBox::information(this,"t",x);
   QLabel *label1 = new QLabel(this);
   label1->setGeometry(90+50,32+50, 271, 15);
   label1->show();
   label1->setText("Enter The Name Amount Paid by "+c+" :");
   label1->setFont(font);

   check1 = new QCheckBox(this);
   check1->setGeometry(150+180+50,35+50,10,10);


   db1 =new QDoubleSpinBox(this);
   db1->setGeometry(360+50,30+50,80,20);
    db1->setMaximum(10000000000);
   QLabel *label2 = new QLabel(this);
   label2->setGeometry(90+50,62+50, 271, 15);
   label2->setFont(font);
   label2->show();
    label2->setText("Enter The Name Amount Paid by "+d+" :");
    check2 = new QCheckBox(this);
    check2->setGeometry(150+180+50,65+50,10,10);
    db2 =new QDoubleSpinBox(this);
    db2->setGeometry(360+50,60+50,80,20);
    db2->setMaximum(10000000000);

   j1=j1-2;



   if(j1>0)
   {


       QLabel *label3 = new QLabel(this);
       label3->setGeometry(90+50,92+50, 271, 15);
       label3->setFont(font);
       label3->show();
       label3->setText("Enter The Name Amount Paid by "+e+" :");

        j1=j1-1;
        check3 = new QCheckBox(this);
        check3->setGeometry(110+90+180,95+50,10,10);

        db3 =new QDoubleSpinBox(this);
        db3->setGeometry(320+90,90+50,80,20);
        db3->setMaximum(10000000000);
    }
   else
   {
       check3 = new QCheckBox(this);
       check3->setGeometry(110+180,185,0,0);
        db3 =new QDoubleSpinBox(this);
       db3->setGeometry(320,180,0,0);
   }
       if(j1>0)
       {
       QLabel *label4 = new QLabel(this);
       label4->setGeometry(90+50,122+50, 271, 15);
       label4->setFont(font);
       label4->show();
       label4->setText("Enter The Name Amount Paid by "+f+" :");

        check4 = new QCheckBox(this);
        check4->setGeometry(110+180+90,125+50,10,10);
       j1=j1-1;
       db4 =new QDoubleSpinBox(this);
       db4->setGeometry(320+90,120+50,80,20);
       db4->setMaximum(10000000000);
       }
       else
       {
           check4 = new QCheckBox(this);
           check4->setGeometry(110+180,185,0,0);
            db4 =new QDoubleSpinBox(this);
            db4->setGeometry(320,180,0,0);
       }
       if(j1>0)
       {
       QLabel *label5 = new QLabel(this);
       label5->setGeometry(90+50,152+50, 271, 15);
       label5->setFont(font);
       label5->show();
       label5->setText("Enter The Name Amount Paid by "+g+" :");

       check5 = new QCheckBox(this);
       check5->setGeometry(110+180+90,155+50,10,10);

       db5 =new QDoubleSpinBox(this);
       db5->setGeometry(320+90,150+50,80,20);
       db5->setMaximum(10000000000);
       j1=j1-1;
       }
       else
       {
           check5 = new QCheckBox(this);
           check5->setGeometry(110+180,185,0,0);
           db5 =new QDoubleSpinBox(this);
           db5->setGeometry(320,180,0,0);
       }
       if(j1>0)
       {
       QLabel *label6 = new QLabel(this);
       label6->setGeometry(90+50,182+50, 271, 15);
       label6->setFont(font);
       label6->show();
       label6->setText("Enter The Name Amount Paid by "+h+" :");
       check6 = new QCheckBox(this);
       check6->setGeometry(110+180+90,185+50,10,10);

       db6 =new QDoubleSpinBox(this);
       db6->setGeometry(320+90,180+50,80,20);
       db6->setMaximum(10000000000);
       j1=j1-1;
       }
       else
       {
           check6 = new QCheckBox(this);
           check6->setGeometry(110+180,185,0,0);
           db6 =new QDoubleSpinBox(this);
           db6->setGeometry(320,180,0,0);
       }


}

void Dialog2::on_pushButton_clicked()
{
    double a[5];
    int count=0;
    if(check1->isChecked()==true)
    {
        a[0]=db1->value();
        count++;
    }
    else
    {
        a[0]=0;
    }
    if(check2->isChecked()==true)
    {
        a[1]=db2->value();
        count++;
    }
    else
    {
        a[1]=0;
    }
    if(check3->isChecked()==true)
    {
        a[2]=db3->value();
        count++;
    }
    else
    {
        a[2]=0;
    }
    if(check4->isChecked()==true)
    {
        a[3]=db4->value();
        count++;
    }
    else
    {
        a[3]=0;
    }
    if(check5->isChecked()==true)
    {
        a[4]=db5->value();
        count++;
    }
    else
    {
        a[4]=0;
    }
    if(check6->isChecked()==true)
    {
        a[5]=db6->value();
        count++;
    }
    else
    {
        a[5]=0;
    }
    double sum =a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
    sum=sum/count;

    if(check1->isChecked()==true)
    {
        a[0]=a[0]-sum;
    }
    if(check2->isChecked()==true)
    {
        a[1]=a[1]-sum;
    }
    if(check3->isChecked()==true)
    {
        a[2]=a[2]-sum;
    }
    if(check4->isChecked()==true)
    {
        a[3]=a[3]-sum;
    }
    if(check5->isChecked()==true)
    {
        a[4]=a[4]-sum;
    }
    if(check6->isChecked()==true)
    {
        a[5]=a[5]-sum;

    }

    if(x8>0)
    {
        this->hide();
        Dialog3 d;
        d.on_Dialog3_accepted(x7,x8,x1,x2,x3,x4,x5,x6,a[0],a[1],a[2],a[3],a[4],a[5]);
        d.exec();

    }
    else
    {
        this->hide();
        Dialog6 f;
        f.on_Dialog6_accepted(x1,x2,x3,x4,x5,x6,a[0],a[1],a[2],a[3],a[4],a[5],x7);
        f.exec();
    }
}

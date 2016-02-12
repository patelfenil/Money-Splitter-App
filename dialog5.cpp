#include "dialog5.h"
#include "ui_dialog5.h"
#include <QLabel>
//#include <QMessageBox>
Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);
}

Dialog5::~Dialog5()
{
    delete ui;
}

void Dialog5::on_Dialog5_accepted(QString c,QString d,QString e,QString f,QString g,QString h,double a1,double b1,double c1,double d1,double e1,double f1)
{

    double a[5];
    a[0]=a1;
    int k=0;
    //QMessageBox::information(this,"t",QString::number(a[0]));
    a[1]=b1;
    a[2]=c1;
    a[3]=d1;
    a[4]=e1;
    a[5]=f1;
    QString b[5];
    b[0]=c;
    b[1]=d;
    b[2]=e;
    b[3]=f;
    b[4]=g;
    b[5]=h;
    int x=30;
    int i,j;
     double temp;
     // QString temp1;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(a[i]>a[j])
            {

                temp=a[i];
                a[i]=a[j];
                a[j]=temp;


                QString tempa=b[i];
                b[i]=b[j];
                b[j]=tempa;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=5;j>i;j--)
        {
            if(((-a[i])>a[j])&&a[i]!=0&&a[j]!=0)
            {
                a[i]=a[i]+a[j];
                a[j]=0;


                //label[k]= new QLabel(this);
                //label[k]->setGeometry(290,x, 271, 20);

                //label[k]->show();
               // label[k]->setText(b[i]+" has to give "+QString::number(a[j])+" rupees to "+b[j]+".");
               // ui->textBrowser->setText(b[i]+" has to give "+QString::number(a[j])+" rupees to "+b[j]+".");
                k++;
                x=x+30;
            }
            else if(((-a[i])<=a[j])&&a[i]!=0&&a[j]!=0)
            {
                a[j]=a[i]+a[j];
                a[i]=0;

                // label[k]= new QLabel(this);
                // label[k]->setGeometry(290,x, 271, 20);

                //label[k]->show();
                //label[k]->setText(b[i]+" has to give "+QString::number(-a[i])+" rupees to "+b[j]+".");
                k++;
                x=x+30;
            }
            else
            {
                x=x+0;
            }
        }
    }

}



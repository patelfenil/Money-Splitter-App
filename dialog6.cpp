#include "dialog6.h"
#include "ui_dialog6.h"
#include <QLabel>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
Dialog6::Dialog6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog6)
{
    ui->setupUi(this);
}

Dialog6::~Dialog6()
{
    delete ui;
}

void Dialog6::on_Dialog6_accepted(QString c,QString d,QString e,QString f,QString g,QString h,double a1,double b1,double c1,double d1,double e1,double f1,int z)
{
    QLabel *label,*label1,*label2;
    z=z+2;
    double a[5];
    QFont font;
    font.setPointSize(11);

    a[0]=a1;
    a[1]=b1;
    a[2]=c1;
    a[3]=d1;
    a[4]=e1;
    a[5]=f1;


    QString b[6];
    b[0]=c;
    b[1]=d;
    b[2]=e;
    b[3]=f;
    b[4]=g;
    b[5]=h;
    int x=130;
    int i,j;
    double ab[6]={0};
    int a2[6]={0},a3[6]={0};
    int k=0;
    for( i=0;i<z;i++)
    {
        for(j=i+1;j<z;j++)
        {
            if(a[i]!=0&&a[j]!=0)
            {
                if(a[i]>0&&a[j]<0)
                {
                    if(a[i]>(-a[j]))
                    {
                        ab[k]=-a[j];
                        a2[k]=i;
                        a3[k]=j;
                        a[i]=a[i]+a[j];
                        a[j]=0;
                        k++;
                    }
                    else
                    {
                        ab[k]=a[i];
                        a2[k]=i;
                        a3[k]=j;
                        a[j]=a[i]+a[j];
                        a[i]=0;
                        k++;
                    }
                }
                if(a[i]<0&&a[j]>0)
                {
                    if(a[j]>(-a[i]))
                    {
                        ab[k]=-a[i];
                        a2[k]=j;
                        a3[k]=i;
                        a[j]=a[j]+a[i];
                        a[i]=0;
                        k++;
                    }
                    else
                    {
                        ab[k]=a[j];
                        a2[k]=j;
                        a3[k]=i;
                        a[i]=a[j]+a[i];
                        a[j]=0;
                        k++;
                    }
                }

            }
        }
    }
    //thisone
    label= new QLabel(this);
    label1= new QLabel(this);
    label2= new QLabel(this);


    QString filename = "C:/Users/Baldevbhai123/Desktop/ab.txt";
    QFile mfile(filename);
    mfile.open(QFile::WriteOnly|QFile::Text);
    QTextStream out(&mfile);
    out<<"MONEY SPLITTING:"<<endl<<endl;

    for(i=0;i<k;i++)
    {
        label= new QLabel(this);
        label1= new QLabel(this);
        label2= new QLabel(this);
        label->setGeometry(110+80+50,x, 350, 30);
        label->setFont(font);

        label1->setGeometry(235+80+50,x, 350, 30);
        label1->setFont(font);

        label2->setGeometry(265+80+50,x, 350, 30);
        label2->setFont(font);
        label->setText(b[a3[i]]+" has to give ");
        label1->setNum(ab[i]);
        label2->setText(" rupees to "+b[a2[i]]+".");
        out<<b[a3[i]]<<" has to give  "<<ab[i]<<"    rupees to "<<b[a2[a2[i]]]<<"."<<endl;
        x=x+30;

    }

    mfile.flush();
    mfile.close();


























    //double temp;
     // QString temp1;
    /*for(i=0;i<6;i++)
    {
        if(a[i]!=0)
        {
        for(j=i+1;j<6;j++)
        {
            if(a[j]!=0)
            {
                if(a[i]<0&&a[j]>0)
                {
                    if((-a[i])>a[j])
                    {
                        label= new QLabel(this);
                        label->setGeometry(110+80+50,x, 350, 30);
                        label->setFont(font);
                        label1= new QLabel(this);
                        label1->setGeometry(235+80+50,x, 350, 30);
                        label1->setFont(font);
                        label2= new QLabel(this);
                        label2->setGeometry(265+80+50,x, 350, 30);
                        label2->setFont(font);
                        label->setText(b[i]+" has to give ");
                        label1->setNum(a[j]);
                        label2->setText(" rupees to "+b[j]+".");
                        a[i]=a[i]+a[j];
                        a[j]=0;

                        x=x+30;


                    }
                    else
                    {

                        label= new QLabel(this);
                        label->setGeometry(110+80+50,x, 350, 30);
                        label->setFont(font);
                        label1= new QLabel(this);
                        label1->setGeometry(235+80+50,x, 350, 30);
                        label1->setFont(font);
                        label2= new QLabel(this);
                        label2->setGeometry(265+80+50,x, 350, 30);
                        label2->setFont(font);

                        //label[k]->show();
                        label->setText(b[i]+" has to give ");
                        label1->setNum(-a[i]);
                        label2->setText(" rupees to "+b[j]+".");
                        a[j]=a[i]+a[j];
                        a[i]=0;

                        x=x+30;

                    }
                }
                if(a[i]>0&&a[j]<0)
                {
                    if((-a[j])>a[i])
                    {
                        label= new QLabel(this);
                        label->setGeometry(110+80+50,x, 350, 30);
                        label->setFont(font);
                        label1= new QLabel(this);
                        label1->setGeometry(235+80+50,x, 350, 30);
                        label1->setFont(font);
                        label2= new QLabel(this);
                        label2->setGeometry(265+80+50,x, 350, 30);
                        label2->setFont(font);
                        label->setText(b[j]+" has to give ");
                        label1->setNum(a[i]);
                        label2->setText(" rupees to "+b[i]+".");
                        a[j]=a[j]+a[i];
                        a[i]=0;

                        x=x+30;


                    }
                    else
                    {

                        label= new QLabel(this);
                        label->setGeometry(110+80+50,x, 350, 30);
                        label->setFont(font);
                        label1= new QLabel(this);
                        label1->setGeometry(235+80+50,x, 350, 30);
                        label1->setFont(font);
                        label2= new QLabel(this);
                        label2->setGeometry(265+80+50,x, 350, 30);
                        label2->setFont(font);

                        //label[k]->show();
                        label->setText(b[j]+" has to give ");
                        label1->setNum(-a[j]);
                        label2->setText(" rupees to "+b[i]+".");
                        a[i]=a[j]+a[i];
                        a[j]=0;

                        x=x+30;

                    }
                }
            }
        }
        }
    }

    for( i=0;i<6;i++)
    {


        for( j=5;j>i;j--)
        {

            if(a[i]!=0&&a[j]!=0)
            {
            if((-a[i])>a[j])
            {
                label= new QLabel(this);
                label->setGeometry(110+80+50,x, 350, 30);
                label->setFont(font);
                label1= new QLabel(this);
                label1->setGeometry(235+80+50,x, 350, 30);
                label1->setFont(font);
                label2= new QLabel(this);
                label2->setGeometry(265+80+50,x, 350, 30);
                label2->setFont(font);
                label->setText(b[i]+" has to give ");
                label1->setNum(a[j]);
                label2->setText(" rupees to "+b[j]+".");
                a[i]=a[i]+a[j];
                a[j]=0;

                x=x+30;


            }
            else
            {

                label= new QLabel(this);
                label->setGeometry(110+80+50,x, 350, 30);
                label->setFont(font);
                label1= new QLabel(this);
                label1->setGeometry(235+80+50,x, 350, 30);
                label1->setFont(font);
                label2= new QLabel(this);
                label2->setGeometry(265+80+50,x, 350, 30);
                label2->setFont(font);

                //label[k]->show();
                label->setText(b[i]+" has to give ");
                label1->setNum(-a[i]);
                label2->setText(" rupees to "+b[j]+".");
                a[j]=a[i]+a[j];
                a[i]=0;

                x=x+30;

            }
            }
        }
    }*/


}



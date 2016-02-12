#include "dialog1.h"
#include "ui_dialog1.h"
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>
#include "dialog2.h"
#include "dialog4.h"
int t1;
Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);

    for(int i=1;i<4;i++)
    {
      ui->comboBox->addItem(QString::number(i));
    }
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_Dialog1_accepted(int t)
{
    QFont font;
    font.setPointSize(10);
    //QMessageBox::information(this,"t",QString::number(t));
    int j=t+2;
    t1=t;
   lineEdit1= new QLineEdit(this);
   lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
   lineEdit1->setGeometry(290,30+50, 271, 20);

   //lineEdit1->show();

   QLabel *label1 = new QLabel(this);
   label1->setObjectName(QString::fromUtf8("l1"));
   label1->setGeometry(100,32+50,265, 10);
   label1->setFont(font);
   //label1->show();
   label1->setText("Enter The Name Of 1st Person:");

   NAME1= lineEdit1->text();

    lineEdit2 = new QLineEdit(this);
   lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));
   lineEdit2->setGeometry(290,60+50, 271, 20);
   //lineEdit2->show();


   QLabel *label2 = new QLabel(this);
   label2->setObjectName(QString::fromUtf8("l2"));
   label2->setGeometry(100,62+50,265, 10);
   label2->setFont(font);
   //label2->show();
   label2->setText("Enter The Name Of 2nd Person:");

    NAME2= lineEdit2->text();

   j=j-2;


   if(j>0)
   {
       lineEdit3 = new QLineEdit(this);
       lineEdit3->setObjectName(QString::fromUtf8("lineEdit3"));
      lineEdit3->setGeometry(290,90+50, 271, 20);
       //lineEdit3->show();

       QLabel *label3 = new QLabel(this);
       label3->setObjectName(QString::fromUtf8("l3"));
       label3->setGeometry(100,92+50, 271, 10);
       label3->setFont(font);
       //label3->show();
       label3->setText("Enter The Name Of 3rd Person:");

        NAME3= lineEdit3->text();
        j=j-1;
}
   else
   {
       lineEdit3 = new QLineEdit(this);
       lineEdit3->setObjectName(QString::fromUtf8("lineEdit3"));
       lineEdit3->setGeometry(29000,90,0,0);
   }
       if(j>0)
       {




       lineEdit4 = new QLineEdit(this);
       lineEdit4->setObjectName(QString::fromUtf8("lineEdit4"));
       lineEdit4->setGeometry(290,120+50, 271, 20);
       //lineEdit4->show();

       QLabel *label4 = new QLabel(this);
       label4->setObjectName(QString::fromUtf8("l4"));
       label4->setGeometry(100,122+50, 271, 10);
       label4->setFont(font);
       //label4->show();
       label4->setText("Enter The Name Of 4th Person:");

       NAME4= lineEdit4->text();
       j=j-1;
       }
       else
       {
           lineEdit4 = new QLineEdit(this);
           lineEdit4->setObjectName(QString::fromUtf8("lineEdit4"));
           lineEdit4->setGeometry(29000,120, 0, 0);
       }
       if(j>0)
       {



       lineEdit5 = new QLineEdit(this);
       lineEdit5->setObjectName(QString::fromUtf8("lineEdit5"));
       lineEdit5->setGeometry(290,150+50, 271, 20);
       //lineEdit5->show();

       QLabel *label5 = new QLabel(this);
       label5->setObjectName(QString::fromUtf8("l5"));
       label5->setGeometry(100,152+50, 271, 10);
       label5->setFont(font);
       //label5->show();
       label5->setText("Enter The Name Of 5th Person:");

        NAME5= lineEdit5->text();
        j=j-1;
       }
       else
       {
           lineEdit5 = new QLineEdit(this);
           lineEdit5->setGeometry(29000,150, 0, 0);
       }
       if(j>0)
       {



       lineEdit6 = new QLineEdit(this);
       lineEdit6->setObjectName(QString::fromUtf8("lineEdit6"));
       lineEdit6->setGeometry(290,180+50, 271, 20);
       //lineEdit6->show();

       QLabel *label6 = new QLabel(this);
       label6->setObjectName(QString::fromUtf8("l6"));
       label6->setGeometry(100,182+50, 271, 10);
       label6->setFont(font);
      // label6->show();
       label6->setText("Enter The Name Of 6th Person:");
       j=j-1;
       }
       else
       {
           lineEdit6 = new QLineEdit(this);
           lineEdit6->setGeometry(29000,180, 0, 0);
       }

}

void Dialog1::on_pushButton_clicked()
{
    this->hide();
        NAME1=lineEdit1->text();
        NAME2=lineEdit2->text();
        NAME3=lineEdit3->text();
        NAME4=lineEdit4->text();
        NAME5=lineEdit5->text();
        NAME6=lineEdit6->text();
        int k=ui->comboBox->currentIndex();
        k=k+1;
        Dialog2 d;
        d.on_Dialog2_accepted(t1,k,NAME1,NAME2,NAME3,NAME4,NAME5,NAME6);
        d.exec();
}

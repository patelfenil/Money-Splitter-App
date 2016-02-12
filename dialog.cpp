#include "dialog.h"
#include "ui_dialog.h"
#include "dialog1.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Baldevbhai123/Desktop/download.jpg");
    ui->label_2->setPixmap(pix);
    for(int i=2;i<7;i++)
    {
      ui->comboBox->addItem(QString::number(i));
    }

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    this->hide();
    int t=ui->comboBox->currentIndex();
    Dialog1 d;
    d.on_Dialog1_accepted(t);
    d.exec();
}

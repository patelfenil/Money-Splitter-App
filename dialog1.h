#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include <QLineEdit>
namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();
    QString NAME1,NAME2,NAME3,NAME4,NAME5,NAME6;
    QLineEdit *lineEdit1,*lineEdit2,*lineEdit3,*lineEdit4,*lineEdit5,*lineEdit6;
public slots:
    void on_Dialog1_accepted(int t);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog1 *ui;
};

#endif // DIALOG1_H

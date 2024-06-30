#include "record_image.h"
#include "ui_record_image.h"
#include"mainwindow.h"
#include<QString>
record_image::record_image(QWidget *parent,int n)
    : QDialog(parent),num(n)
    , ui(new Ui::record_image)
{
    ui->setupUi(this);
    QString t1="D:/Programs/FOUNDATION/Code/QT/timecontroller/image/star_/";
    QString t2;
    if(MainWindow::star_[num]==1)
        t2 = QString::number(num);
    else
        t2=QString::number(0);
    QString path=t1+t2+".jpg";
    QPixmap pixmap(path);
    ui->label->setPixmap(pixmap);
    ui->label->setScaledContents(true);
    ui->pushButton->show();
}

record_image::~record_image()
{
    delete ui;
}

void record_image::on_pushButton_clicked()
{
    close();
}


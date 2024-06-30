#include "collect.h"
#include "ui_collect.h"
#include "mainwindow.h"
#include <cstdlib>
#include <QString>
#include <QLabel>
Collect::Collect(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Collect)
{
    ui->setupUi(this);
    int m=0;
    while(true){
        int r=rand()%16+1;
        if(MainWindow::star_[r]==0){
            MainWindow::star_[r]=1;m=r;break;
        }
    }
    QString temp1="D:/Programs/FOUNDATION/Code/QT/timecontroller/image/star_/";
    QString temp2 = QString::number(m);
    QString path=temp1+temp2+".jpg";
    QPixmap pixmap(path);
    QLabel *image= findChild<QLabel *>("image");
    image->setPixmap(pixmap);
    image->setScaledContents(true);
    QPushButton *p=findChild<QPushButton *>("Collect_the_Star");
    qDebug()<<p;
    p->show();
}
Collect::~Collect()
{
    delete ui;
}
void Collect::on_Collect_the_Star_clicked()
{
    close();
}

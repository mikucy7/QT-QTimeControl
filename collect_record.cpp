#include "collect_record.h"
#include "ui_collect_record.h"
#include"record_image.h"

collect_record::collect_record(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::collect_record)
{
    ui->setupUi(this);
    QString temp1="D:/Programs/FOUNDATION/Code/QT/timecontroller/image/record.jpg";
    QPixmap pixmap(temp1);
    QLabel *image= findChild<QLabel *>("image");
    image->setPixmap(pixmap);
    image->setScaledContents(true);
}

collect_record::~collect_record()
{
    delete ui;
}

void collect_record::on_temp1_clicked()
{
    record_image *s=new record_image (this,1);
    s->show();
}


void collect_record::on_temp2_clicked()
{
    record_image *s=new record_image (this,2);
    s->show();
}


void collect_record::on_temp10_clicked()
{
    record_image *s=new record_image (this,10);
    s->show();
}


void collect_record::on_temp11_clicked()
{
    record_image *s=new record_image (this,11);
    s->show();
}


void collect_record::on_temp12_clicked()
{
    record_image *s=new record_image (this,12);
    s->show();
}


void collect_record::on_temp13_clicked()
{
    record_image *s=new record_image (this,13);
    s->show();
}


void collect_record::on_temp14_clicked()
{
    record_image *s=new record_image (this,14);
    s->show();
}


void collect_record::on_temp15_clicked()
{
    record_image *s=new record_image (this,15);
    s->show();
}


void collect_record::on_temp16_clicked()
{
    record_image *s=new record_image (this,16);
    s->show();
}


void collect_record::on_temp3_clicked()
{
    record_image *s=new record_image (this,3);
    s->show();
}


void collect_record::on_temp4_clicked()
{
    record_image *s=new record_image (this,4);
    s->show();
}


void collect_record::on_temp5_clicked()
{
    record_image *s=new record_image (this,5);
    s->show();
}


void collect_record::on_temp6_clicked()
{
    record_image *s=new record_image (this,6);
    s->show();
}


void collect_record::on_temp7_clicked()
{
    record_image *s=new record_image (this,7);
    s->show();
}



void collect_record::on_temp8_clicked()
{
    record_image *s=new record_image (this,8);
    s->show();
}


void collect_record::on_temp9_clicked()
{
    record_image *s=new record_image (this,9);
    s->show();
}


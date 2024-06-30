#include "arrange_change.h"
#include "ui_arrange_change.h"

changetask::changetask(QString name,QDateTime datetime,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changetask)
{
    ui->setupUi(this);
    ui->textEdit->setText(name);
    ui->dateTimeEdit->setDateTime(datetime);
    settime();
}

changetask::~changetask()
{
    delete ui;
}

void changetask::on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime)
{
    emit senddatetime(dateTime);
    settime();
}

void changetask::on_textEdit_textChanged()
{
    emit sendqstring(ui->textEdit->toPlainText());
}


void changetask::on_pushButton_2_clicked()
{
    emit senddatetime(ui->dateTimeEdit->dateTime());
    emit sendqstring(ui->textEdit->toPlainText());
}

void changetask::settime(){
    qint64 hr=QDateTime::currentDateTime().secsTo(ui->dateTimeEdit->dateTime())/3600;
    qint64 days=hr/24;
    hr%=24;
    ui->time_left->setText(QString("还剩%1天%2小时").arg(days).arg(hr));
}

void changetask::on_pushButton_3_clicked()
{
    emit sendbool(1);
}


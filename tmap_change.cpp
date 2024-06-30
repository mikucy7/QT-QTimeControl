#include "tmap_change.h"
#include "ui_tmap_change.h"

tmap_change::tmap_change(QDateTime st,QDateTime ed,QString name,QString color,QString des,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tmap_change)
{
    ui->setupUi(this);
    ui->dateTimeEdit->setDateTime(st);
    ui->dateTimeEdit_2->setDateTime(ed);
    ui->textEdit->setText(name);
    ui->lineEdit->setText(color);
    ui->textEdit_2->setText(des);
}

tmap_change::~tmap_change()
{
    delete ui;
}

void tmap_change::on_buttonBox_accepted()
{
    QStringList lis(ui->textEdit->toPlainText());
    lis.append(ui->lineEdit->text());
    lis.append(ui->textEdit_2->toPlainText());
    emit sendqstringlist(lis);
    emit senddatetimes(ui->dateTimeEdit->dateTime());
    emit senddatetimee(ui->dateTimeEdit_2->dateTime());
}


void tmap_change::on_deltmap_clicked()
{
    emit sendbool(1);
}


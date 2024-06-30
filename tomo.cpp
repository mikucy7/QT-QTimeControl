#include "tomo.h"
#include "ui_tomo.h"

tomo::tomo(QString name,int min,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tomo)
{
    ui->setupUi(this);
    ui->label_3->setText(name);
    ui->lineEdit->setText(QString("%1").arg(min));
}

tomo::~tomo()
{
    delete ui;
}

void tomo::on_buttonBox_accepted()
{
    emit sendqstring(ui->lineEdit->text());
}


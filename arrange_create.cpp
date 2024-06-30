#include "arrange_create.h"
#include "ui_arrange_create.h"

createtask::createtask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::createtask)
{
    ui->setupUi(this);
}

createtask::~createtask()
{
    delete ui;
}

void createtask::on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime)
{
    emit senddatetime(dateTime);
}



void createtask::on_textEdit_textChanged()
{
    emit sendqstring(ui->textEdit->toPlainText());
}


void createtask::on_buttonBox_accepted()
{
    emit senddatetime(ui->dateTimeEdit->dateTime());
    emit sendqstring(ui->textEdit->toPlainText());
}


#include "tmap_create.h"
#include "ui_tmap_create.h"

tmap_create::tmap_create(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tmap_create)
{
    ui->setupUi(this);
}

tmap_create::~tmap_create()
{
    delete ui;
}

void tmap_create::on_buttonBox_accepted()
{
    QStringList lis(ui->textEdit->toPlainText());
    lis.append(ui->lineEdit->text());
    lis.append(ui->textEdit_2->toPlainText());
    emit sendqstringlist(lis);
    emit senddatetimes(ui->dateTimeEdit->dateTime());
    emit senddatetimee(ui->dateTimeEdit_2->dateTime());
}


void tmap_create::on_checkBox_stateChanged(int arg1)
{
    emit sendbool(ui->checkBox->isChecked());
}


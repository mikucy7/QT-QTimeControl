#include "search.h"
#include "ui_search.h"
#include<QLabel>
search::search(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::search)
{
    ui->setupUi(this);
    QLabel *resultLabel = findChild<QLabel *>("resultLabel");
}

search::~search()
{
    delete ui;
}

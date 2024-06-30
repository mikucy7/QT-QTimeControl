#include "jxm.h"
#include "ui_jxm.h"

jxm::jxm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::jxm)
{
    ui->setupUi(this);
}

jxm::~jxm()
{
    delete ui;
}

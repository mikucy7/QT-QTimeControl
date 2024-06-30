#include "decoration_selection.h"
#include "ui_decoration_selection.h"

decoration_selection::decoration_selection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::decoration_selection)
{
    ui->setupUi(this);
}

decoration_selection::~decoration_selection()
{
    delete ui;
}

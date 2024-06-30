#include <QFont>
#include <QFontDialog>
#include <QFileDialog>

#include "decorator.h"
#include "ui_decorator.h"
#include "mainwindow.h"

bool headchange = false, fontchange = false;
decorator::decorator(MainWindow* prt,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::decorator)
{
    pr=prt;
    ui->setupUi(this);
    QFont* currentfont= new QFont("Helvetica", 10);
    this->setFont(*currentfont);
}

decorator::~decorator()
{
    delete ui;
}

void decorator::on_headchange_clicked()
{
    //    QString fileName = QFileDialog::getOpenFileName(this, tr("文件对话框"),
    //                             "D:", tr("图片文件(*png *jpg);;文本文件(*txt)"));

    //    qDebug() << "fileName:" << fileName;
    header =
        QFileDialog::getOpenFileNames(this, tr("文件对话框"),

                                      "D:", tr("图片文件(*png *jpg);"));
    if(!header.isEmpty()){
        headchange=true;
    }
    qDebug()<< "fileNames:" << header;
}


void decorator::on_fontchange_clicked()
{
    // ok用于标记是否按下了“OK”按钮
    bool ok;
    currentfont = QFontDialog::getFont(&ok, this);
    // 如果按下“OK”按钮，那么让“字体对话框”按钮使用新字体
    // 如果按下“Cancel”按钮，那么输出信息
    if (ok) {
        this->setFont(currentfont);
        fontchange=true;
    }
    else qDebug() << tr("没有选择字体！");
}


void decorator::on_apply_button_clicked()
{
    if(fontchange)
        emit sendfont(currentfont);
    if(headchange)
        emit sendheader(header);
}

void decorator::getfont(QFont glb){
    currentfont=glb;
}

void decorator::on_exit_button_clicked()
{
    close();
}


void decorator::on_pushButton_3_clicked()
{
    //等待施工，不知道什么背景
    ui->pushButton_3->setText("等待施工，不知道什么背景");
}




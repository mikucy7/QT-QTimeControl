#ifndef DECORATOR_H
#define DECORATOR_H

#include <QWidget>
#include <QFont>

#include "mainwindow.h"

namespace Ui {
class decorator;
}

class decorator : public QWidget
{
    Q_OBJECT

public:
    explicit decorator(MainWindow* prt,QWidget *parent = nullptr);
    ~decorator();
    QFont currentfont;
    QStringList header;
    MainWindow* pr;

signals:
    void sendfont(QFont);
    void sendheader(QStringList);

private slots:
    void on_fontchange_clicked();

    void on_apply_button_clicked();

    void getfont(QFont);

    void on_exit_button_clicked();

    void on_pushButton_3_clicked();

    void on_headchange_clicked();

private:
    Ui::decorator *ui;
};

#endif // DECORATOR_H

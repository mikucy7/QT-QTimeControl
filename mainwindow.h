#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFont>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QPushButton>
#include <QApplication>
#include <QDateTime>
#include <QtMultimedia>
#include <QObject>

#include "arrange.h"
#include "digitalclock.h"
#include "tmap.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    /* 全局存储记忆 */
    QSet<QPushButton*>buttons;//字体用列表更新，务必生产一个按钮就加一次
    QString globalpath;
    QFont globalfont;//全局字体
    QString globalheader;//头像路径
    static bool star_[16];//所有星星的标记

    /* 全局ddl存储 */
    arrange* arrangements[100];//事件ddl设置
    int arrnum;//ddl数量
    QDateTime ndatetime;//新建ddl内容
    QString nddlname;//新建ddl名称
    bool delddl2[100],delddl;
    QTimer *timer2;

    /* 制作滚动条显示多个按键 */
    QWidget* myWidget;
    QVBoxLayout *layoutbox;
    QPushButton* pBtnGroup[100];

    /* 全局时间表记忆 */
    timemap* tmap[200];
    int timnum;//事务数量
    QStringList nlists;//事务备注
    QDateTime stdatetime;//新建事务开始时间
    QDateTime eddatetime;//新建事务结束时间
    bool deltmap;
    bool loo;

    /* 制作时间表 */
    QDateTime stdate;
    int weekpass;
    int root[12][7];
    DigitalClock *w_dc;
    bool clo;
    QMediaPlayer *player;

    void readQArrange();
    void writeQArrange();
    void sortArrange();
    void readQMap();
    void writeQMap();
    void setmap();

signals:
    void senddata1(QFont);

private slots:
    void push_buttons();

    void on_start_clicked();
    void on_pg2_breakbutton_clicked();
    void on_pg3_exitbutton_clicked();
    void on_diary_clicked();
    void on_exitbutton_pressed();
    void on_supply_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();

    void getfont(QFont);
    void getheader(QStringList);
    void getdatetime(QDateTime);
    void getqstring(QString);
    void getdtst(QDateTime);
    void getdted(QDateTime);
    void getdes(QStringList);
    void getbool(bool);
    void getbool2(bool);
    void getdeld(bool);
    void getdelt(bool);

    void setItem(int,int,QString, QString);
    void show_prodcut_sets(int row,int col);
    void stopclock();
    void check_del();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

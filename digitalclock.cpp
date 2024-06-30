#include "digitalclock.h"

DigitalClock::DigitalClock(int lasts,QWidget * parent) :QLCDNumber(parent)
{
    destination=QDateTime::currentDateTime().addSecs(lasts*60);
    QPalette p = palette();//获取当前的调色板
    p.setColor(QPalette::Window,Qt::blue);//对窗体设置颜色 蓝色
    setPalette(p);    //设置蓝色背景
    setWindowFlags(Qt::FramelessWindowHint);//无边框窗体风格
    setWindowOpacity(0.5);    //设置窗体的透明度
    QTimer  * timer =  new QTimer(this);    //定时器
    connect(timer,&QTimer::timeout,this,&DigitalClock::showTime);//信号槽 定时器时间到 启动 showtime
    timer->start(1000);//间隔1000ms(1s)
    showTime();
    //重置窗口大小
    resize(900,400);
    move(20,100);
    m_showColon = true;
}

void DigitalClock::showTime()
{
    QTime  time = QTime ::currentTime();
    QTime  des = destination.time();
    qint64 sec=time.secsTo(des);
    qint64 min=sec/60;
    sec%=60;
    if(min<=0&&sec<=0){
        emit sendbool(true);
    }
    QString strmin = QString("%1").arg(min, 3, 10, QLatin1Char('0'));
    QString strsec = QString("%1").arg(sec, 2, 10, QLatin1Char('0'));
    QString strTime = strmin+QString(":")+strsec;
    if(m_showColon){strTime[3] = ':';}
    else{strTime[3] = ' ';}
    display(strTime);
    m_showColon = !m_showColon;
}
//注：此文件主要参考自csdn，需要进行部分修改以适应当前环境。

#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QLCDNumber>
#include <QTimer>
#include <QTime>
#include <QMouseEvent>
//#include "mainwindow.h"

class DigitalClock : public QLCDNumber
{
    Q_OBJECT
public:
    DigitalClock(int,QWidget* parent = nullptr);
    int lasts;
    QDateTime destination;

private slots:
    void showTime();

signals:
    void sendbool(bool);

private:
    bool m_showColon;
};

#endif // DIGITALCLOCK_H

#ifndef ARRANGE_H
#define ARRANGE_H

#include <QString>
#include <QDateTime>
#include <QFile>
#include <QTextStream>
#include <QApplication>

class arrange
{
public:
    arrange(QString& name,QDateTime& dt);
    QString name;
    QDateTime dt;
    int year,month,date,hour,minute;
    bool operator<(const arrange& ar);
    bool operator>(const arrange& ar);
    bool operator==(const arrange& ar);

signals:
    void senddatetime(QDateTime);
    //void sendheader(QStringList);
};

class cmparrange{
public:
    bool operator()(arrange* a,arrange* b);
};

#endif // ARRANGE_H

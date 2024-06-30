#ifndef TMAP_H
#define TMAP_H
#include <QString>
#include <QStringList>
#include <QDateTime>

class timemap
{
public:
    timemap(QStringList,QDateTime,QDateTime,bool);
    QString name;
    QString color;
    QString description;
    QDateTime st,ed;
    bool loop;
};

#endif // TMAP_H

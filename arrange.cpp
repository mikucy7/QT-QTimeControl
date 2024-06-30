#include "arrange.h"

arrange::arrange(QString& _name,QDateTime& _dt):
    name(_name),dt(_dt){
    QDate dates=dt.date();
    QTime times=dt.time();
    int _year=dates.year(),_month=dates.month(),_date=dates.day(),_hour=times.hour(),_minute=times.minute();
    year=_year;
    month=_month;
    date=_date;
    hour=_hour;
    minute=_minute;
}

bool arrange::operator<(const arrange& ar){
    if(year<ar.year)
        return true;
    if(month<ar.month)
        return true;
    if(date<ar.date)
        return true;
    if(hour<ar.hour)
        return true;
    if(minute<ar.minute)
        return true;
    return false;
}

bool arrange::operator>(const arrange& ar){
    if(*this<ar||*this==ar)
        return false;
    return true;
}

bool arrange::operator==(const arrange& ar){
    if(year==ar.year&&month==ar.month&&date==ar.date&&hour==ar.hour&&minute==ar.minute)
        return true;
    return false;
}

bool cmparrange::operator()(arrange* a,arrange* b){
    return a->dt<b->dt;
}

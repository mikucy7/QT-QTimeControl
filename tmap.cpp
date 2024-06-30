#include "tmap.h"

timemap::timemap(QStringList _s,QDateTime _st,QDateTime _ed,bool _loop){
    st=_st;
    ed=_ed;
    name=_s.at(0);
    color=_s.at(1);
    description=_s.at(2);
    loop=_loop;
}

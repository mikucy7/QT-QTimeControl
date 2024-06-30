QT       += core gui
QT       += multimedia
QT       += multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arrange.cpp \
    arrange_change.cpp \
    arrange_create.cpp \
    collect.cpp \
    collect_record.cpp \
    decorator.cpp \
    digitalclock.cpp \
    main.cpp \
    mainwindow.cpp \
    record_image.cpp \
    search.cpp \
    supply_window.cpp \
    tmap.cpp \
    tmap_change.cpp \
    tmap_create.cpp \
    tomo.cpp

HEADERS += \
    arrange.h \
    arrange_change.h \
    arrange_create.h \
    collect.h \
    collect_record.h \
    decorator.h \
    digitalclock.h \
    mainwindow.h \
    record_image.h \
    search.h \
    supply_window.h \
    tmap.h \
    tmap_change.h \
    tmap_create.h \
    tomo.h

FORMS += \
    arrange_change.ui \
    arrange_create.ui \
    collect.ui \
    collect_record.ui \
    decorator.ui \
    mainwindow.ui \
    record_image.ui \
    search.ui \
    supply_window.ui \
    tmap_change.ui \
    tmap_create.ui \
    tomo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T09:00:25
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = verkefnaskil3_hopur22
TEMPLATE = app


SOURCES += main.cpp \
    relation.cpp \
    scientists.cpp \
    computerwindow.cpp
SOURCES += mainwindow.cpp
SOURCES += person.cpp
SOURCES += comp_pers.cpp
SOURCES += computers.cpp
SOURCES += domain.cpp
SOURCES += sqlite.cpp


HEADERS += \
    scientists.h \
    computerwindow.h \
    relationwindow.h \
    mainmenuwindow.h
HEADERS += person.h
HEADERS += comp_pers.h
HEADERS += computers.h
HEADERS += domain.h
HEADERS += sqlite.h

FORMS    += \
    computerwindow.ui \
    mainmenuwindow.ui \
    relationwindow.ui \
    scientistswindow.ui

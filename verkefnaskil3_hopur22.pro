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
    search.cpp \
    relation.cpp \
    mainmenu.cpp
SOURCES +=
SOURCES += person.cpp
SOURCES += comp_pers.cpp
SOURCES += computers.cpp
SOURCES += domain.cpp
SOURCES += sqlite.cpp


HEADERS += \
    search.h \
    relation.h \
    mainmenu.h
HEADERS += person.h
HEADERS += comp_pers.h
HEADERS += computers.h
HEADERS += domain.h
HEADERS += sqlite.h

FORMS    += \
    search.ui \
    relation.ui \
    mainmenu.ui

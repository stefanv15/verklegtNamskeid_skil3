#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T09:00:25
#
#-------------------------------------------------

QT       += core gui webkitwidgets
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = verkefnaskil3_hopur22
TEMPLATE = app


SOURCES += main.cpp \
    scientistswindow.cpp \
    computerwindow.cpp \
    relationwindow.cpp \
    mainwindow.cpp \
    computeradd.cpp \
    addscientist.cpp
SOURCES +=
SOURCES += person.cpp
SOURCES += comp_pers.cpp
SOURCES += computers.cpp
SOURCES += domain.cpp
SOURCES += sqlite.cpp


HEADERS += \
    scientistswindow.h \
    computerwindow.h \
    relationwindow.h \
    mainwindow.h \
    computeradd.h \
    addscientist.h
HEADERS += person.h
HEADERS += comp_pers.h
HEADERS += computers.h
HEADERS += domain.h
HEADERS += sqlite.h

FORMS    +=    scientistswindow.ui
FORMS    +=    computerwindow.ui
FORMS    +=    relationwindow.ui
FORMS    +=    mainwindow.ui
FORMS    +=    computeradd.ui
FORMS    +=    addscientist.ui

#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T09:00:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = verkefnaskil3_hopur22
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp
        person.cpp
        comp_pers.cpp
        computers.cpp
        domain.cpp
        sqlite.cpp


HEADERS  += mainwindow.h
            person.h
            comp_pers.h
            computers.h
            domain.h
            sqlite.h

FORMS    += mainwindow.ui

QT       += core

QT       -= gui

TARGET = catch
CONFIG   += console
CONFIG   -= app_bundle
CONFIG += c++11

TEMPLATE = app


INCLUDEPATH += ../app

INCLUDEPATH += ../factorial

LIBS += -L../app -lapp

LIBS += -L../factorial -lfactorial

SOURCES += cppunit_main.cpp \
    appunittest.cpp

HEADERS += \
    appunittest.h


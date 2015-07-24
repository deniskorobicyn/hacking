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

SOURCES += catch_main.cpp \
    test_app.cpp \
    test_factorial.cpp

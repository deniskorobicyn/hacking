#-------------------------------------------------
#
# Project created by QtCreator 2015-07-21T18:26:49
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = qt-hacking
CONFIG   += console
CONFIG   -= app_bundle
CONFIG += c++11

TEMPLATE = app

INCLUDEPATH += ./utils

SOURCES += main.cpp \
    test_iterators/test_iterators.cpp \
    utils/timer.cpp

HEADERS += \
    test_iterators/test_iterators.h \
    utils/timer.h

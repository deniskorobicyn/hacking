QT       += core

QT       -= gui

TARGET = test_iterators
CONFIG   += console
CONFIG   -= app_bundle
CONFIG += c++11

TEMPLATE = app

INCLUDEPATH += ../utils

LIBS += -L../utils -lutils

SOURCES += \
    main.cpp \
    test_iterators.cpp

HEADERS += \
    test_iterators.h


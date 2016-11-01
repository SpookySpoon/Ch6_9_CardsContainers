QT += core
QT -= gui

CONFIG += c++11

TARGET = Ch6_9_CardsContainers
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    card.cpp \
    carddeck.cpp \
    cardhand.cpp

HEADERS += \
    card.h \
    carddeck.h \
    cardhand.h

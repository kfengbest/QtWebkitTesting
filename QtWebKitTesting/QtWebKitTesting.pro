#-------------------------------------------------
#
# Project created by QtCreator 2012-09-13T15:16:02
#
#-------------------------------------------------

QT       += core gui webkit

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtWebKitTesting
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    exposedtojava.cpp

HEADERS  += mainwindow.h \
    exposedtojava.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    MyPage.html

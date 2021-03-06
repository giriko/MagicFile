#-------------------------------------------------
#
# Project created by QtCreator 2018-03-05T14:15:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MagicFile
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    filehandler.cpp \
    dialog.cpp \
    settingsmanager.cpp

HEADERS += \
        mainwindow.h \
    filehandler.h \
    dialog.h \
    common.h \
    settingsmanager.h

FORMS += \
        mainwindow.ui \
    dialog.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../boost_1_66_0/stage/lib/release/ -lboost_filesystem
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../boost_1_66_0/stage/lib/debug/ -lboost_filesystem
else:unix: LIBS += -L$$PWD/../boost_1_66_0/stage/lib/ -lboost_filesystem

INCLUDEPATH += $$PWD/../boost_1_66_0/
DEPENDPATH += $$PWD/../boost_1_66_0/

QMAKE_CXXFLAGS += -std=c++0x

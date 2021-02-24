#-------------------------------------------------
#
# Project created by QtCreator 2018-11-23T18:34:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PerfectComgraduation
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

CONFIG += c++11

SOURCES += \
        main.cpp \
        firstwindow.cpp \
    loginwindow.cpp \
    liberalmainoption.cpp \
    liberal.cpp \
    subject.cpp \
    mainwindow.cpp \
    curriculum.cpp \
    subjectinfo.cpp \
    major.cpp \
    majoroption.cpp \
    majorbasicoption.cpp \
    majoressentialoption.cpp \
    liberalessentialoption.cpp \
    liberalmachoption.cpp \
    liberalmachpracticeoption.cpp \
    account.cpp \
    graduatecondition.cpp \
    calculator.cpp \
    graduategak.cpp \
    dialogplus1.cpp \
    dialog_plus2.cpp

HEADERS += \
        firstwindow.h \
    loginwindow.h \
    liberalmainoption.h \
    liberal.h \
    subject.h \
    mainwindow.h \
    curriculum.h \
    basicheader.h \
    subjectinfo.h \
    major.h \
    majoroption.h \
    majorbasicoption.h \
    majoressentialoption.h \
    liberalessentialoption.h \
    liberalmachoption.h \
    liberalmachpracticeoption.h \
    account.h \
    graduatecondition.h \
    calculator.h \
    graduategak.h \
    dialogplus1.h \
    dialog_plus2.h

FORMS += \
        firstwindow.ui \
    loginwindow.ui \
    liberalmainoption.ui \
    mainwindow.ui \
    curriculum.ui \
    majoroption.ui \
    majorbasicoption.ui \
    majoressentialoption.ui \
    liberalessentialoption.ui \
    liberalmachoption.ui \
    liberalmachpracticeoption.ui \
    calculator.ui \
    graduategak.ui \
    dialogplus1.ui \
    dialog_plus2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    menu_logo.qrc

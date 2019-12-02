#-------------------------------------------------
#
# Project created by QtCreator 2018-04-09T11:59:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project2
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
    cart.cpp \
    pettable.cpp \
    bundletable.cpp \
    carttable.cpp

HEADERS += \
        mainwindow.h \
    cart.h \
    pettable.h \
    bundletable.h \
    databasetable.h \
    pet.h \
    fish.h \
    dog.h \
    cat.h \
    bird.h \
    visitor.h \
    builder.h \
    tablebuilder.h \
    carttable.h \
    cartvisitor.h \
    bubblesortincreasing.h \
    bubblesorttemplate.h \
    petvisitor.h

FORMS += \
        mainwindow.ui \
    cart.ui

RESOURCES +=

DISTFILES += \
    Distribute to Students/Bundles.csv \
    Distribute to Students/Pets.csv \
    Bundles.csv \
    Pets.csv

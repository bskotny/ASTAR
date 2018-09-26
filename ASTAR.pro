TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

HEADERS += \
    CImg.h

LIBS += -lAdvapi32 -lgdi32 -luser32 -lshell32
INCLUDEPATH += C:\Users\Ben\Documents\COMP 330\ASTAR


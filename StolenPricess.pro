TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lsfml-graphics -lsfml-window -lsfml-system

SOURCES += \
    src/main.cpp \
    src/Misc.cpp

HEADERS += \
    src/Misc.h

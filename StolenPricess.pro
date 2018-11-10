TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lsfml-graphics -lsfml-window -lsfml-system

SOURCES += \
    src/main.cpp \
    src/Misc.cpp \
    src/Unit.cpp \
    src/Object.cpp \
    src/Window.cpp \
    src/TextureManager.cpp \
    src/UnitType.cpp \
    src/ObjectManager.cpp \
    src/Terrain.cpp

HEADERS += \
    src/Misc.h \
    src/Unit.h \
    src/Object.h \
    src/Window.h \
    src/TextureManager.h \
    src/UnitType.h \
    src/ObjectManager.h \
    src/Terrain.h

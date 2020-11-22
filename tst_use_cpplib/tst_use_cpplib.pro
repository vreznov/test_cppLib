TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

//包含要使用的qglobal.h
INCLUDEPATH += D:\\Qt\\Qt5.12.5\\5.12.5\\msvc2015_64\\include

#DESTDIR = ../libsdir

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../cpplib1/release/ -lcpplib1
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../cpplib1/debug/ -lcpplib1

INCLUDEPATH += $$PWD/../cpplib1
DEPENDPATH += $$PWD/../cpplib1

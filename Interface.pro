QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17 -Wall -Wextra -Wshadow -Wconversion -Wcast-align  -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Wold-style-cast -Woverloaded-virtual -Wredundant-decls  -Wsign-conversion -Wsign-promo -Wstrict-null-sentinel -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused 

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/Empresa.cpp \
    src/Lead.cpp \
    src/create_empresa.cpp \
    src/create_lead.cpp \
    src/main.cpp \
    src/menu.cpp \
    src/App.cpp \
    src/table.cpp

HEADERS += \
    src/Empresa.h \
    src/Lead.h \
    src/create_empresa.h \
    src/create_lead.h \
    src/menu.h \
    src/App.h \
    src/table.h

FORMS += \
    src/create_empresa.ui \
    src/create_lead.ui \
    src/menu.ui



RC_ICONS = images/icon.ico
ICON = images/icon.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

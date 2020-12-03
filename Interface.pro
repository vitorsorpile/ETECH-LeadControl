QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QMAKE_CXXFLAGS += -Wall -Wextra -Wcast-align -Wconversion -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wshadow -Wsign-conversion -Wsign-promo -Wstrict-null-sentinel -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused
#QMAKE_CXXFLAGS += -Wall
#QMAKE_CXXFLAGS += -Wextra
#QMAKE_CXXFLAGS_RELEASE += -Werror -Wall -Wextra
#ll -Wextra -Wcast-align -Wconversion -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wshadow -Wsign-conversion -Wsign-promo -Wstrict-null-sentinel -Wstrict-overflow=5 -Wswitch-default -Wundef -Werror -Wno-unused

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Empresa.cpp \
    Lead.cpp \
    create_empresa.cpp \
    create_lead.cpp \
    main.cpp \
    menu.cpp \
    table.cpp

HEADERS += \
    Empresa.h \
    Lead.h \
    create_empresa.h \
    create_lead.h \
    menu.h \
    table.h

FORMS += \
    create_empresa.ui \
    create_lead.ui \
    menu.ui

RC_ICONS = icon.ico
ICON = icon.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

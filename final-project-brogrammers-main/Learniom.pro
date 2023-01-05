QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



SOURCES += \
    controllers/dialog.cpp \
    controllers/mainwindow.cpp \
    main.cpp \
    models/admin.cpp \
    models/course.cpp \
    models/database.cpp \
    models/professor.cpp \
    models/student.cpp \
    models/user.cpp \
    utilities/validate.cpp \

HEADERS += \
    controllers/dialog.h \
    controllers/mainwindow.h \
    models/admin.h \
    models/course.h \
    models/database.h \
    models/professor.h \
    models/student.h \
    models/user.h \
    utilities/validate.h \

FORMS += \
    views/dialog.ui \
    views/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    resources.qrc

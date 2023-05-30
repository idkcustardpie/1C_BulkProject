QT       += core gui

QT          += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DailyReport.cpp \
    Inventory.cpp \
    Member.cpp \
    MemberFiles.cpp \
    admin_conversion.cpp \
    admin_createpurchases.cpp \
    admin_items.cpp \
    admin_member.cpp \
    admin_screen.cpp \
    main.cpp \
    mainwindow.cpp \
    manager_allpurchases.cpp \
    manager_barchart.cpp \
    manager_expirations.cpp \
    manager_items.cpp \
    manager_memberpurchases.cpp \
    manager_rebates.cpp \
    manager_salesrep.cpp \
    manager_screen.cpp \
    qhoversensitivebutton.cpp \
    window_credits.cpp

HEADERS += \
    DailyReport.h \
    Inventory.h \
    Member.h \
    MemberFiles.h \
    Membership.h \
    admin_conversion.h \
    admin_createpurchases.h \
    admin_items.h \
    admin_member.h \
    admin_screen.h \
    mainwindow.h \
    manager_allpurchases.h \
    manager_barchart.h \
    manager_expirations.h \
    manager_items.h \
    manager_memberpurchases.h \
    manager_rebates.h \
    manager_salesrep.h \
    manager_screen.h \
    qhoversensitivebutton.h \
    ui_admin_conversion.h \
    ui_admin_createpurchases.h \
    ui_admin_items.h \
    ui_admin_member.h \
    ui_admin_screen.h \
    ui_mainwindow.h \
    ui_manager_barchart.h \
    ui_manager_expirations.h \
    ui_manager_items.h \
    ui_manager_memberpurchases.h \
    ui_manager_rebates.h \
    ui_manager_salesrep.h \
    ui_manager_screen.h \
    ui_window_credits.h \
    window_credits.h

FORMS += \
    admin_conversion.ui \
    admin_createpurchases.ui \
    admin_items.ui \
    admin_member.ui \
    admin_screen.ui \
    mainwindow.ui \
    manager_allpurchases.ui \
    manager_barchart.ui \
    manager_expirations.ui \
    manager_items.ui \
    manager_memberpurchases.ui \
    manager_rebates.ui \
    manager_salesrep.ui \
    manager_screen.ui \
    window_credits.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    .qmake.stash \
    Devsion.qss \
    Makefile \
    Makefile.Debug \
    Makefile.Release \
    Tryagain.pro.user

RESOURCES += \
    resources.qrc

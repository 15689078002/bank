#-------------------------------------------------
#
# Project created by QtCreator 2014-08-21T16:05:45
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = POPS
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    member_manage_dialog.cpp \
    pro_seal_dialog.cpp \
    logindialog.cpp \
    purchase_dialog.cpp \
    stock_adjust_dialog.cpp \
    seals_statistics_dialog.cpp \
    inventory_statistics_dialog.cpp \
    stock_seal_save_statistic_dialog.cpp \
    vip_log_dialog.cpp \
    basic_data_dialog.cpp \
    homepagedialog.cpp

HEADERS  += widget.h \
    member_manage_dialog.h \
    pro_seal_dialog.h \
    logindialog.h \
    database.h \
    purchase_dialog.h \
    stock_adjust_dialog.h \
    seals_statistics_dialog.h \
    inventory_statistics_dialog.h \
    stock_seal_save_statistic_dialog.h \
    vip_log_dialog.h \
    basic_data_dialog.h \
    homepagedialog.h

FORMS    += widget.ui \
    member_manage_dialog.ui \
    pro_seal_dialog.ui \
    logindialog.ui \
    purchase_dialog.ui \
    stock_adjust_dialog.ui \
    seals_statistics_dialog.ui \
    inventory_statistics_dialog.ui \
    stock_seal_save_statistic_dialog.ui \
    vip_log_dialog.ui \
    basic_data_dialog.ui \
    homepagedialog.ui

RESOURCES += \
    images.qrc

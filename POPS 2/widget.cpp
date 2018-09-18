/****************************************************************************
 **主界面*
 ** Copyright (C) 2014 Li Corporation and/or its subsidiary(-ies).
 ** All rights reserved.
 ** Contact: Email (creazylq@163.com)
 **
 ** This file is a Cash register system.
 **
 ** "Redistribution and use in source and binary forms, with or without
 ** modification, are permitted provided that the following conditions are
 ** met:
 **   * Redistributions of source code must retain the above copyright
 **     notice, this list of conditions and the following disclaimer.
 **   * Redistributions in binary form must reproduce the above copyright
 **     notice, this list of conditions and the following disclaimer in
 **     the documentation and/or other materials provided with the
 **     distribution.
 **
 ** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 ** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 ** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 ** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 ** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 ** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 ** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 ** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 ** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 ** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
 ** $QT_END_LICENSE$
 **
 ****************************************************************************/
#include "widget.h"
#include "ui_widget.h"
#include "logindialog.h"

#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDateTime>
#include <QProcess>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);//窗口最大化显示

    contentsWidget = new QListWidget;
    contentsWidget->setViewMode(QListView::IconMode);
    contentsWidget->setIconSize(QSize(50, 58));      //设置图标大小 58x58
    contentsWidget->setMovement(QListView::Static);
    contentsWidget->setMaximumWidth(120);
    contentsWidget->setSpacing(12);


    homedg = new homepageDialog;                                 //首页
    pro_seal = new Pro_Seal_Dialog;                            //前台销售界面
    purch = new Purchase_Dialog;                               //采购进货界面
    stock_adjust = new Stock_Adjust_Dialog;                //库存调整界面
    seal = new Seals_Statistics_Dialog;                //销售统计界面
    inventory = new Inventory_Statistics_Dialog;   //库存统计界面
    member = new Member_Manage_Dialog;                    //会员管理界面
    /*进销存统计分析界面*/
    stockss = new Stock_Seal_Save_Statistic_Dialog;

    /*创建一个栈窗口，并将所需的界面添加到这个栈界面上*/
    pagesWidget = new QStackedWidget;
    pagesWidget->addWidget(homedg);
    pagesWidget->addWidget(pro_seal);
    pagesWidget->addWidget(purch);
    pagesWidget->addWidget(stock_adjust);
    pagesWidget->addWidget(seal);
    pagesWidget->addWidget(inventory);
    pagesWidget->addWidget(stockss);
    pagesWidget->addWidget(member);


    createIcons();
    contentsWidget->setCurrentRow(0);//翻页函数  void setCurrentIndex(int index)

    /***************创建一个水平布局**************/
    QHBoxLayout *horizontalLayout = new QHBoxLayout;

    horizontalLayout->addWidget(pagesWidget);
    horizontalLayout->addWidget(contentsWidget);


    QHBoxLayout *buttonsLayout = new QHBoxLayout;
    cancellation = new QToolButton;//注销按钮
    cancellation->setIconSize(QSize(20,40));
    statuslabel = new QLabel;   //当前操作员
    adminlabel = new QLabel;    //操作员名称
    datatimelabel = new QLabel; //显示当前时间
    helpbutton = new QToolButton;
    lockbutton = new QToolButton;
    calculatebutton = new QToolButton;
    moneyboxbtn = new QToolButton;
    homepagebtn = new QToolButton(contentsWidget);

    /***************创建一个定时器，用来显示系统当前的时间*************/
    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(showtime_slot()));
    timer->start(1000);

    cancellation->setText(tr("注销"));
    statuslabel->setText(tr("当前操作员:"));
    adminlabel->setText(tr("admin"));

    helpbutton->setText(tr("帮助(F1)"));
    connect(helpbutton,SIGNAL(clicked()),SLOT(help_info()));

    lockbutton->setText(tr("锁屏(F4)"));
    connect(lockbutton,SIGNAL(clicked()),SLOT(lockscreen()));

    calculatebutton->setText(tr("计算器"));
    connect(calculatebutton,SIGNAL(clicked()),SLOT(show_calculator()));

    moneyboxbtn->setText(tr("弹出钱箱(F12)"));
    connect(moneyboxbtn,SIGNAL(clicked()),SLOT(moneybox_up()));

    homepagebtn->setText(tr("首页"));
    connect(homepagebtn,SIGNAL(clicked()),SLOT(show_homepage()));

    buttonsLayout->addWidget(cancellation);
    buttonsLayout->addWidget(statuslabel);
    buttonsLayout->addWidget(adminlabel);
    buttonsLayout->addStretch(2);      //添加弹簧
    buttonsLayout->addWidget(datatimelabel);
    buttonsLayout->addStretch(1);
    buttonsLayout->addWidget(helpbutton);
    buttonsLayout->addWidget(lockbutton);
    buttonsLayout->addWidget(calculatebutton);
    buttonsLayout->addWidget(moneyboxbtn);
    buttonsLayout->addWidget(homepagebtn);
    buttonsLayout->addStretch(1);   //控件之间间隔


    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(horizontalLayout);
    mainLayout->addStretch(2);
    mainLayout->addSpacing(16);
    mainLayout->addLayout(buttonsLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("收银系统"));
}

Widget::~Widget()
{
    delete ui;
}

/*********当用户点击右上角的X关闭程序时提醒用户是否保存数据后再关闭****************/
void Widget::closeEvent(QCloseEvent *event)
{
    switch( QMessageBox::information(this, tr("退出方式"),
                                     tr("建议选择备份后退出，这样可以\n最大程度的保护您的数据"),
                                     tr("直接退出"), tr("取消退出"),tr("备份后退出"),
                                     0, 1) )
    {
    case 0:
        event->accept();
        break;
    case 1:
    default:
        event->ignore();
        break;
    }
}

/*******************当前界面发生变化时的槽函数*****************************/
void Widget::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (!current)
        current = previous;
    pagesWidget->setCurrentIndex(contentsWidget->row(current));
}

/*******************将系统时间显示在状态栏上*******************/
void Widget::showtime_slot()
{
    QDateTime  time = QDateTime::currentDateTime();
    QString str= time.toString("yyyy-MM-dd hh:mm:ss dddd");
    datatimelabel->setText(str);
}

/*******************软件使用帮助说明*********************/
void Widget::help_info()
{
    qDebug() << "hello";
}

/************************锁屏************************/
void Widget::lockscreen()
{
/*    Widget w;
    LoginDialog log;
    w.close();
    log.show()*/;
}

/************************显示计算器************************/
void Widget::show_calculator()
{
}

/************************弹出钱箱************************/
void Widget::moneybox_up()
{
}

/************************显示首页************************/
void Widget::show_homepage()
{
    //homedg->show();
}

/*******************创建界面图标*************************/
void Widget::createIcons()
{
    QIcon icon = QIcon(":/images/program.png");
    setWindowIcon(icon);  //设置应用程序图标

    QListWidgetItem *homebtn = new QListWidgetItem(contentsWidget);

    QListWidgetItem *prosealButton = new QListWidgetItem(contentsWidget);
    prosealButton->setIcon(QIcon(":/images/proseal.png"));
    prosealButton->setText(tr("前台销售"));
    prosealButton->setTextAlignment(Qt::AlignHCenter);
    prosealButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *purchButton = new QListWidgetItem(contentsWidget);
    purchButton->setIcon(QIcon(":/images/purchase.png"));
    purchButton->setText(tr("采购进货"));
    purchButton->setTextAlignment(Qt::AlignHCenter);
    purchButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);


    QListWidgetItem *stock_adjjustButton = new QListWidgetItem(contentsWidget);
    stock_adjjustButton->setIcon(QIcon(":/images/stock_adjust.png"));
    stock_adjjustButton->setText(tr("库存调整"));
    stock_adjjustButton->setTextAlignment(Qt::AlignHCenter);
    stock_adjjustButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *sealButton = new QListWidgetItem(contentsWidget);
    sealButton->setIcon(QIcon(":/images/seals_statistics.png"));
    sealButton->setText(tr("销售分析"));
    sealButton->setTextAlignment(Qt::AlignHCenter);
    sealButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *inventoryButton = new QListWidgetItem(contentsWidget);
    inventoryButton->setIcon(QIcon(":/images/inventory.png"));
    inventoryButton->setText(tr("库存分析"));
    inventoryButton->setTextAlignment(Qt::AlignHCenter);
    inventoryButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *stockButton = new QListWidgetItem(contentsWidget);
    stockButton->setIcon(QIcon(":/images/stock_seal_save.png"));
    stockButton->setText(tr("进销存分析"));
    stockButton->setTextAlignment(Qt::AlignHCenter);
    stockButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *memberButton = new QListWidgetItem(contentsWidget);
    memberButton->setIcon(QIcon(":/images/VIP_manage.png"));
    memberButton->setText(tr("会员管理"));
    memberButton->setTextAlignment(Qt::AlignHCenter);
    memberButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);


    connect(contentsWidget,
            SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)),
            this, SLOT(changePage(QListWidgetItem*,QListWidgetItem*)));
}

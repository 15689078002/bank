/****************************************************************************
 **基础资料设置界面
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
#include "basic_data_dialog.h"
#include "ui_basic_data_dialog.h"
#include "database.h"

#include <QMouseEvent>
#include <QTextCodec>
#include <QMessageBox>
#include <QDebug>
#include <QStandardItem>
#include <QSqlRecord>

Basic_Data_Dialog::Basic_Data_Dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Basic_Data_Dialog)
{
    ui->setupUi(this);
    createConnection();

    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());//设置Dialog为当前固定大小
    setWindowTitle(tr("基础资料"));

    connect(ui->Add_Color_pushButton,SIGNAL(clicked()),SLOT(If_Add_Color_Key()));//添加颜色按钮被按下
    connect(ui->Save_Color_pushButton,SIGNAL(clicked()),SLOT(Save_Color_Key()));//保存添加的颜色
    connect(ui->Delete_Color_pushButton,SIGNAL(clicked()),SLOT(Delete_Color_Key()));//删除颜色信息
    //Show_Color_information();

    /*****************************页面切换处理 9项*********************************/
    connect(ui->Brand_pushButton,SIGNAL(clicked()),SLOT(Show_Brand_Info_Slot()));
    connect(ui->Categoriy_pushButton,SIGNAL(clicked()),SLOT(Show_Categoriy_Info_Slot()));
    connect(ui->Color_pushButton,SIGNAL(clicked()),SLOT(Show_Color_Info_Slot()));
    connect(ui->Unit_pushButton,SIGNAL(clicked()),SLOT(Show_Unit_Info_Slot()));
    connect(ui->Auto_pushButton,SIGNAL(clicked()),SLOT(Show_Auto_Info_Slot()));
    connect(ui->Supplier_pushButton,SIGNAL(clicked()),SLOT(Show_Supplier_Info_Slot()));
    connect(ui->VIP_pushButton,SIGNAL(clicked()),SLOT(Show_Vip_Info_Slot()));
    connect(ui->Adjust_pushButton,SIGNAL(clicked()),SLOT(Show_Adjust_Info_Slot()));
    connect(ui->Allocation_pushButton,SIGNAL(clicked()),SLOT(Show_Allocation_Infon_Slot()));
}

Basic_Data_Dialog::~Basic_Data_Dialog()
{
    delete ui;
}

/*设置表格样式*/
void Basic_Data_Dialog::Set_table_style()
{
    //ui->tableView->verticalHeader()->hide();//隐藏表头 , 没有效果

    //ui->tstudent_tableview->setContextMenuPolicy(Qt::CustomContextMenu);
    //ui->tableView->setContextMenuPolicy(Qt::CustomContextMenu);//右键属性 ,没有效果

    /****************把表格的背景调成黄蓝相间***********************/
    ui->Color_tableView->setAlternatingRowColors(true);
//    ui->Color_tableView->setStyleSheet("QTableView{background-color: rgb(100, 149, 237);"
//                                       "alternate-background-color: rgb(141, 163, 215);}");

    /***************颜色信息表头标题********************/
    model->setHeaderData(0,Qt::Horizontal,tr("颜色种类"));
}

/*显示颜色信息*/
void Basic_Data_Dialog::Show_Color_information()
{
   // QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));//汉显
    /**********************会员数据表的操作**********************/
    model = new QSqlTableModel(this);           //声明model对象
    model->setTable("color");

    //model->setQuery("select *from color");
    //保存策略,先保存到这个模型里面，执行确认后再写进数据库里面
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();                         //选取整个表的所有行
    //model->removeColumn(1);                 //不显示  属性列,如果这时添加记录，则该属性的值添加不上
    Set_table_style();                      //设置表格样式的函数
    ui->Color_tableView->setModel(model);
    ui->Color_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //使其不可编辑
    ui->tableView->resizeColumnsToContents();//根据内容自动调节所有列宽

    /*颜色信息的设置，以及自定义颜色的添加*/
    ui->Modify_Color_pushButton->setEnabled(false);
    ui->Save_Color_pushButton->setEnabled(false);
    ui->Cancel_Color_pushButton->setEnabled(false);
    ui->Delete_Color_pushButton->setEnabled(false);
}

void Basic_Data_Dialog::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        static QSqlQueryModel *model = new QSqlQueryModel(ui->Color_tableView);
        model->setQuery(QString("select * from Color;"));
        int column = model->columnCount(); //获得列数
        int row = model->rowCount(); // 获得行数
        //ui->Color_tableView->setModel(model);
        QModelIndex index = model->index(column,row,QModelIndex());
        QVariant data = model->data(index);
        QString val = data.toString();
        ui->Color_Name_lineEdit->setText(val);
        qDebug() << val << "hello";
    }
    else if(event->button() == Qt::RightButton)
    {
        ui->Color_Name_lineEdit->setText(tr("鼠标右键按下"));
        qDebug() <<"鼠标右键按下";

    }
    else if(event->button() == Qt::MidButton)
    {
        ui->Color_Name_lineEdit->setText(tr("鼠标中键按下"));
         qDebug() <<"鼠标中键按下";
    }


}

/*品牌管理*/
void Basic_Data_Dialog::Show_Brand_Info_Slot()
{
    ui->Title_label->setText(tr("品牌管理"));
    ui->Categoriy_Page->hide();
    ui->Unit_page->hide();
    ui->Color_page->hide();

    ui->Brand_page->show();

    ui->Auto_page->hide();
    ui->Supplier_Page->hide();
    ui->Vip_Type_page->hide();
    ui->Adjust_page->hide();
    ui->Allocation_page->hide();
}

/********************类别管理*******************/
void Basic_Data_Dialog::Show_Categoriy_Info_Slot()
{
    ui->Title_label->setText("类别管理");
    ui->Categoriy_Page->show();  //显示当前页

    ui->Unit_page->hide();
    ui->Color_page->hide();
    ui->Brand_page->hide();
    ui->Auto_page->hide();
    ui->Supplier_Page->hide();
    ui->Vip_Type_page->hide();
    ui->Adjust_page->hide();
    ui->Allocation_page->hide();

}

/******************颜色管理*******************/
void Basic_Data_Dialog::Show_Color_Info_Slot()
{
    Show_Color_information();
    ui->Title_label->setText(tr("颜色管理"));
    ui->Categoriy_Page->hide();
    ui->Unit_page->hide();

    ui->Color_page->show();//显示当前页

    ui->Brand_page->hide();
    ui->Auto_page->hide();
    ui->Supplier_Page->hide();
    ui->Vip_Type_page->hide();
    ui->Adjust_page->hide();
    ui->Allocation_page->hide();

}

/*当添加颜色的按钮被按下的时候*/
void Basic_Data_Dialog::If_Add_Color_Key()
{
    ui->Color_Name_lineEdit->clear();

    ui->Save_Color_pushButton->setEnabled(true);
    ui->Cancel_Color_pushButton->setEnabled(true);

    ui->Add_Color_pushButton->setEnabled(false);
    ui->Modify_Color_pushButton->setEnabled(false);
    ui->Delete_Color_pushButton->setEnabled(false);
}

void Basic_Data_Dialog::Save_Color_Key()
{
    createConnection();
    QString Color_name = ui->Color_Name_lineEdit->text();

    if(ui->Color_Name_lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,tr("警告"),tr("颜色名称不能为空!"),
                             QMessageBox::Yes);
    }
    else
    {
        //model = QSqlTableModel(this);
        //model->setTable("color");
        QSqlQuery query;
        query.prepare("insert into color(Color_Kind) "
                      "values (?)");
        query.bindValue(0, Color_name);
        query.exec();
        Show_Color_information();
        ui->Color_Name_lineEdit->clear();
    }
    closeConnection();
}

/*删除颜色信息       功能未完成            */
void Basic_Data_Dialog::Delete_Color_Key()
{
    ui->Add_Color_pushButton->setEnabled(true);
    ui->Modify_Color_pushButton->setEnabled(true);
    ui->Cancel_Color_pushButton->setEnabled(true);

    createConnection();
    int curRow = ui->Color_tableView->currentIndex().row();//获取选中的行

    model->removeRow(curRow);
    //删除该行
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定"
                                                       "删除当前行吗？"),
                                  QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No)
    {
        model->revertAll(); //如果不删除，则撤销
    }
    else
    {
        model->submitAll(); //否则提交，在数据库中删除该行
    }
    closeConnection();
}

/****************计量单位管理****************/
void Basic_Data_Dialog::Show_Unit_Info_Slot()
{
    ui->Title_label->setText(tr("计量单位管理"));
    ui->Categoriy_Page->hide();

    ui->Unit_page->show();//显示当前页

    ui->Color_page->hide();
    ui->Brand_page->hide();
    ui->Auto_page->hide();
    ui->Supplier_Page->hide();
    ui->Vip_Type_page->hide();
    ui->Adjust_page->hide();
    ui->Allocation_page->hide();

}

/*自动拆包管理*/
void Basic_Data_Dialog::Show_Auto_Info_Slot()
{
    ui->Title_label->setText(tr("自动拆包管理"));
    ui->Categoriy_Page->hide();
    ui->Unit_page->hide();
    ui->Color_page->hide();
    ui->Brand_page->hide();

    ui->Auto_page->show();//显示当前页

    ui->Supplier_Page->hide();
    ui->Vip_Type_page->hide();
    ui->Adjust_page->hide();
    ui->Allocation_page->hide();

}

/*供货商管理*/
void Basic_Data_Dialog::Show_Supplier_Info_Slot()
{
    ui->Title_label->setText(tr("供货商管理"));
    ui->Categoriy_Page->hide();
    ui->Unit_page->hide();
    ui->Color_page->hide();
    ui->Brand_page->hide();
    ui->Auto_page->hide();

    ui->Supplier_Page->show();//显示当前页

    ui->Vip_Type_page->hide();
    ui->Adjust_page->hide();
    ui->Allocation_page->hide();
}

/*VIP会员类别管理*/
void Basic_Data_Dialog::Show_Vip_Info_Slot()
{
    ui->Title_label->setText(tr("VIP会员类别"));
    ui->Categoriy_Page->hide();
    ui->Unit_page->hide();
    ui->Color_page->hide();
    ui->Brand_page->hide();
    ui->Auto_page->hide();
    ui->Supplier_Page->hide();

    ui->Vip_Type_page->show();//显示当前页

    ui->Adjust_page->hide();
    ui->Allocation_page->hide();
}

/*库存调整管理*/
void Basic_Data_Dialog::Show_Adjust_Info_Slot()
{
    ui->Title_label->setText(tr("库存调整管理"));
    ui->Categoriy_Page->hide();
    ui->Unit_page->hide();
    ui->Color_page->hide();
    ui->Brand_page->hide();
    ui->Auto_page->hide();
    ui->Supplier_Page->hide();
    ui->Vip_Type_page->hide();

    ui->Adjust_page->show();//显示当前页

    ui->Allocation_page->hide();
}

/*库存调拨管理*/
void Basic_Data_Dialog::Show_Allocation_Infon_Slot()
{
    ui->Title_label->setText(tr("库存调拨管理"));
    ui->Categoriy_Page->hide();
    ui->Unit_page->hide();
    ui->Color_page->hide();
    ui->Brand_page->hide();
    ui->Auto_page->hide();
    ui->Supplier_Page->hide();
    ui->Vip_Type_page->hide();
    ui->Adjust_page->hide();

    ui->Allocation_page->show();//显示当前页
}

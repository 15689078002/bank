/****************************************************************************
 **会员管理功能
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
#include "member_manage_dialog.h"
#include "ui_member_manage_dialog.h"
#include "database.h"

#include <QDebug>
#include <QTextCodec>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QStandardItemModel>

Member_Manage_Dialog::Member_Manage_Dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Member_Manage_Dialog)
{
    ui->setupUi(this);

    //createConnection();        //打开数据库
    Show_member_information(); //显示会员信息
    Set_table_style();

    vip = new VIP_Log_Dialog;
    vip->hide();

    //ui->Add_pushButton->setIcon(QIcon(":/images/add.png"));
    ui->Add_pushButton->setText(tr("添加"));


}

Member_Manage_Dialog::~Member_Manage_Dialog()
{
    delete ui;
}

/********************判断两个字符是否相等******************/
int Member_Manage_Dialog::compare(const QString &s1, const QString &s2, Qt::CaseSensitivity cs)
{
    return cs;
}

/********************设置表格的样式*****************************/
void Member_Manage_Dialog::Set_table_style()
{
    /***********************设置表格列宽***********************/
        ui->tableView->setColumnWidth(0,60);
        ui->tableView->setColumnWidth(1,70);
        ui->tableView->setColumnWidth(2,90);
        ui->tableView->setColumnWidth(3,230);
        ui->tableView->setColumnWidth(4,60);
        ui->tableView->setColumnWidth(5,60);
        ui->tableView->setColumnWidth(6,80);
        ui->tableView->setColumnWidth(7,100);
        ui->tableView->setColumnWidth(8,100);
        ui->tableView->setColumnWidth(9,140);
        ui->tableView->setColumnWidth(10,200);

    /****************把表格的背景调成黄蓝相间***********************/
    ui->tableView->setAlternatingRowColors(true);
//    ui->tableView->setStyleSheet("QTableView{background-color: rgb(100, 149, 237);"
//                                 "alternate-background-color: rgb(141, 163, 215);}");

    ui->tableView->setContextMenuPolicy(Qt::CustomContextMenu);

    /***************会员信息表头标题********************/
    model->setHeaderData(0,Qt::Horizontal,tr("会员编号"));
    model->setHeaderData(1,Qt::Horizontal,tr("会员姓名"));
    model->setHeaderData(2,Qt::Horizontal,tr("会员手机"));
    model->setHeaderData(3,Qt::Horizontal,tr("会员地址"));
    model->setHeaderData(4,Qt::Horizontal,tr("会员等级"));
    model->setHeaderData(5,Qt::Horizontal,tr("会员积分"));
    model->setHeaderData(6,Qt::Horizontal,tr("会员消费金额"));
    model->setHeaderData(7,Qt::Horizontal,tr("会员注册日期"));
    model->setHeaderData(8,Qt::Horizontal,tr("会员生日"));
    model->setHeaderData(9,Qt::Horizontal,tr("会员邮箱"));
    model->setHeaderData(10,Qt::Horizontal,tr("备注"));

    /*会员积分调整记录表 标题*/
//    ui->VIP_Grade_tableWidget->setAlternatingRowColors(true);
//    ui->VIP_Grade_tableWidget->setStyleSheet("QTableView{background-color: rgb(100, 149, 237);"
//                                           "alternate-background-color: rgb(141, 163, 215);}");
    QStringList header1;
    header1 << tr("调整类型")<<tr("调整日期")<<tr("调整积分")<<tr("操作员")<<tr("备注");
    ui->VIP_Goods_tableWidget->setHorizontalHeaderLabels(header1);



    /*会员商品消费明表 标题*/
//    ui->VIP_Goods_tableWidget->setAlternatingRowColors(true);
//    ui->VIP_Goods_tableWidget->setStyleSheet("QTableView{background-color: rgb(100, 149, 237);"
//                                           "alternate-background-color: rgb(141, 163, 215);}");

    QStringList header2;
    header1 << tr("商品条码")<<tr("商品积分")<<tr("商品规格")<<tr("颜色")
            <<tr("折后价")<<tr("数量")<<tr("付款金额")<<tr("销售单号")<<tr("销售日期");
    ui->VIP_Grade_tableWidget->setHorizontalHeaderLabels(header2);
}

/************************显示会员的信息***********************/
void Member_Manage_Dialog::Show_member_information()
{
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));//汉显
    /**********************会员数据表的操作**********************/
    model = new QSqlTableModel(this);           //声明model对象
    model->setTable("member");

    //model->setQuery("select *from member");
    //保存策略,先保存到这个模型里面，执行确认后再写进数据库里面
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();                         //选取整个表的所有行
    //model->removeColumn(1);                 //不显示  属性列,如果这时添加记录，则该属性的值添加不上
    Set_table_style();                      //设置表格样式的函数
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //使其不可编辑
    //ui->tableView->resizeColumnsToContents();//根据内容自动调节所有列宽
}


/*********************删除某一会员信息*********************/
void Member_Manage_Dialog::on_Delete_pushButton_clicked()
{
    //createConnection();
    int curRow = ui->tableView->currentIndex().row();//获取选中的行

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


/*********************查找功能************************/
void Member_Manage_Dialog::on_Find_pushButton_clicked()
{
    //createConnection();
    Set_table_style();

    model->setTable("member");

    QString Current_Text = ui->FindlineEdit->text();

    if(ui->FindlineEdit->text().isEmpty())
    {
        QMessageBox::information(this,tr("提示：\n"),
                                 tr("查找内容不能为空\n\n请输入所要查找的内容后再查询"),
                                 QMessageBox::Yes);
    }
    else
    {
        if(ui->Choose_comboBox->currentText() == "VIP卡号")
        {
            //根据vip号进行查找
            model->setFilter(QString("Member_Id = '%1'").arg(Current_Text));
            //显示结果
            model->select();
            ui->tableView->setModel(model);
            ui->FindlineEdit->clear();
        }
        else if(ui->Choose_comboBox->currentText() == "VIP姓名")
        {


            //根据VIP姓名进行查找
            model->setFilter(QString("Member_Name = '%1'").arg(Current_Text));
            model->select();
            ui->tableView->setModel(model);
            ui->FindlineEdit->clear();
        }

        else if(ui->Choose_comboBox->currentText() == "VIP类别")
        {
            //根据VIP类别进行查找
            model->setFilter(QString("Member_Class = '%1'").arg(Current_Text));
            model->select();
            ui->tableView->setModel(model);
            ui->FindlineEdit->clear();
        }

        else if(ui->Choose_comboBox->currentText() == "手机")
        {
            //根据VIP手机号码进行查找
            model->setFilter(QString("Member_Phone = '%1'").arg(Current_Text));
            model->select();
            ui->tableView->setModel(model);
            ui->FindlineEdit->clear();
        }
    }
    //closeConnection();//关闭数据库
}

/*******************对会员信息进行排序*******************/
void Member_Manage_Dialog::on_Sort_pushButton_clicked()
{
    //createConnection();
    /*根据会员卡号排序,也可按其进行排序，model->setSort(1,Qt::AscendingOrder))*/
    model->setSort(0,Qt::AscendingOrder);
    model->select();

    //closeConnection();
}

/*********************显示全部会员的信息**********************/
void Member_Manage_Dialog::on_Show_All_pushButton_clicked()
{
    //createConnection();
    //    Set_table_style();
    //    model->setTable("member");
    //    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    //    model->select();
    //    ui->tableView->setModel(model);
    Show_member_information();

    //closeConnection();
}

/****************添加会员信息**************/
void Member_Manage_Dialog::on_Add_pushButton_clicked()
{
    vip->show();
}

/*保存对会员信息的变动*/
void Member_Manage_Dialog::on_Save_pushButton_clicked()
{
    //createConnection();
    model->database().transaction(); //开始事务操作
    if (model->submitAll())
    {
        model->database().commit(); //提交
    }
    else
    {
        model->database().rollback(); //回滚
        QMessageBox::warning(this, tr("tableModel"),
                             tr("数据库错误: %1")
                             .arg(model->lastError().text()));
    }
    //closeConnection();
}

/***************************修改会员信息****************/
void Member_Manage_Dialog::on_Modify_pushButton_clicked()
{
    qDebug() << ui->tableView->currentIndex();
    qDebug() << ui->tableView->currentIndex().row();
    qDebug() << ui->tableView->currentIndex().column();

    //    QSqlTableModel model;
    //    mymodel.setQuery(QString("select * from member"));
    //    ui->tableView->setModel(&model);
    //    int cur_column = ui->tableView->currentIndex().column();//获得当前选中的列数
    //    int cur_row = ui->tableView->currentIndex().row();      //获得当前选中的行数
    //    QVariant cur_Data = model.data(ui->tableView->currentIndex());
    //    qDebug() << cur_Data;

    //QModelIndex index = model->index(cur_column,cur_row,QModelIndex());

    //    QSqlRecord cur_record = model.record(cur_row);
    //    cur_Data = cur_record.value(cur_column);
    //qDebug() << index;
    //vip->show();
}

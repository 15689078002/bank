/****************************************************************************
 **采购进货功能
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

#include "purchase_dialog.h"
#include "ui_purchase_dialog.h"
#include "database.h"
#include "basic_data_dialog.h"


#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

Purchase_Dialog::Purchase_Dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Purchase_Dialog)
{
    ui->setupUi(this);

    ui->dateEdit->setCalendarPopup(true);
    QDate today = QDate::currentDate();
    ui->dateEdit->setDateRange(today.addDays(-90),today.addDays(90));

    /*定义基础资料对话框对象*/
    basic_data_dialog = new Basic_Data_Dialog;
    basic_data_dialog->hide();

    ui->Goods_Type_comboBox->setEditable(true);
    createConnection();
    Show_Goods_infor();

    copy_Goods_to_Seals();

    QSqlQuery query;
    //query.setForwardOnly(true);
    query.exec(QObject::tr("select Color_Kind from color"));
    while(query.next())
    {
        ui->Goods_Color_comboBox->addItem(query.value(0).toString());
    }

    query.exec(QObject::tr("select Supplier_Person_Name from Supplier"));
    while(query.next())
    {
        ui->Supplier_comboBox->addItem(query.value(0).toString());
    }
}

Purchase_Dialog::~Purchase_Dialog()
{
    delete ui;
}

void Purchase_Dialog::Set_table_style()
{
    /****************把表格的背景调成黄蓝相间***********************/
    ui->tableView->setAlternatingRowColors(true);
//    ui->tableView->setStyleSheet("QTableView{background-color: rgb(100, 149, 237);"
//            "alternate-background-color: rgb(141, 163, 215);}");

    /***************商品信息表头标题********************/
    model->setHeaderData(0,Qt::Horizontal,tr("商品条码"));
    model->setHeaderData(1,Qt::Horizontal,tr("类别"));
    model->setHeaderData(2,Qt::Horizontal,tr("品牌"));
    model->setHeaderData(3,Qt::Horizontal,tr("商品名称"));
    model->setHeaderData(4,Qt::Horizontal,tr("规格型号"));
    model->setHeaderData(5,Qt::Horizontal,tr("颜色"));
    model->setHeaderData(6,Qt::Horizontal,tr("数量"));
    model->setHeaderData(7,Qt::Horizontal,tr("单位"));
    model->setHeaderData(8,Qt::Horizontal,tr("销售价"));
    model->setHeaderData(9,Qt::Horizontal,tr("合计"));
    model->setHeaderData(10,Qt::Horizontal,tr("进货价"));
    model->setHeaderData(11,Qt::Horizontal,tr("合计"));

}

void Purchase_Dialog::Show_Goods_infor()
{
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));//汉显
    /**********************商品数据表的操作**********************/
    model = new QSqlTableModel(this);           //声明model对象
    model->setTable("Goods");
    //model->setQuery("select *from Goods");
    //保存策略,先保存到这个模型里面，执行确认后再写进数据库里面
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();                         //选取整个表的所有行
    //model->removeColumn(1);                 //不显示  属性列,如果这时添加记录，则该属性的值添加不上
    Set_table_style();                      //设置表格样式的函数
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //使其不可编辑
    //ui->tableView->resizeColumnsToContents();//根据内容自动调节所有列宽
    //qDebug() << "进入了本函数";
}

void Purchase_Dialog::copy_Goods_to_Seals()
{
    QSqlQuery *query = new QSqlQuery;
    query->exec(QObject::tr("insert into Seals select select Goods_Id,Goods_Name,"
                            "Goods_Type,Goods_Color,Goods_Units,Goods_Seal_Price from Goods"));


//    //static QSqlQueryModel *model = new QSqlQueryModel(this);
//    query->exec(QString("select Goods_Id,Goods_Name,Goods_Type,Goods_Color,"
//                            "Goods_Units,Goods_Seal_Price from Goods;"));
//    query->prepare("insert into Seals (Seals_Id,Seal_Name,Seal_Type,Seal_Color,Seal_Price,)")

}

/*******************商品信息入库**************/
void Purchase_Dialog::on_Ok_Add_pushButton_clicked()
{
    createConnection();

    /*商品编号*/
    QString goods_id = ui->Goods_Id_lineEdit->text();
    /*商品类别*/
    QString goods_gategories = ui->Goods_Categories_comboBox->itemText(
                ui->Goods_Categories_comboBox->currentIndex());
    /*商品品牌*/
    QString goods_brand = ui->Goods_Brand_comboBox->itemText(
                ui->Goods_Brand_comboBox->currentIndex());
    /*商品名字*/
    QString goods_name = ui->Goods_Name_lineEdit->text();
    /*商品规格型号*/
    QString goods_tpye = ui->Goods_Type_comboBox->itemText(
                ui->Goods_Type_comboBox->currentIndex());
    /*商品颜色*/
    QString goods_color = ui->Goods_Color_comboBox->itemText(
                ui->Goods_Color_comboBox->currentIndex());
    /*商品售价*/
    QString goods_seal_price = ui->Goods_Seal_Price_lineEdit->text();
    /*商品数量*/
    QString goods_num = ui->Goods_Num_lineEdit->text();
    /*商品单位*/
    QString goods_units = ui->Goods_Unit_comboBox->itemText(
                ui->Goods_Unit_comboBox->currentIndex());
    /*商品进价*/
    QString goods_bid_price = ui->Goods_Bid_Price_lineEdit->text();

    qint32 goods_sum = goods_num.toFloat() * goods_seal_price.toFloat();

    qint32 goods_total = goods_num.toFloat() * goods_bid_price.toFloat();

    if(ui->Goods_Id_lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,tr("警告!"),tr("商品条码不能为空!"),
                                     QMessageBox::Yes);
    }
    else
    {
        QSqlQuery query;
        query.prepare("insert into Goods (Goods_Id,Goods_Categories,Goods_Brand,"
                  "Goods_Name,Goods_Type,Goods_Color,Goods_Num,Goods_Units,"
                  "Goods_Seal_Price,Goods_Sum,Goods_Bid_Price,Goods_Total)"
                   "VALUES (?,?,?,?,?,?,?,?,?,?,?,?)");
        query.bindValue(0,goods_id);
        query.bindValue(1,goods_gategories);
        query.bindValue(2,goods_brand);
        query.bindValue(3,goods_name);
        query.bindValue(4,goods_tpye);
        query.bindValue(5,goods_color);
        query.bindValue(6,goods_num);
        query.bindValue(7,goods_units);
        query.bindValue(8,goods_seal_price);
        query.bindValue(9,goods_sum);
        query.bindValue(10,goods_bid_price);
        query.bindValue(11,goods_total);
        query.setForwardOnly(true);
        query.exec();
    }
    closeConnection();
    /*将插入的商品信息显示出来*/
    ui->Goods_Id_lineEdit->clear();
    Show_Goods_infor();
    copy_Goods_to_Seals();
}

/*显示全部商品信息*/
void Purchase_Dialog::on_Show_pushButton_clicked()
{
    Show_Goods_infor();
}

/*删除某一条商品信息*/
void Purchase_Dialog::on_Delete_pushButton_clicked()
{
    //createConnection();
    int curRow = ui->tableView->currentIndex().row();//获取选中的行

    model->removeRow(curRow);
    /*删除该行*/
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
    //closeConnection();
}

/*查找商品类别，可在弹出的对话框中选择添加自己的类别*/
void Purchase_Dialog::on_Find_Categories_pushButton_clicked()
{
    basic_data_dialog->show();
}

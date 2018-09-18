/****************************************************************************
 **前台销售功能
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
#include "pro_seal_dialog.h"
#include "ui_pro_seal_dialog.h"
#include "database.h"

#include <QTextCodec>
#include <QSqlQuery>
#include <QMessageBox>

Pro_Seal_Dialog::Pro_Seal_Dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pro_Seal_Dialog)
{
    ui->setupUi(this);

    ui->dateEdit->setCalendarPopup(true);
    QDate today = QDate::currentDate();
    ui->dateEdit->setDateRange(today.addDays(-90),today.addDays(90));

    ui->Find_Goods_Id_lineEdit->setFocus();
    createConnection();
    ui->Price_Sum_label->setStyleSheet("background:transparent");
    Show_Goods_infor();

    QSqlQuery query;
    query.exec(QObject::tr("select User_Name from user"));
    while(query.next())
    {
        ui->Employee_comboBox->addItem(query.value(0).toString());
    }

    ui->Find_Goods_Id_lineEdit->setStyleSheet("color:blue");

    ui->New_pushButton->setText(tr("新单"));
    ui->Open_pushButton->setText(tr("打开"));
    ui->Again_pushButton->setText(tr("重打小票"));
    ui->Floppy_pushButton->setText(tr("挂单"));
    ui->Cancel_Floppy_pushButton->setText(tr("去挂"));
    ui->Modify_pushButton->setText(tr("修改"));
    ui->Cancel_pushButton->setText(tr("删除"));

    ui->Goods_tableView->setAlternatingRowColors(true);
//    ui->Goods_tableView->setStyleSheet("QTableView{background-color: rgb(30, 144, 255);"
//                                       "alternate-background-color: rgb(141, 163, 215);}");


}

Pro_Seal_Dialog::~Pro_Seal_Dialog()
{
    delete ui;
}

void Pro_Seal_Dialog::Show_Goods_infor()
{
    //createConnection();

    //QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));//UTF-8 GBK

    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("Seals");
    model->setSort(1, Qt::AscendingOrder);

    model->setHeaderData(0,Qt::Horizontal,tr("商品条码"));
    model->setHeaderData(1,Qt::Horizontal,tr("商品名称"));
    model->setHeaderData(2,Qt::Horizontal,tr("规格型号"));
    model->setHeaderData(3,Qt::Horizontal,tr("颜色"));
    model->setHeaderData(4,Qt::Horizontal,tr("销售价"));
    model->setHeaderData(5,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(6,Qt::Horizontal,tr("折后单价"));
    model->setHeaderData(7,Qt::Horizontal,tr("销售数"));
    model->setHeaderData(8,Qt::Horizontal,tr("单位"));
    model->setHeaderData(9,Qt::Horizontal,tr("总金额"));
    model->setHeaderData(10,Qt::Horizontal,tr("备注"));
    model->setHeaderData(11,Qt::Horizontal,tr("系统备注"));

    model->select();

    ui->Goods_tableView->setModel(model);
    ui->Goods_tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->Goods_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    //ui->Goods_tableView->setColumnHidden(0, true);
    ui->Goods_tableView->resizeColumnsToContents();
    ui->Goods_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    QHeaderView *header = ui->Goods_tableView->horizontalHeader();
    header->setStretchLastSection(true);

    //closeConnection();
}

/*显示用户购买商品的总价格*/
void Pro_Seal_Dialog::Show_Sum_Price()
{
    //createConnection();

    QString goods_id = ui->Find_Goods_Id_lineEdit->text();
    QSqlQuery query;
    query.exec(QObject::tr("select Goods_Seal_Price from Goods where Goods_Id = '%1'")
               .arg(goods_id));
    while(query.next())
    {
        QString price = query.value(0).toString();
        qDebug() << price;
        //QString str1 = "售:￥";
        QTextCodec *codec = QTextCodec::codecForLocale();
        QString str1 = codec->toUnicode("售:￥");
        QString str2 = codec->toUnicode("数量:");
        QString price_sum = str1 + price;

        ui->Price_Sum_label->setText(price_sum);
        ui->Any_price_label->setText(str2);
    }

    //closeConnection();
}


/*取消某一商品订单信息*/
void Pro_Seal_Dialog::on_Cancel_pushButton_clicked()
{
    int curRow = ui->Goods_tableView->currentIndex().row();//获取选中的行

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
}

/*前台卖货时，根据商品条形码查找商品*/
void Pro_Seal_Dialog::on_Find_Id_pushButton_clicked()
{
    //createConnection();

    QString goods_id = ui->Find_Goods_Id_lineEdit->text();
    static QSqlQueryModel *model = new QSqlQueryModel(ui->Goods_tableView);
    model->setQuery(QString("select Goods_Id,Goods_Name,Goods_Type,Goods_Color,"
                            "Goods_Units,Goods_Seal_Price from Goods where Goods_Id = '%1'")
                    .arg(goods_id));

    model->setHeaderData(0,Qt::Horizontal,tr("商品条码"));
    model->setHeaderData(1,Qt::Horizontal,tr("商品名称"));
    model->setHeaderData(2,Qt::Horizontal,tr("规格型号"));
    model->setHeaderData(3,Qt::Horizontal,tr("颜色"));
    model->setHeaderData(4,Qt::Horizontal,tr("单位"));
    model->setHeaderData(5,Qt::Horizontal,tr("销售价"));
    model->setHeaderData(6,Qt::Horizontal,tr("总金额"));
    model->setHeaderData(7,Qt::Horizontal,tr("备注"));
    model->setHeaderData(8,Qt::Horizontal,tr("系统备注"));
    ui->Goods_tableView->setModel(model);//将查找出的数据显示出来
    //closeConnection();
    Show_Sum_Price();
    ui->Find_Goods_Id_lineEdit->clear();
}

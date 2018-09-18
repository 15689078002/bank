/****************************************************************************
 **会员注册功能*
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
#include "vip_log_dialog.h"
#include "ui_vip_log_dialog.h"
#include "database.h"

#include <QSqlTableModel>
#include <QDebug>
#include <QMessageBox>

VIP_Log_Dialog::VIP_Log_Dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VIP_Log_Dialog)
{
    ui->setupUi(this);

    ui->Birthday_dateEdit->setCalendarPopup(true);
    ui->Regist_dateEdit->setCalendarPopup(true);

    QDate today = QDate::currentDate();
    ui->Regist_dateEdit->setDateRange(today.addDays(-90),today.addDays(90));
    ui->Birthday_dateEdit->setDateRange(today.addDays(-90),today.addDays(90));


    Create_Icon();

}

VIP_Log_Dialog::~VIP_Log_Dialog()
{
    delete ui;
}

/*********************退出按钮***************/
void VIP_Log_Dialog::on_Exit_pushButton_clicked()
{
    this->close();

    //清除输入信息
    ui->Id_lineEdit->clear();
    ui->Name_lineEdit->clear();
    ui->Phone_lineEdit->clear();
    ui->Email_lineEdit->clear();
    ui->Grade_lineEdit->clear();
    ui->Money_lineEdit->clear();
    ui->Address_lineEdit->clear();
}

/***********将所输入的会员信息存入数据库**************/
void VIP_Log_Dialog::on_Ok_pushButton_clicked()
{
    //createConnection();//打开数据库

    /****获取输入的管理员的信息保存在相应的变量里面*******/
    QString member_id = ui->Id_lineEdit->text();
    QString member_name = ui->Name_lineEdit->text();
    QString member_phone = ui->Phone_lineEdit->text();
    QString member_address = ui->Address_lineEdit->text();
    QString member_class = ui->Vip_comboBox->itemText(ui->Vip_comboBox->currentIndex());
    QString member_grade = ui->Grade_lineEdit->text();
    QString member_cost = ui->Money_lineEdit->text();
    QString member_register = ui->Regist_dateEdit->text();
    QString member_birthday = ui->Birthday_dateEdit->text();
    QString member_email = ui->Email_lineEdit->text();
    QString member_remark = ui->Remark_lineEdit->text();

    if(ui->Id_lineEdit->text().isEmpty())
    {
        QMessageBox::information(this,tr("提示 \n"),
                                 tr("会员ID号不能为空!"),
                                 QMessageBox::Yes);
    }
    else if(ui->Name_lineEdit->text().isEmpty())
    {
        QMessageBox::information(this,tr("提示 \n"),
                                 tr("会员姓名不能为空!"),
                                 QMessageBox::Yes);
    }
    else
    {
        /*将输入的数据插入到数据表中,保存起来*/
        static QSqlTableModel model;
        model.setTable("member");
        QSqlQuery query;
        query.prepare("INSERT INTO member (Member_Id, Member_Name,Member_Phone,Member_Address,"
                      "Member_Class,Member_Grade,Member_Cost,Member_Register,Member_Birthday,"
                      "Member_Email,Member_Remark)"
                      "VALUES (:Member_Id,:Member_Name,:Member_Phone,:Member_Address,:Member_Class,:Member_Grade,:Member_Cost,:Member_Register,:Member_Birthday,:Member_Email,:Member_Remark)");
        query.bindValue(":Member_Id",member_id);
        query.bindValue(":Member_Name",member_name);
        query.bindValue(":Member_Phone",member_phone);
        query.bindValue(":Member_Address",member_address);
        query.bindValue(":Member_Class",member_class);
        query.bindValue(":Member_Grade",member_grade);
        query.bindValue(":Member_Cost",member_cost);
        query.bindValue(":Member_Register",member_register);
        query.bindValue(":Member_Birthday",member_birthday);
        query.bindValue(":Member_Email",member_email);
        query.bindValue(":Member_Remark",member_remark);
        query.setForwardOnly(true);
        query.exec();
    }
    //closeConnection();//关闭数据库

}

/****自动在数据库中查找出会员的id后，实现自动增加,并显示出来*****/
void VIP_Log_Dialog::on_Get_Id_pushButton_clicked()
{
    static QSqlTableModel model;
    model.setTable("member");
    QSqlQuery query;
    query.exec(QObject::tr("select max(Member_Id) from member"));//查找表中id列的最大值
    while(query.next())
    {
        qint32 id = query.value(0).toInt() + 1;
        ui->Id_lineEdit->setText(QString::number(id,10));
    }
}

/************************设置程序图标等信息**************************/
void VIP_Log_Dialog::Create_Icon()
{
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());//设置Dialog为当前固定大小
    setWindowTitle(tr("VIP会员登记"));

    QIcon icon = QIcon(":/images/program.png");
    setWindowIcon(icon);  //设置应用程序图标
}

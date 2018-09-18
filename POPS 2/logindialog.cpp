/****************************************************************************
 **登录界面
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

#include "logindialog.h"
#include "ui_logindialog.h"

#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlQuery>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setFixedSize(this->width(), this->height());//禁止最大化显示
    ui->LoginpushButton->setFlat(true);         //设置登录按钮状态为透明
    setWindowFlags(windowFlags()&~Qt::WindowCloseButtonHint&~Qt::WindowContextHelpButtonHint);//去掉登录框的问号
    createicon();

    QSqlQuery query;
    //query.setForwardOnly(true);
    query.exec(QObject::tr("select User_Id,User_Name from user"));
    while(query.next())
    {
        ui->ID_comboBox->addItem(query.value(0).toString());
        ui->Name_comboBox->addItem(query.value(1).toString());
    }
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

/*************************登录条件的判断****************************/
void LoginDialog::on_LoginpushButton_clicked()
{
    if(ui->PwdlineEdit->text().isEmpty())
    {
        QMessageBox::information(this,tr("用户名和密码不能为空"),
                tr("请输入用户名和密码后再登录！\n\n"),
                QMessageBox::Yes);
    }
    else
    {
        QString User_Id = ui->ID_comboBox->itemText(ui->ID_comboBox->currentIndex());
        QString User_Name = ui->Name_comboBox->itemText(ui->Name_comboBox->currentIndex());
        QString User_Pwd = ui->PwdlineEdit->text();

        QSqlTableModel model;
        model.setTable("user");

        /*在用户数据表里进行检索查询，匹配用户名和密码是否相同*/
        model.setFilter(QObject::tr("User_Id = '%1' and User_Name = '%2' and User_Pwd = '%3'")
                        .arg(User_Id).arg(User_Name).arg(User_Pwd));
        model.select();

        if(model.rowCount() == 1)
        {
            accept();

        }
        else
        {
            QMessageBox::warning(this,tr("警告"),tr("用户名或者密码不匹配,\n请重新输入!"),
                                 QMessageBox::Yes);
            //ui->IDlineEdit->clear();
            //ui->NamelineEdit->clear();
            ui->PwdlineEdit->clear();
            ui->PwdlineEdit->setFocus();//定位一个输入焦点
        }
    }
}

/**/
void LoginDialog::createicon()
{
    QIcon icon = QIcon(":/images/program.png");
    setWindowIcon(icon);  //设置应用程序图标
}

/********************退出功能的实现*****************/
void LoginDialog::on_ExitLoginpushButton_clicked()
{
    this->close();
}

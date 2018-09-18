#ifndef MEMBER_MANAGE_DIALOG_H
#define MEMBER_MANAGE_DIALOG_H

#include <QWidget>
#include <QSqlTableModel>

#include "vip_log_dialog.h"

namespace Ui {
class Member_Manage_Dialog;
}

class Member_Manage_Dialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit Member_Manage_Dialog(QWidget *parent = 0);
    ~Member_Manage_Dialog();

public:
    int compare(const QString &s1, const QString &s2,//判断两个字符是否相等
    Qt::CaseSensitivity cs = Qt::CaseSensitive );

public:
    QSqlTableModel *model;      //创建一个可编辑的模型，可以独立处理数据库
    VIP_Log_Dialog *vip;
    void Set_table_style();     //设置表格样式
    void Show_member_information();//显示会员信息
    
private slots:
    void on_Delete_pushButton_clicked();//删除功能

    void on_Find_pushButton_clicked();//查找功能

    void on_Sort_pushButton_clicked();//会员排序功能

    void on_Show_All_pushButton_clicked();//显示所有会员信息功能

    void on_Add_pushButton_clicked();//添加会员信息

    void on_Save_pushButton_clicked();//保存对会员信息的修改

    void on_Modify_pushButton_clicked();//会员信息修改

private:
    Ui::Member_Manage_Dialog *ui;
};

#endif // MEMBER_MANAGE_DIALOG_H

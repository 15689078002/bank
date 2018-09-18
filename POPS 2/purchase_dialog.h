#ifndef PURCHASE_DIALOG_H
#define PURCHASE_DIALOG_H

#include <QWidget>
#include <QSqlTableModel>

#include "basic_data_dialog.h"  //基础资料对话框

namespace Ui {
class Purchase_Dialog;
}

class Purchase_Dialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit Purchase_Dialog(QWidget *parent = 0);
    ~Purchase_Dialog();
    
public:
    void Set_table_style();     //设置表格样式
    void Show_Goods_infor();    //显示商品信息

    void copy_Goods_to_Seals();  //两张数据表之间进行数据复制
private slots:
    void on_Ok_Add_pushButton_clicked();//添加商品信息

    void on_Show_pushButton_clicked();//显示商品信息

    void on_Delete_pushButton_clicked();//删除商品信息

    void on_Find_Categories_pushButton_clicked();

public:
    QSqlTableModel *model;      //创建一个可编辑的模型，可以独立处理数据库
    Basic_Data_Dialog *basic_data_dialog;//基础资料对话框
private:
    Ui::Purchase_Dialog *ui;

};

#endif // PURCHASE_DIALOG_H

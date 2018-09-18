#ifndef PRO_SEAL_DIALOG_H
#define PRO_SEAL_DIALOG_H

#include <QWidget>
#include <QSqlTableModel>
#include <QSqlQueryModel>

namespace Ui {
class Pro_Seal_Dialog;
}

class Pro_Seal_Dialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit Pro_Seal_Dialog(QWidget *parent = 0);
    ~Pro_Seal_Dialog();
public:
    //void Set_table_style();//设置表格样式
    void Show_Goods_infor(); //显示购物信息
    void Show_Sum_Price();  //计算用户购买商品的总价格
    void refresh();//跟新显示数据
    
private slots:

    void on_Cancel_pushButton_clicked();

    void on_Find_Id_pushButton_clicked();

private:
    Ui::Pro_Seal_Dialog *ui;
    QSqlTableModel *model;
};

#endif // PRO_SEAL_DIALOG_H

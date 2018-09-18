#ifndef BASIC_DATA_DIALOG_H
#define BASIC_DATA_DIALOG_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMouseEvent>

enum{
    Color_Id = 0,
    Color_Type =1
};
namespace Ui {
class Basic_Data_Dialog;
}

class Basic_Data_Dialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit Basic_Data_Dialog(QWidget *parent = 0);
    ~Basic_Data_Dialog();
public:
    void Set_table_style();     //设置表格样式
    void Show_Color_information();//显示颜色信息
protected:
    void mousePressEvent(QMouseEvent *event);
public slots:
    /***************品牌管理槽函数***********/
    void Show_Brand_Info_Slot();//显示品牌管理页

    /****************类别管理槽函数******************/
    void Show_Categoriy_Info_Slot();//显示类别管理页

    /*颜色类别管理槽函数*/
    void Show_Color_Info_Slot();//显示颜色管理页
    void If_Add_Color_Key();    //当添加颜色按钮被按下的时候
    void Save_Color_Key();      //保存颜色按钮被按下的时候
    void Delete_Color_Key();     //删除颜色那妞被按下的时候

    /*计量单位管理槽函数*/
    void Show_Unit_Info_Slot();//显示计量单位页

    /*自动拆包管理槽函数*/
    void Show_Auto_Info_Slot();//显示自动拆包页

    /*供货商管理槽函数*/
    void Show_Supplier_Info_Slot();//显示供货商页

    /*VIP管理槽函数*/
    void Show_Vip_Info_Slot();//显示VIP页

    /*库存调整槽函数*/
    void Show_Adjust_Info_Slot();//显示库存调整也

    /*库存调拨管理槽函数*/
    void Show_Allocation_Infon_Slot();//显示库存调拨页


private:
    Ui::Basic_Data_Dialog *ui;
    QSqlTableModel *model;
};

#endif // BASIC_DATA_DIALOG_H

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
    void Set_table_style();     //���ñ����ʽ
    void Show_Color_information();//��ʾ��ɫ��Ϣ
protected:
    void mousePressEvent(QMouseEvent *event);
public slots:
    /***************Ʒ�ƹ���ۺ���***********/
    void Show_Brand_Info_Slot();//��ʾƷ�ƹ���ҳ

    /****************������ۺ���******************/
    void Show_Categoriy_Info_Slot();//��ʾ������ҳ

    /*��ɫ������ۺ���*/
    void Show_Color_Info_Slot();//��ʾ��ɫ����ҳ
    void If_Add_Color_Key();    //�������ɫ��ť�����µ�ʱ��
    void Save_Color_Key();      //������ɫ��ť�����µ�ʱ��
    void Delete_Color_Key();     //ɾ����ɫ��椱����µ�ʱ��

    /*������λ����ۺ���*/
    void Show_Unit_Info_Slot();//��ʾ������λҳ

    /*�Զ��������ۺ���*/
    void Show_Auto_Info_Slot();//��ʾ�Զ����ҳ

    /*�����̹���ۺ���*/
    void Show_Supplier_Info_Slot();//��ʾ������ҳ

    /*VIP����ۺ���*/
    void Show_Vip_Info_Slot();//��ʾVIPҳ

    /*�������ۺ���*/
    void Show_Adjust_Info_Slot();//��ʾ������Ҳ

    /*����������ۺ���*/
    void Show_Allocation_Infon_Slot();//��ʾ������ҳ


private:
    Ui::Basic_Data_Dialog *ui;
    QSqlTableModel *model;
};

#endif // BASIC_DATA_DIALOG_H

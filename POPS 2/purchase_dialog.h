#ifndef PURCHASE_DIALOG_H
#define PURCHASE_DIALOG_H

#include <QWidget>
#include <QSqlTableModel>

#include "basic_data_dialog.h"  //�������϶Ի���

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
    void Set_table_style();     //���ñ����ʽ
    void Show_Goods_infor();    //��ʾ��Ʒ��Ϣ

    void copy_Goods_to_Seals();  //�������ݱ�֮��������ݸ���
private slots:
    void on_Ok_Add_pushButton_clicked();//�����Ʒ��Ϣ

    void on_Show_pushButton_clicked();//��ʾ��Ʒ��Ϣ

    void on_Delete_pushButton_clicked();//ɾ����Ʒ��Ϣ

    void on_Find_Categories_pushButton_clicked();

public:
    QSqlTableModel *model;      //����һ���ɱ༭��ģ�ͣ����Զ����������ݿ�
    Basic_Data_Dialog *basic_data_dialog;//�������϶Ի���
private:
    Ui::Purchase_Dialog *ui;

};

#endif // PURCHASE_DIALOG_H

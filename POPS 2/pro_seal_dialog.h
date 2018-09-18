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
    //void Set_table_style();//���ñ����ʽ
    void Show_Goods_infor(); //��ʾ������Ϣ
    void Show_Sum_Price();  //�����û�������Ʒ���ܼ۸�
    void refresh();//������ʾ����
    
private slots:

    void on_Cancel_pushButton_clicked();

    void on_Find_Id_pushButton_clicked();

private:
    Ui::Pro_Seal_Dialog *ui;
    QSqlTableModel *model;
};

#endif // PRO_SEAL_DIALOG_H

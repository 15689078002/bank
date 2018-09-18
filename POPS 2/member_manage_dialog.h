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
    int compare(const QString &s1, const QString &s2,//�ж������ַ��Ƿ����
    Qt::CaseSensitivity cs = Qt::CaseSensitive );

public:
    QSqlTableModel *model;      //����һ���ɱ༭��ģ�ͣ����Զ����������ݿ�
    VIP_Log_Dialog *vip;
    void Set_table_style();     //���ñ����ʽ
    void Show_member_information();//��ʾ��Ա��Ϣ
    
private slots:
    void on_Delete_pushButton_clicked();//ɾ������

    void on_Find_pushButton_clicked();//���ҹ���

    void on_Sort_pushButton_clicked();//��Ա������

    void on_Show_All_pushButton_clicked();//��ʾ���л�Ա��Ϣ����

    void on_Add_pushButton_clicked();//��ӻ�Ա��Ϣ

    void on_Save_pushButton_clicked();//����Ի�Ա��Ϣ���޸�

    void on_Modify_pushButton_clicked();//��Ա��Ϣ�޸�

private:
    Ui::Member_Manage_Dialog *ui;
};

#endif // MEMBER_MANAGE_DIALOG_H

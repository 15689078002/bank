#ifndef VIP_LOG_DIALOG_H
#define VIP_LOG_DIALOG_H

#include <QWidget>

namespace Ui {
class VIP_Log_Dialog;
}

class VIP_Log_Dialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit VIP_Log_Dialog(QWidget *parent = 0);
    ~VIP_Log_Dialog();

public:
    //extern void Show_member_information();

    
private slots:
    void on_Exit_pushButton_clicked();//确认功能，将登记的会员信息写入数据库

    void on_Ok_pushButton_clicked(); //关闭VIP登记功能

    void on_Get_Id_pushButton_clicked();//自动获取会员卡号

public:
    void Create_Icon();//创建图标

private:
    Ui::VIP_Log_Dialog *ui;
};

#endif // VIP_LOG_DIALOG_H

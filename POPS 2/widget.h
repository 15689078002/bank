#ifndef WIDGET_H
#define WIDGET_H

#include "member_manage_dialog.h"               //��Ա����
#include "pro_seal_dialog.h"                    //ǰ̨����
#include "purchase_dialog.h"                     //�ɹ�����
#include "stock_adjust_dialog.h"                 //������
#include "seals_statistics_dialog.h"             //����ͳ�Ʒ���
#include "inventory_statistics_dialog.h"         //���ͳ�Ʒ���
#include "stock_seal_save_statistic_dialog.h"    //������ͳ�Ʒ���
#include "basic_data_dialog.h"                  //�������϶Ի���
#include "homepagedialog.h"                     //��ҳ

#include <QWidget>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include <QToolButton>
#include <QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public:
    void closeEvent( QCloseEvent * event );//���û��رմ���ʱ�����û��Ƿ�ر�
public slots:
    void changePage(QListWidgetItem *current, QListWidgetItem *previous);
    void showtime_slot();   //��ʾϵͳʱ��
    void help_info();       //ʹ��˵��
    void lockscreen();      //����
    void show_calculator();  //��ʾ������
    void moneybox_up();        //����Ǯ��
    void show_homepage();   //��ʾ��ҳ

private:
    void createIcons();
private:
    homepageDialog *homedg;
    Pro_Seal_Dialog *pro_seal;
    Purchase_Dialog *purch;
    Stock_Adjust_Dialog *stock_adjust;
    Seals_Statistics_Dialog *seal;
    Inventory_Statistics_Dialog *inventory;
    Member_Manage_Dialog *member;
    Stock_Seal_Save_Statistic_Dialog *stockss;
private:
    Ui::Widget *ui;
    QListWidget *contentsWidget;   //�����Ӧ�İ�ť�����л�����
    QStackedWidget *pagesWidget;  //�л�����
    QToolButton *cancellation;
    QLabel *statuslabel;
    QLabel *adminlabel;      //��ǰ����Ա
    QLabel *datatimelabel;  //��ʾ��ǰʱ��
    QTimer *timer;
    QToolButton *helpbutton;    //����
    QToolButton *lockbutton;    //����
    QToolButton *calculatebutton;//������
    QToolButton *moneyboxbtn;//����Ǯ��
    QToolButton *homepagebtn;//��ҳ

};

#endif // WIDGET_H

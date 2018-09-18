#ifndef WIDGET_H
#define WIDGET_H

#include "member_manage_dialog.h"               //会员管理
#include "pro_seal_dialog.h"                    //前台销售
#include "purchase_dialog.h"                     //采购进货
#include "stock_adjust_dialog.h"                 //库存调整
#include "seals_statistics_dialog.h"             //销售统计分析
#include "inventory_statistics_dialog.h"         //库存统计分析
#include "stock_seal_save_statistic_dialog.h"    //进销存统计分析
#include "basic_data_dialog.h"                  //基础资料对话框
#include "homepagedialog.h"                     //首页

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
    void closeEvent( QCloseEvent * event );//当用户关闭窗口时提醒用户是否关闭
public slots:
    void changePage(QListWidgetItem *current, QListWidgetItem *previous);
    void showtime_slot();   //显示系统时间
    void help_info();       //使用说明
    void lockscreen();      //锁屏
    void show_calculator();  //显示计算器
    void moneybox_up();        //弹出钱箱
    void show_homepage();   //显示首页

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
    QListWidget *contentsWidget;   //点击相应的按钮进行切换界面
    QStackedWidget *pagesWidget;  //切换界面
    QToolButton *cancellation;
    QLabel *statuslabel;
    QLabel *adminlabel;      //当前管理员
    QLabel *datatimelabel;  //显示当前时间
    QTimer *timer;
    QToolButton *helpbutton;    //帮助
    QToolButton *lockbutton;    //锁屏
    QToolButton *calculatebutton;//计算器
    QToolButton *moneyboxbtn;//弹出钱箱
    QToolButton *homepagebtn;//首页

};

#endif // WIDGET_H

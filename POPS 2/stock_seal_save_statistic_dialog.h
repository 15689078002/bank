#ifndef STOCK_SEAL_SAVE_STATISTIC_DIALOG_H
#define STOCK_SEAL_SAVE_STATISTIC_DIALOG_H

#include <QWidget>

namespace Ui {
class Stock_Seal_Save_Statistic_Dialog;
}

class Stock_Seal_Save_Statistic_Dialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit Stock_Seal_Save_Statistic_Dialog(QWidget *parent = 0);
    ~Stock_Seal_Save_Statistic_Dialog();
    
private:
    Ui::Stock_Seal_Save_Statistic_Dialog *ui;
};

#endif // STOCK_SEAL_SAVE_STATISTIC_DIALOG_H

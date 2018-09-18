#ifndef STOCK_ADJUST_DIALOG_H
#define STOCK_ADJUST_DIALOG_H

#include <QWidget>

namespace Ui {
class Stock_Adjust_Dialog;
}

class Stock_Adjust_Dialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit Stock_Adjust_Dialog(QWidget *parent = 0);
    ~Stock_Adjust_Dialog();
    
private:
    Ui::Stock_Adjust_Dialog *ui;
};

#endif // STOCK_ADJUST_DIALOG_H

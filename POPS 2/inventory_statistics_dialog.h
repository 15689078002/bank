#ifndef INVENTORY_STATISTICS_DIALOG_H
#define INVENTORY_STATISTICS_DIALOG_H

#include <QWidget>

namespace Ui {
class Inventory_Statistics_Dialog;
}

class Inventory_Statistics_Dialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit Inventory_Statistics_Dialog(QWidget *parent = 0);
    ~Inventory_Statistics_Dialog();
    
private:
    Ui::Inventory_Statistics_Dialog *ui;
};

#endif // INVENTORY_STATISTICS_DIALOG_H

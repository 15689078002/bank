#ifndef SEALS_STATISTICS_DIALOG_H
#define SEALS_STATISTICS_DIALOG_H

#include <QWidget>

namespace Ui {
class Seals_Statistics_Dialog;
}

class Seals_Statistics_Dialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit Seals_Statistics_Dialog(QWidget *parent = 0);
    ~Seals_Statistics_Dialog();
    
private:
    Ui::Seals_Statistics_Dialog *ui;
};

#endif // SEALS_STATISTICS_DIALOG_H

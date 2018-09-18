#ifndef HOMEPAGEDIALOG_H
#define HOMEPAGEDIALOG_H

#include <QWidget>

namespace Ui {
class homepageDialog;
}

class homepageDialog : public QWidget
{
    Q_OBJECT
    
public:
    explicit homepageDialog(QWidget *parent = 0);
    ~homepageDialog();
    
private:
    Ui::homepageDialog *ui;
};

#endif // HOMEPAGEDIALOG_H

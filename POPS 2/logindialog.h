#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
    
private slots:
    void on_LoginpushButton_clicked();//��¼��ť

    void on_ExitLoginpushButton_clicked();//�˳���ť
public:
    void createicon();//����ͼ��

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H

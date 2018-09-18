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
    void on_LoginpushButton_clicked();//登录按钮

    void on_ExitLoginpushButton_clicked();//退出按钮
public:
    void createicon();//创建图标

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H

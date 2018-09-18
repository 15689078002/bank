/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QLocale>
#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QDialog>
#include <QHeaderView>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLineEdit *PwdlineEdit;
    QPushButton *LoginpushButton;
    QComboBox *Name_comboBox;
    QComboBox *ID_comboBox;
    QPushButton *ExitLoginpushButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(439, 363);
        LoginDialog->setStyleSheet(QString::fromUtf8("background-image: url(:/images/loginpic.png);"));
        LoginDialog->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        PwdlineEdit = new QLineEdit(LoginDialog);
        PwdlineEdit->setObjectName(QString::fromUtf8("PwdlineEdit"));
        PwdlineEdit->setGeometry(QRect(120, 210, 281, 44));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        PwdlineEdit->setFont(font);
        PwdlineEdit->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));
        PwdlineEdit->setEchoMode(QLineEdit::Password);
        LoginpushButton = new QPushButton(LoginDialog);
        LoginpushButton->setObjectName(QString::fromUtf8("LoginpushButton"));
        LoginpushButton->setGeometry(QRect(127, 290, 104, 37));
        LoginpushButton->setFont(font);
        LoginpushButton->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));
        Name_comboBox = new QComboBox(LoginDialog);
        Name_comboBox->setObjectName(QString::fromUtf8("Name_comboBox"));
        Name_comboBox->setGeometry(QRect(120, 160, 282, 44));
        Name_comboBox->setFont(font);
        Name_comboBox->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));
        ID_comboBox = new QComboBox(LoginDialog);
        ID_comboBox->setObjectName(QString::fromUtf8("ID_comboBox"));
        ID_comboBox->setGeometry(QRect(120, 110, 282, 43));
        ID_comboBox->setFont(font);
        ID_comboBox->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));
        ExitLoginpushButton = new QPushButton(LoginDialog);
        ExitLoginpushButton->setObjectName(QString::fromUtf8("ExitLoginpushButton"));
        ExitLoginpushButton->setGeometry(QRect(285, 287, 104, 37));
        ExitLoginpushButton->setFont(font);
        ExitLoginpushButton->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));
        QWidget::setTabOrder(PwdlineEdit, LoginpushButton);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\347\231\273\345\275\225", 0));
        PwdlineEdit->setText(QString());
        PwdlineEdit->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        LoginpushButton->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0));
        ExitLoginpushButton->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H

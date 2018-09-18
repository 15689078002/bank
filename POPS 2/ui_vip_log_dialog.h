/********************************************************************************
** Form generated from reading UI file 'vip_log_dialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIP_LOG_DIALOG_H
#define UI_VIP_LOG_DIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QDateEdit>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_VIP_Log_Dialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Id_lineEdit;
    QPushButton *Get_Id_pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Ok_pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Exit_pushButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *Vip_comboBox;
    QPushButton *Find_pushButton;
    QLabel *label_3;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *Name_lineEdit;
    QLabel *label_6;
    QLineEdit *Email_lineEdit;
    QLabel *label_8;
    QDateEdit *Regist_dateEdit;
    QLabel *label_10;
    QLineEdit *Grade_lineEdit;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_3;
    QLineEdit *Phone_lineEdit;
    QLabel *label_7;
    QDateEdit *Birthday_dateEdit;
    QLabel *label_12;
    QLineEdit *Address_lineEdit;
    QLabel *label_9;
    QLineEdit *Money_lineEdit;
    QLabel *label_5;
    QLabel *label_11;
    QLineEdit *Remark_lineEdit;

    void setupUi(QWidget *VIP_Log_Dialog)
    {
        if (VIP_Log_Dialog->objectName().isEmpty())
            VIP_Log_Dialog->setObjectName(QString::fromUtf8("VIP_Log_Dialog"));
        VIP_Log_Dialog->resize(686, 422);
        VIP_Log_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/images/background.jpg);"));
        layoutWidget = new QWidget(VIP_Log_Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 20, 311, 60));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout->addWidget(label);

        Id_lineEdit = new QLineEdit(layoutWidget);
        Id_lineEdit->setObjectName(QString::fromUtf8("Id_lineEdit"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        Id_lineEdit->setFont(font1);

        horizontalLayout->addWidget(Id_lineEdit);

        Get_Id_pushButton = new QPushButton(layoutWidget);
        Get_Id_pushButton->setObjectName(QString::fromUtf8("Get_Id_pushButton"));
        Get_Id_pushButton->setFont(font);
        Get_Id_pushButton->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));

        horizontalLayout->addWidget(Get_Id_pushButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(52, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(VIP_Log_Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 360, 371, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Ok_pushButton = new QPushButton(layoutWidget1);
        Ok_pushButton->setObjectName(QString::fromUtf8("Ok_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Ok_pushButton->sizePolicy().hasHeightForWidth());
        Ok_pushButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        Ok_pushButton->setFont(font2);
        Ok_pushButton->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));

        horizontalLayout_3->addWidget(Ok_pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        Exit_pushButton = new QPushButton(layoutWidget1);
        Exit_pushButton->setObjectName(QString::fromUtf8("Exit_pushButton"));
        sizePolicy.setHeightForWidth(Exit_pushButton->sizePolicy().hasHeightForWidth());
        Exit_pushButton->setSizePolicy(sizePolicy);
        Exit_pushButton->setFont(font2);
        Exit_pushButton->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));

        horizontalLayout_3->addWidget(Exit_pushButton);

        layoutWidget2 = new QWidget(VIP_Log_Dialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(360, 20, 276, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_2->addWidget(label_2);

        Vip_comboBox = new QComboBox(layoutWidget2);
        Vip_comboBox->setObjectName(QString::fromUtf8("Vip_comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Vip_comboBox->sizePolicy().hasHeightForWidth());
        Vip_comboBox->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        Vip_comboBox->setFont(font4);

        horizontalLayout_2->addWidget(Vip_comboBox);

        Find_pushButton = new QPushButton(layoutWidget2);
        Find_pushButton->setObjectName(QString::fromUtf8("Find_pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Find_pushButton->sizePolicy().hasHeightForWidth());
        Find_pushButton->setSizePolicy(sizePolicy2);
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setWeight(75);
        Find_pushButton->setFont(font5);
        Find_pushButton->setStyleSheet(QString::fromUtf8("border: 2px groove gray; border-radius: 10px; padding: 2px 4px"));

        horizontalLayout_2->addWidget(Find_pushButton);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_2->addWidget(label_3);

        layoutWidget3 = new QWidget(VIP_Log_Dialog);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 90, 315, 191));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        Name_lineEdit = new QLineEdit(layoutWidget3);
        Name_lineEdit->setObjectName(QString::fromUtf8("Name_lineEdit"));
        QFont font6;
        font6.setPointSize(15);
        Name_lineEdit->setFont(font6);

        gridLayout_2->addWidget(Name_lineEdit, 0, 1, 1, 1);

        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        Email_lineEdit = new QLineEdit(layoutWidget3);
        Email_lineEdit->setObjectName(QString::fromUtf8("Email_lineEdit"));
        Email_lineEdit->setFont(font6);

        gridLayout_2->addWidget(Email_lineEdit, 1, 1, 1, 1);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        Regist_dateEdit = new QDateEdit(layoutWidget3);
        Regist_dateEdit->setObjectName(QString::fromUtf8("Regist_dateEdit"));
        Regist_dateEdit->setFont(font6);

        gridLayout_2->addWidget(Regist_dateEdit, 2, 1, 1, 1);

        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout_2->addWidget(label_10, 3, 0, 1, 1);

        Grade_lineEdit = new QLineEdit(layoutWidget3);
        Grade_lineEdit->setObjectName(QString::fromUtf8("Grade_lineEdit"));
        Grade_lineEdit->setFont(font6);

        gridLayout_2->addWidget(Grade_lineEdit, 3, 1, 1, 1);

        layoutWidget4 = new QWidget(VIP_Log_Dialog);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(350, 90, 315, 191));
        gridLayout_3 = new QGridLayout(layoutWidget4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Phone_lineEdit = new QLineEdit(layoutWidget4);
        Phone_lineEdit->setObjectName(QString::fromUtf8("Phone_lineEdit"));
        Phone_lineEdit->setFont(font6);

        gridLayout_3->addWidget(Phone_lineEdit, 1, 1, 1, 1);

        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        Birthday_dateEdit = new QDateEdit(layoutWidget4);
        Birthday_dateEdit->setObjectName(QString::fromUtf8("Birthday_dateEdit"));
        Birthday_dateEdit->setFont(font6);

        gridLayout_3->addWidget(Birthday_dateEdit, 2, 1, 1, 1);

        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout_3->addWidget(label_12, 3, 0, 1, 1);

        Address_lineEdit = new QLineEdit(layoutWidget4);
        Address_lineEdit->setObjectName(QString::fromUtf8("Address_lineEdit"));
        Address_lineEdit->setFont(font6);

        gridLayout_3->addWidget(Address_lineEdit, 3, 1, 1, 1);

        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        Money_lineEdit = new QLineEdit(layoutWidget4);
        Money_lineEdit->setObjectName(QString::fromUtf8("Money_lineEdit"));
        Money_lineEdit->setFont(font6);

        gridLayout_3->addWidget(Money_lineEdit, 4, 1, 1, 1);

        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_11 = new QLabel(VIP_Log_Dialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(17, 310, 41, 16));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("background:transparent"));
        Remark_lineEdit = new QLineEdit(VIP_Log_Dialog);
        Remark_lineEdit->setObjectName(QString::fromUtf8("Remark_lineEdit"));
        Remark_lineEdit->setGeometry(QRect(60, 310, 581, 20));
        Remark_lineEdit->setFont(font6);
        Remark_lineEdit->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(VIP_Log_Dialog);

        QMetaObject::connectSlotsByName(VIP_Log_Dialog);
    } // setupUi

    void retranslateUi(QWidget *VIP_Log_Dialog)
    {
        VIP_Log_Dialog->setWindowTitle(QApplication::translate("VIP_Log_Dialog", "Form", 0));
        label->setText(QApplication::translate("VIP_Log_Dialog", "\345\215\241\345\217\267\357\274\232", 0));
        Get_Id_pushButton->setText(QApplication::translate("VIP_Log_Dialog", "\350\216\267\345\217\226", 0));
        pushButton_2->setText(QApplication::translate("VIP_Log_Dialog", "\345\215\241\345\217\267\347\224\237\346\210\220\350\247\204\345\210\231\350\256\276\347\275\256", 0));
        Ok_pushButton->setText(QApplication::translate("VIP_Log_Dialog", "\344\277\235\345\255\230", 0));
        Exit_pushButton->setText(QApplication::translate("VIP_Log_Dialog", "\345\217\226\346\266\210", 0));
        label_2->setText(QApplication::translate("VIP_Log_Dialog", "\347\261\273\345\210\253\357\274\232", 0));
        Vip_comboBox->clear();
        Vip_comboBox->insertItems(0, QStringList()
         << QApplication::translate("VIP_Log_Dialog", "VIP\346\231\256\351\200\232\347\272\247", 0)
         << QApplication::translate("VIP_Log_Dialog", "VIP\345\260\212\350\264\265\347\272\247", 0)
         << QApplication::translate("VIP_Log_Dialog", "VIP", 0)
        );
        Find_pushButton->setText(QApplication::translate("VIP_Log_Dialog", "\346\237\245\346\211\276", 0));
        label_3->setText(QApplication::translate("VIP_Log_Dialog", "0.9\346\212\230", 0));
        label_4->setText(QApplication::translate("VIP_Log_Dialog", "\345\247\223\345\220\215\357\274\232", 0));
        label_6->setText(QApplication::translate("VIP_Log_Dialog", "EMali:", 0));
        label_8->setText(QApplication::translate("VIP_Log_Dialog", "\345\212\236\345\215\241\346\227\245\346\234\237\357\274\232", 0));
        label_10->setText(QApplication::translate("VIP_Log_Dialog", "\347\247\257\345\210\206\357\274\232", 0));
        label_7->setText(QApplication::translate("VIP_Log_Dialog", "\347\224\237\346\227\245\357\274\232", 0));
        label_12->setText(QApplication::translate("VIP_Log_Dialog", "\345\234\260\345\235\200\357\274\232", 0));
        label_9->setText(QApplication::translate("VIP_Log_Dialog", "\346\266\210\350\264\271\351\207\221\351\242\235\357\274\232", 0));
        label_5->setText(QApplication::translate("VIP_Log_Dialog", "\346\211\213\346\234\272\357\274\232", 0));
        label_11->setText(QApplication::translate("VIP_Log_Dialog", "\345\244\207\346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class VIP_Log_Dialog: public Ui_VIP_Log_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIP_LOG_DIALOG_H

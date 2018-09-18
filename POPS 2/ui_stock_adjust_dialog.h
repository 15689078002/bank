/********************************************************************************
** Form generated from reading UI file 'stock_adjust_dialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_ADJUST_DIALOG_H
#define UI_STOCK_ADJUST_DIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCheckBox>
#include <QComboBox>
#include <QDateEdit>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpacerItem>
#include <QTableWidget>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stock_Adjust_Dialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *New_pushButton;
    QPushButton *Open_pushButton;
    QPushButton *Save_pushButton;
    QPushButton *Delete_pushButton;
    QPushButton *check_pushButton;
    QPushButton *Delete_Row_pushButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_8;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_11;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_9;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_10;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton_7;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Stock_Adjust_Dialog)
    {
        if (Stock_Adjust_Dialog->objectName().isEmpty())
            Stock_Adjust_Dialog->setObjectName(QString::fromUtf8("Stock_Adjust_Dialog"));
        Stock_Adjust_Dialog->resize(779, 479);
        gridLayout_2 = new QGridLayout(Stock_Adjust_Dialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        New_pushButton = new QPushButton(Stock_Adjust_Dialog);
        New_pushButton->setObjectName(QString::fromUtf8("New_pushButton"));
        New_pushButton->setMinimumSize(QSize(80, 60));
        New_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add.png);"));

        horizontalLayout_6->addWidget(New_pushButton);

        Open_pushButton = new QPushButton(Stock_Adjust_Dialog);
        Open_pushButton->setObjectName(QString::fromUtf8("Open_pushButton"));
        Open_pushButton->setMinimumSize(QSize(80, 60));
        Open_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/open.png);"));

        horizontalLayout_6->addWidget(Open_pushButton);

        Save_pushButton = new QPushButton(Stock_Adjust_Dialog);
        Save_pushButton->setObjectName(QString::fromUtf8("Save_pushButton"));
        Save_pushButton->setMinimumSize(QSize(80, 60));
        Save_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/save.png);"));

        horizontalLayout_6->addWidget(Save_pushButton);

        Delete_pushButton = new QPushButton(Stock_Adjust_Dialog);
        Delete_pushButton->setObjectName(QString::fromUtf8("Delete_pushButton"));
        Delete_pushButton->setMinimumSize(QSize(80, 60));
        Delete_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/delete.png);"));

        horizontalLayout_6->addWidget(Delete_pushButton);

        check_pushButton = new QPushButton(Stock_Adjust_Dialog);
        check_pushButton->setObjectName(QString::fromUtf8("check_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(check_pushButton->sizePolicy().hasHeightForWidth());
        check_pushButton->setSizePolicy(sizePolicy);
        check_pushButton->setMinimumSize(QSize(80, 60));
        check_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/ok.png);"));

        horizontalLayout_6->addWidget(check_pushButton);

        Delete_Row_pushButton = new QPushButton(Stock_Adjust_Dialog);
        Delete_Row_pushButton->setObjectName(QString::fromUtf8("Delete_Row_pushButton"));
        Delete_Row_pushButton->setMinimumSize(QSize(80, 60));
        Delete_Row_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/delete.png);"));

        horizontalLayout_6->addWidget(Delete_Row_pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(Stock_Adjust_Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(Stock_Adjust_Dialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(130, 35));

        gridLayout->addWidget(lineEdit_4, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(Stock_Adjust_Dialog);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 0, 2, 1, 1);

        label_7 = new QLabel(Stock_Adjust_Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout->addWidget(label_7, 0, 3, 1, 2);

        lineEdit_5 = new QLineEdit(Stock_Adjust_Dialog);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(130, 35));

        gridLayout->addWidget(lineEdit_5, 0, 5, 1, 1);

        label_11 = new QLabel(Stock_Adjust_Dialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout->addWidget(label_11, 0, 6, 1, 3);

        label_8 = new QLabel(Stock_Adjust_Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        lineEdit_3 = new QLineEdit(Stock_Adjust_Dialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(130, 35));

        gridLayout->addWidget(lineEdit_3, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(Stock_Adjust_Dialog);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        label_9 = new QLabel(Stock_Adjust_Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout->addWidget(label_9, 1, 3, 1, 1);

        lineEdit_6 = new QLineEdit(Stock_Adjust_Dialog);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(130, 35));

        gridLayout->addWidget(lineEdit_6, 1, 4, 1, 2);

        label_10 = new QLabel(Stock_Adjust_Dialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("background:transparent"));

        gridLayout->addWidget(label_10, 1, 6, 1, 1);

        lineEdit_7 = new QLineEdit(Stock_Adjust_Dialog);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(130, 35));

        gridLayout->addWidget(lineEdit_7, 1, 7, 1, 1);

        pushButton_10 = new QPushButton(Stock_Adjust_Dialog);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 1, 8, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 9, 1, 1);

        checkBox = new QCheckBox(Stock_Adjust_Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 2, 0, 1, 5);


        gridLayout_2->addLayout(gridLayout, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(Stock_Adjust_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_7->addWidget(label);

        dateEdit = new QDateEdit(Stock_Adjust_Dialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_7->addWidget(dateEdit);

        label_2 = new QLabel(Stock_Adjust_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_7->addWidget(label_2);

        lineEdit = new QLineEdit(Stock_Adjust_Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setKerning(true);
        lineEdit->setFont(font);
        lineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_7->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(Stock_Adjust_Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_8->addWidget(label_3);

        comboBox = new QComboBox(Stock_Adjust_Dialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_8->addWidget(comboBox);

        pushButton_7 = new QPushButton(Stock_Adjust_Dialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_8->addWidget(pushButton_7);

        label_4 = new QLabel(Stock_Adjust_Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_8->addWidget(label_4);

        comboBox_2 = new QComboBox(Stock_Adjust_Dialog);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_8->addWidget(comboBox_2);

        label_5 = new QLabel(Stock_Adjust_Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_8->addWidget(label_5);

        lineEdit_2 = new QLineEdit(Stock_Adjust_Dialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_8->addWidget(lineEdit_2);


        gridLayout_2->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        tableWidget = new QTableWidget(Stock_Adjust_Dialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);


        retranslateUi(Stock_Adjust_Dialog);

        QMetaObject::connectSlotsByName(Stock_Adjust_Dialog);
    } // setupUi

    void retranslateUi(QWidget *Stock_Adjust_Dialog)
    {
        Stock_Adjust_Dialog->setWindowTitle(QApplication::translate("Stock_Adjust_Dialog", "Form", 0));
        New_pushButton->setText(QApplication::translate("Stock_Adjust_Dialog", "\346\226\260\345\215\225", 0));
        Open_pushButton->setText(QApplication::translate("Stock_Adjust_Dialog", "\346\211\223\345\274\200", 0));
        Save_pushButton->setText(QApplication::translate("Stock_Adjust_Dialog", "\344\277\235\345\255\230", 0));
        Delete_pushButton->setText(QApplication::translate("Stock_Adjust_Dialog", "\345\210\240\351\231\244\345\215\225\346\215\256", 0));
        check_pushButton->setText(QApplication::translate("Stock_Adjust_Dialog", "\345\256\241\346\240\270\345\215\225\346\215\256", 0));
        Delete_Row_pushButton->setText(QApplication::translate("Stock_Adjust_Dialog", "\345\210\240\351\231\244\350\241\214", 0));
        label_6->setText(QApplication::translate("Stock_Adjust_Dialog", "\345\225\206\345\223\201\346\235\241\347\240\201\357\274\232", 0));
        pushButton_8->setText(QApplication::translate("Stock_Adjust_Dialog", "\346\237\245\346\211\276", 0));
        label_7->setText(QApplication::translate("Stock_Adjust_Dialog", "\350\260\203\346\225\264\346\225\260\351\207\217\357\274\232", 0));
        label_11->setText(QApplication::translate("Stock_Adjust_Dialog", "\350\257\264\346\230\216\357\274\232\344\273\216\345\272\223\344\270\255\350\260\203\345\207\272\344\270\272\350\264\237\346\225\260\357\274\214\350\260\203\345\205\245\345\272\223\344\270\255\344\270\272\346\255\243\346\225\260", 0));
        label_8->setText(QApplication::translate("Stock_Adjust_Dialog", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        pushButton_9->setText(QApplication::translate("Stock_Adjust_Dialog", "\346\237\245\346\211\276", 0));
        label_9->setText(QApplication::translate("Stock_Adjust_Dialog", "\350\247\204    \346\240\274\357\274\232", 0));
        label_10->setText(QApplication::translate("Stock_Adjust_Dialog", "\351\242\234\350\211\262\357\274\232", 0));
        pushButton_10->setText(QApplication::translate("Stock_Adjust_Dialog", "\346\267\273\345\212\240", 0));
        checkBox->setText(QApplication::translate("Stock_Adjust_Dialog", "\346\211\253\346\217\217\346\236\252\350\207\252\345\212\250\345\275\225\345\205\245\357\274\210\350\207\252\345\212\250\346\211\247\350\241\214\343\200\220\346\267\273\345\212\240\343\200\221\357\274\214\345\271\266\347\264\257\345\212\240\343\200\220\350\260\203\346\225\264\346\225\260\351\207\217\343\200\221\357\274\211", 0));
        label->setText(QApplication::translate("Stock_Adjust_Dialog", "\345\215\225\346\215\256\346\227\245\346\234\237\357\274\232", 0));
        label_2->setText(QApplication::translate("Stock_Adjust_Dialog", "\345\215\225\345\217\267\357\274\232", 0));
        lineEdit->setText(QApplication::translate("Stock_Adjust_Dialog", "\344\277\235\345\255\230\345\220\216\350\207\252\345\212\250\347\224\237\346\210\220", 0));
        label_3->setText(QApplication::translate("Stock_Adjust_Dialog", "\350\260\203\346\225\264\347\261\273\345\236\213\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Stock_Adjust_Dialog", "\350\260\203\345\207\272", 0)
         << QApplication::translate("Stock_Adjust_Dialog", "\350\260\203\345\205\245", 0)
        );
        pushButton_7->setText(QApplication::translate("Stock_Adjust_Dialog", "\346\237\245\346\211\276", 0));
        label_4->setText(QApplication::translate("Stock_Adjust_Dialog", "\345\257\271\346\226\271\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Stock_Adjust_Dialog", "\347\254\254\344\270\200\345\210\206\345\272\227", 0)
         << QApplication::translate("Stock_Adjust_Dialog", "\347\254\254\344\272\214\345\210\206\345\272\227", 0)
        );
        label_5->setText(QApplication::translate("Stock_Adjust_Dialog", "\345\244\207\346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Stock_Adjust_Dialog: public Ui_Stock_Adjust_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_ADJUST_DIALOG_H

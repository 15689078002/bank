/********************************************************************************
** Form generated from reading UI file 'stock_seal_save_statistic_dialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_SEAL_SAVE_STATISTIC_DIALOG_H
#define UI_STOCK_SEAL_SAVE_STATISTIC_DIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCheckBox>
#include <QComboBox>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QListView>
#include <QPushButton>
#include <QSpacerItem>
#include <QTableView>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stock_Seal_Save_Statistic_Dialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QListView *listView;
    QTableView *tableView;
    QTableView *tableView_2;
    QTableView *tableView_3;

    void setupUi(QWidget *Stock_Seal_Save_Statistic_Dialog)
    {
        if (Stock_Seal_Save_Statistic_Dialog->objectName().isEmpty())
            Stock_Seal_Save_Statistic_Dialog->setObjectName(QString::fromUtf8("Stock_Seal_Save_Statistic_Dialog"));
        Stock_Seal_Save_Statistic_Dialog->resize(884, 478);
        gridLayout = new QGridLayout(Stock_Seal_Save_Statistic_Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox = new QCheckBox(Stock_Seal_Save_Statistic_Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        checkBox->setFont(font);

        horizontalLayout->addWidget(checkBox);

        comboBox = new QComboBox(Stock_Seal_Save_Statistic_Dialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        label = new QLabel(Stock_Seal_Save_Statistic_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox_2 = new QComboBox(Stock_Seal_Save_Statistic_Dialog);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        label_2 = new QLabel(Stock_Seal_Save_Statistic_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        comboBox_3 = new QComboBox(Stock_Seal_Save_Statistic_Dialog);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout->addWidget(comboBox_3);

        pushButton = new QPushButton(Stock_Seal_Save_Statistic_Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        listView = new QListView(Stock_Seal_Save_Statistic_Dialog);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 1, 0, 1, 1);

        tableView = new QTableView(Stock_Seal_Save_Statistic_Dialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 1, 1, 1);

        tableView_2 = new QTableView(Stock_Seal_Save_Statistic_Dialog);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout->addWidget(tableView_2, 1, 2, 1, 1);

        tableView_3 = new QTableView(Stock_Seal_Save_Statistic_Dialog);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));

        gridLayout->addWidget(tableView_3, 2, 0, 1, 3);


        retranslateUi(Stock_Seal_Save_Statistic_Dialog);

        QMetaObject::connectSlotsByName(Stock_Seal_Save_Statistic_Dialog);
    } // setupUi

    void retranslateUi(QWidget *Stock_Seal_Save_Statistic_Dialog)
    {
        Stock_Seal_Save_Statistic_Dialog->setWindowTitle(QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "Form", 0));
        checkBox->setText(QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\345\217\252\347\273\237\350\256\241\347\224\237\346\225\210[\344\270\212\346\236\266]\345\225\206\345\223\201", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\346\230\276\347\244\272\345\275\223\345\244\251", 0)
         << QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\346\230\276\347\244\272\346\230\250\345\244\251", 0)
         << QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\346\230\276\347\244\272\345\275\223\346\234\210", 0)
         << QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\346\230\276\347\244\272\344\270\212\346\234\210", 0)
         << QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\346\230\276\347\244\272\345\275\223\345\271\264", 0)
         << QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\346\230\276\347\244\272\344\270\212\345\271\264", 0)
         << QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\346\230\276\347\244\272\345\205\250\351\203\250", 0)
        );
        label->setText(QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\344\273\216", 0));
        label_2->setText(QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\345\210\260", 0));
        pushButton->setText(QApplication::translate("Stock_Seal_Save_Statistic_Dialog", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class Stock_Seal_Save_Statistic_Dialog: public Ui_Stock_Seal_Save_Statistic_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_SEAL_SAVE_STATISTIC_DIALOG_H

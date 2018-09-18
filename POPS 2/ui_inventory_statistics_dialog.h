/********************************************************************************
** Form generated from reading UI file 'inventory_statistics_dialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORY_STATISTICS_DIALOG_H
#define UI_INVENTORY_STATISTICS_DIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCheckBox>
#include <QGridLayout>
#include <QHeaderView>
#include <QRadioButton>
#include <QSpacerItem>
#include <QTableView>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inventory_Statistics_Dialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QSpacerItem *verticalSpacer;
    QTableView *Up_tableView;
    QTableView *Down_tableView;

    void setupUi(QWidget *Inventory_Statistics_Dialog)
    {
        if (Inventory_Statistics_Dialog->objectName().isEmpty())
            Inventory_Statistics_Dialog->setObjectName(QString::fromUtf8("Inventory_Statistics_Dialog"));
        Inventory_Statistics_Dialog->resize(790, 471);
        gridLayout_3 = new QGridLayout(Inventory_Statistics_Dialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButton = new QRadioButton(Inventory_Statistics_Dialog);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        radioButton->setFont(font);

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(Inventory_Statistics_Dialog);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        sizePolicy.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy);
        radioButton_2->setFont(font);

        gridLayout->addWidget(radioButton_2, 0, 1, 1, 1);

        radioButton_3 = new QRadioButton(Inventory_Statistics_Dialog);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        sizePolicy.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy);
        radioButton_3->setFont(font);

        gridLayout->addWidget(radioButton_3, 1, 0, 1, 1);

        radioButton_4 = new QRadioButton(Inventory_Statistics_Dialog);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        sizePolicy.setHeightForWidth(radioButton_4->sizePolicy().hasHeightForWidth());
        radioButton_4->setSizePolicy(sizePolicy);
        radioButton_4->setFont(font);

        gridLayout->addWidget(radioButton_4, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(Inventory_Statistics_Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(Inventory_Statistics_Dialog);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy);
        checkBox_2->setFont(font);

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(Inventory_Statistics_Dialog);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        sizePolicy.setHeightForWidth(checkBox_3->sizePolicy().hasHeightForWidth());
        checkBox_3->setSizePolicy(sizePolicy);
        checkBox_3->setFont(font);

        verticalLayout->addWidget(checkBox_3);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        Up_tableView = new QTableView(Inventory_Statistics_Dialog);
        Up_tableView->setObjectName(QString::fromUtf8("Up_tableView"));

        gridLayout_3->addWidget(Up_tableView, 0, 1, 1, 1);

        Down_tableView = new QTableView(Inventory_Statistics_Dialog);
        Down_tableView->setObjectName(QString::fromUtf8("Down_tableView"));

        gridLayout_3->addWidget(Down_tableView, 1, 0, 1, 2);


        retranslateUi(Inventory_Statistics_Dialog);

        QMetaObject::connectSlotsByName(Inventory_Statistics_Dialog);
    } // setupUi

    void retranslateUi(QWidget *Inventory_Statistics_Dialog)
    {
        Inventory_Statistics_Dialog->setWindowTitle(QApplication::translate("Inventory_Statistics_Dialog", "Form", 0));
        radioButton->setText(QApplication::translate("Inventory_Statistics_Dialog", "\346\214\211[\347\261\273\345\210\253]\347\273\237\350\256\241\345\210\206\346\236\220", 0));
        radioButton_2->setText(QApplication::translate("Inventory_Statistics_Dialog", "\346\214\211[\350\247\204\346\240\274]\347\273\237\350\256\241\345\210\206\346\236\220", 0));
        radioButton_3->setText(QApplication::translate("Inventory_Statistics_Dialog", "\346\214\211[\351\242\234\350\211\262]\347\273\237\350\256\241\345\210\206\346\236\220", 0));
        radioButton_4->setText(QApplication::translate("Inventory_Statistics_Dialog", "\346\214\211[\345\223\201\347\211\214]\347\273\237\350\256\241\345\210\206\346\236\220", 0));
        checkBox->setText(QApplication::translate("Inventory_Statistics_Dialog", "\345\217\252\347\273\237\350\256\241\347\224\237\346\225\210[\344\270\212\346\236\266]\345\225\206\345\223\201", 0));
        checkBox_2->setText(QApplication::translate("Inventory_Statistics_Dialog", "\345\272\223\345\255\230\346\225\260[\344\270\212\351\231\220]\346\212\245\350\255\246", 0));
        checkBox_3->setText(QApplication::translate("Inventory_Statistics_Dialog", "\345\272\223\345\255\230\346\225\260[\344\270\213\351\231\220]\346\212\245\350\255\246", 0));
    } // retranslateUi

};

namespace Ui {
    class Inventory_Statistics_Dialog: public Ui_Inventory_Statistics_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORY_STATISTICS_DIALOG_H

/********************************************************************************
** Form generated from reading UI file 'seals_statistics_dialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEALS_STATISTICS_DIALOG_H
#define UI_SEALS_STATISTICS_DIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QDateEdit>
#include <QGridLayout>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QRadioButton>
#include <QSplitter>
#include <QTableWidget>
#include <QToolButton>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seals_Statistics_Dialog
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QComboBox *comboBox;
    QLabel *label;
    QDateEdit *dateEdit_from;
    QLabel *label_2;
    QDateEdit *dateEdit_to;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QTableWidget *tableWidget;
    QToolButton *toolButton;
    QLabel *label_3;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *Seals_Statistics_Dialog)
    {
        if (Seals_Statistics_Dialog->objectName().isEmpty())
            Seals_Statistics_Dialog->setObjectName(QString::fromUtf8("Seals_Statistics_Dialog"));
        Seals_Statistics_Dialog->resize(845, 470);
        gridLayout = new QGridLayout(Seals_Statistics_Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(Seals_Statistics_Dialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        comboBox = new QComboBox(splitter);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        splitter->addWidget(comboBox);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        splitter->addWidget(label);
        dateEdit_from = new QDateEdit(splitter);
        dateEdit_from->setObjectName(QString::fromUtf8("dateEdit_from"));
        splitter->addWidget(dateEdit_from);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        splitter->addWidget(label_2);
        dateEdit_to = new QDateEdit(splitter);
        dateEdit_to->setObjectName(QString::fromUtf8("dateEdit_to"));
        splitter->addWidget(dateEdit_to);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        splitter->addWidget(pushButton);

        gridLayout->addWidget(splitter, 0, 0, 1, 4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(Seals_Statistics_Dialog);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(Seals_Statistics_Dialog);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(Seals_Statistics_Dialog);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(Seals_Statistics_Dialog);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(Seals_Statistics_Dialog);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout->addWidget(radioButton_5);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_6 = new QRadioButton(Seals_Statistics_Dialog);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout_2->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(Seals_Statistics_Dialog);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        verticalLayout_2->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(Seals_Statistics_Dialog);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        verticalLayout_2->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(Seals_Statistics_Dialog);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        verticalLayout_2->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(Seals_Statistics_Dialog);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        verticalLayout_2->addWidget(radioButton_10);


        gridLayout->addLayout(verticalLayout_2, 1, 2, 1, 1);

        tableWidget = new QTableWidget(Seals_Statistics_Dialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 3, 1, 1);

        toolButton = new QToolButton(Seals_Statistics_Dialog);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(toolButton, 2, 0, 1, 1);

        label_3 = new QLabel(Seals_Statistics_Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 3);

        tableWidget_2 = new QTableWidget(Seals_Statistics_Dialog);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout->addWidget(tableWidget_2, 3, 0, 1, 4);


        retranslateUi(Seals_Statistics_Dialog);

        QMetaObject::connectSlotsByName(Seals_Statistics_Dialog);
    } // setupUi

    void retranslateUi(QWidget *Seals_Statistics_Dialog)
    {
        Seals_Statistics_Dialog->setWindowTitle(QApplication::translate("Seals_Statistics_Dialog", "Form", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Seals_Statistics_Dialog", "\346\230\276\347\244\272\345\275\223\345\244\251", 0)
         << QApplication::translate("Seals_Statistics_Dialog", "\346\230\276\347\244\272\345\211\215\345\244\251", 0)
         << QApplication::translate("Seals_Statistics_Dialog", "\346\230\276\347\244\272\345\275\223\346\234\210", 0)
         << QApplication::translate("Seals_Statistics_Dialog", "\346\230\276\347\244\272\344\270\212\346\234\210", 0)
         << QApplication::translate("Seals_Statistics_Dialog", "\346\230\276\347\244\272\345\275\223\345\271\264", 0)
         << QApplication::translate("Seals_Statistics_Dialog", "\346\230\276\347\244\272\344\270\212\345\271\264", 0)
         << QApplication::translate("Seals_Statistics_Dialog", "\346\230\276\347\244\272\345\205\250\351\203\250", 0)
        );
        label->setText(QApplication::translate("Seals_Statistics_Dialog", "\344\273\216", 0));
        label_2->setText(QApplication::translate("Seals_Statistics_Dialog", "\345\210\260", 0));
        pushButton->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\237\245\350\257\242", 0));
        radioButton->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[\345\260\217\347\245\250]\347\273\237\350\256\241", 0));
        radioButton_2->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[\345\225\206\345\223\201]\347\273\237\350\256\241", 0));
        radioButton_3->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[\347\261\273\345\210\253]\347\273\237\350\256\241", 0));
        radioButton_4->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[\351\242\234\350\211\262]\347\273\237\350\256\241", 0));
        radioButton_5->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[\350\247\204\346\240\274]\347\273\237\350\256\241", 0));
        radioButton_6->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[\350\220\245\344\270\232\345\221\230]\347\273\237\350\256\241", 0));
        radioButton_7->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[\346\224\266\351\223\266\345\221\230]\347\273\237\350\256\241", 0));
        radioButton_8->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[VIP]\347\273\237\350\256\241", 0));
        radioButton_9->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[\344\273\230\346\254\276\346\226\271\345\274\217]\347\273\237\350\256\241", 0));
        radioButton_10->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\214\211[\345\223\201\347\211\214]\347\273\237\350\256\241", 0));
        toolButton->setText(QApplication::translate("Seals_Statistics_Dialog", "\351\224\200\345\224\256\346\230\216\347\273\206", 0));
        label_3->setText(QApplication::translate("Seals_Statistics_Dialog", "\346\265\201\346\260\264\350\264\246                    \345\244\207\346\263\250\357\274\232\345\234\250\350\241\250\346\240\274\344\270\212\347\202\271\345\217\263\351\224\256\357\274\214\345\260\206\346\225\260\346\215\256\345\257\274\345\207\272\345\210\260Excel\346\226\207\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class Seals_Statistics_Dialog: public Ui_Seals_Statistics_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEALS_STATISTICS_DIALOG_H

/********************************************************************************
** Form generated from reading UI file 'purchase_dialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASE_DIALOG_H
#define UI_PURCHASE_DIALOG_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QDateEdit>
#include <QGridLayout>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpacerItem>
#include <QSplitter>
#include <QTableView>
#include <QToolButton>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Purchase_Dialog
{
public:
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *New_pushButton;
    QPushButton *Open_pushButton;
    QPushButton *Save_pushButton;
    QPushButton *Check_pushButton;
    QPushButton *Show_pushButton;
    QPushButton *Delete_pushButton;
    QComboBox *Label_comboBox;
    QPushButton *Tutor_pushButton;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *Goods_Id_lineEdit;
    QPushButton *Find_ID_pushButton;
    QLabel *label_8;
    QLineEdit *Goods_Name_lineEdit;
    QPushButton *Find_Name_pushButton;
    QLabel *label_10;
    QComboBox *Goods_Type_comboBox;
    QLabel *label_13;
    QComboBox *Goods_Color_comboBox;
    QPushButton *Find_Color_pushButton;
    QLabel *label_14;
    QLineEdit *Goods_Num_lineEdit;
    QSplitter *splitter_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QComboBox *Goods_Categories_comboBox;
    QPushButton *Find_Categories_pushButton;
    QLabel *label_9;
    QComboBox *Goods_Brand_comboBox;
    QPushButton *Find_Brand_pushButton;
    QLabel *label_11;
    QLineEdit *Goods_Seal_Price_lineEdit;
    QLabel *label_12;
    QLineEdit *Goods_Bid_Price_lineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_15;
    QComboBox *Goods_Unit_comboBox;
    QPushButton *Find_Bid_pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Ok_Add_pushButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *Supplier_comboBox;
    QToolButton *Find_Supplier_toolButton;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *Remark_lineEdit;
    QTableView *tableView;

    void setupUi(QWidget *Purchase_Dialog)
    {
        if (Purchase_Dialog->objectName().isEmpty())
            Purchase_Dialog->setObjectName(QString::fromUtf8("Purchase_Dialog"));
        Purchase_Dialog->resize(708, 453);
        gridLayout_5 = new QGridLayout(Purchase_Dialog);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        New_pushButton = new QPushButton(Purchase_Dialog);
        New_pushButton->setObjectName(QString::fromUtf8("New_pushButton"));
        New_pushButton->setMinimumSize(QSize(80, 60));
        New_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add.png);"));

        horizontalLayout_2->addWidget(New_pushButton);

        Open_pushButton = new QPushButton(Purchase_Dialog);
        Open_pushButton->setObjectName(QString::fromUtf8("Open_pushButton"));
        Open_pushButton->setMinimumSize(QSize(80, 60));
        Open_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/open.png);"));

        horizontalLayout_2->addWidget(Open_pushButton);

        Save_pushButton = new QPushButton(Purchase_Dialog);
        Save_pushButton->setObjectName(QString::fromUtf8("Save_pushButton"));
        Save_pushButton->setMinimumSize(QSize(80, 60));
        Save_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/save.png);"));

        horizontalLayout_2->addWidget(Save_pushButton);

        Check_pushButton = new QPushButton(Purchase_Dialog);
        Check_pushButton->setObjectName(QString::fromUtf8("Check_pushButton"));
        Check_pushButton->setMinimumSize(QSize(80, 60));
        Check_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/ok.png);"));

        horizontalLayout_2->addWidget(Check_pushButton);

        Show_pushButton = new QPushButton(Purchase_Dialog);
        Show_pushButton->setObjectName(QString::fromUtf8("Show_pushButton"));
        Show_pushButton->setMinimumSize(QSize(80, 60));
        Show_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/showall.png);"));

        horizontalLayout_2->addWidget(Show_pushButton);

        Delete_pushButton = new QPushButton(Purchase_Dialog);
        Delete_pushButton->setObjectName(QString::fromUtf8("Delete_pushButton"));
        Delete_pushButton->setMinimumSize(QSize(80, 60));
        Delete_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/delete.png);"));

        horizontalLayout_2->addWidget(Delete_pushButton);

        Label_comboBox = new QComboBox(Purchase_Dialog);
        Label_comboBox->setObjectName(QString::fromUtf8("Label_comboBox"));
        Label_comboBox->setMinimumSize(QSize(80, 60));
        Label_comboBox->setStyleSheet(QString::fromUtf8("image: url(:/images/barcode.png);"));

        horizontalLayout_2->addWidget(Label_comboBox);

        Tutor_pushButton = new QPushButton(Purchase_Dialog);
        Tutor_pushButton->setObjectName(QString::fromUtf8("Tutor_pushButton"));
        Tutor_pushButton->setMinimumSize(QSize(80, 60));
        Tutor_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/document_xls.png);"));

        horizontalLayout_2->addWidget(Tutor_pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(Purchase_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        Goods_Id_lineEdit = new QLineEdit(groupBox);
        Goods_Id_lineEdit->setObjectName(QString::fromUtf8("Goods_Id_lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Goods_Id_lineEdit->sizePolicy().hasHeightForWidth());
        Goods_Id_lineEdit->setSizePolicy(sizePolicy1);
        Goods_Id_lineEdit->setMinimumSize(QSize(140, 25));

        gridLayout_2->addWidget(Goods_Id_lineEdit, 0, 1, 1, 1);

        Find_ID_pushButton = new QPushButton(groupBox);
        Find_ID_pushButton->setObjectName(QString::fromUtf8("Find_ID_pushButton"));

        gridLayout_2->addWidget(Find_ID_pushButton, 0, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        Goods_Name_lineEdit = new QLineEdit(groupBox);
        Goods_Name_lineEdit->setObjectName(QString::fromUtf8("Goods_Name_lineEdit"));
        sizePolicy1.setHeightForWidth(Goods_Name_lineEdit->sizePolicy().hasHeightForWidth());
        Goods_Name_lineEdit->setSizePolicy(sizePolicy1);
        Goods_Name_lineEdit->setMinimumSize(QSize(140, 25));

        gridLayout_2->addWidget(Goods_Name_lineEdit, 1, 1, 1, 1);

        Find_Name_pushButton = new QPushButton(groupBox);
        Find_Name_pushButton->setObjectName(QString::fromUtf8("Find_Name_pushButton"));

        gridLayout_2->addWidget(Find_Name_pushButton, 1, 2, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        Goods_Type_comboBox = new QComboBox(groupBox);
        Goods_Type_comboBox->setObjectName(QString::fromUtf8("Goods_Type_comboBox"));
        sizePolicy1.setHeightForWidth(Goods_Type_comboBox->sizePolicy().hasHeightForWidth());
        Goods_Type_comboBox->setSizePolicy(sizePolicy1);
        Goods_Type_comboBox->setMinimumSize(QSize(140, 25));

        gridLayout_2->addWidget(Goods_Type_comboBox, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 3, 0, 1, 1);

        Goods_Color_comboBox = new QComboBox(groupBox);
        Goods_Color_comboBox->setObjectName(QString::fromUtf8("Goods_Color_comboBox"));
        sizePolicy1.setHeightForWidth(Goods_Color_comboBox->sizePolicy().hasHeightForWidth());
        Goods_Color_comboBox->setSizePolicy(sizePolicy1);
        Goods_Color_comboBox->setMinimumSize(QSize(140, 0));

        gridLayout_2->addWidget(Goods_Color_comboBox, 3, 1, 1, 1);

        Find_Color_pushButton = new QPushButton(groupBox);
        Find_Color_pushButton->setObjectName(QString::fromUtf8("Find_Color_pushButton"));

        gridLayout_2->addWidget(Find_Color_pushButton, 3, 2, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 4, 0, 1, 1);

        Goods_Num_lineEdit = new QLineEdit(groupBox);
        Goods_Num_lineEdit->setObjectName(QString::fromUtf8("Goods_Num_lineEdit"));
        sizePolicy1.setHeightForWidth(Goods_Num_lineEdit->sizePolicy().hasHeightForWidth());
        Goods_Num_lineEdit->setSizePolicy(sizePolicy1);
        Goods_Num_lineEdit->setMinimumSize(QSize(140, 25));

        gridLayout_2->addWidget(Goods_Num_lineEdit, 4, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 2, 1);

        splitter_3 = new QSplitter(groupBox);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        Goods_Categories_comboBox = new QComboBox(layoutWidget);
        Goods_Categories_comboBox->setObjectName(QString::fromUtf8("Goods_Categories_comboBox"));
        Goods_Categories_comboBox->setMinimumSize(QSize(62, 25));

        gridLayout->addWidget(Goods_Categories_comboBox, 0, 1, 1, 1);

        Find_Categories_pushButton = new QPushButton(layoutWidget);
        Find_Categories_pushButton->setObjectName(QString::fromUtf8("Find_Categories_pushButton"));

        gridLayout->addWidget(Find_Categories_pushButton, 0, 2, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        Goods_Brand_comboBox = new QComboBox(layoutWidget);
        Goods_Brand_comboBox->setObjectName(QString::fromUtf8("Goods_Brand_comboBox"));
        Goods_Brand_comboBox->setMinimumSize(QSize(62, 25));

        gridLayout->addWidget(Goods_Brand_comboBox, 1, 1, 1, 1);

        Find_Brand_pushButton = new QPushButton(layoutWidget);
        Find_Brand_pushButton->setObjectName(QString::fromUtf8("Find_Brand_pushButton"));

        gridLayout->addWidget(Find_Brand_pushButton, 1, 2, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        Goods_Seal_Price_lineEdit = new QLineEdit(layoutWidget);
        Goods_Seal_Price_lineEdit->setObjectName(QString::fromUtf8("Goods_Seal_Price_lineEdit"));
        Goods_Seal_Price_lineEdit->setMinimumSize(QSize(140, 25));

        gridLayout->addWidget(Goods_Seal_Price_lineEdit, 2, 1, 1, 2);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        Goods_Bid_Price_lineEdit = new QLineEdit(layoutWidget);
        Goods_Bid_Price_lineEdit->setObjectName(QString::fromUtf8("Goods_Bid_Price_lineEdit"));
        Goods_Bid_Price_lineEdit->setMinimumSize(QSize(140, 25));

        gridLayout->addWidget(Goods_Bid_Price_lineEdit, 3, 1, 1, 2);

        splitter_3->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout->addWidget(label_15);

        Goods_Unit_comboBox = new QComboBox(layoutWidget1);
        Goods_Unit_comboBox->setObjectName(QString::fromUtf8("Goods_Unit_comboBox"));
        Goods_Unit_comboBox->setMinimumSize(QSize(50, 25));

        horizontalLayout->addWidget(Goods_Unit_comboBox);

        Find_Bid_pushButton = new QPushButton(layoutWidget1);
        Find_Bid_pushButton->setObjectName(QString::fromUtf8("Find_Bid_pushButton"));

        horizontalLayout->addWidget(Find_Bid_pushButton);

        splitter_3->addWidget(layoutWidget1);

        gridLayout_3->addWidget(splitter_3, 0, 2, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        Ok_Add_pushButton = new QPushButton(groupBox);
        Ok_Add_pushButton->setObjectName(QString::fromUtf8("Ok_Add_pushButton"));
        sizePolicy1.setHeightForWidth(Ok_Add_pushButton->sizePolicy().hasHeightForWidth());
        Ok_Add_pushButton->setSizePolicy(sizePolicy1);
        Ok_Add_pushButton->setMinimumSize(QSize(80, 45));

        gridLayout_3->addWidget(Ok_Add_pushButton, 1, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(Purchase_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_3->addWidget(label);

        Supplier_comboBox = new QComboBox(Purchase_Dialog);
        Supplier_comboBox->setObjectName(QString::fromUtf8("Supplier_comboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Supplier_comboBox->sizePolicy().hasHeightForWidth());
        Supplier_comboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(Supplier_comboBox);

        Find_Supplier_toolButton = new QToolButton(Purchase_Dialog);
        Find_Supplier_toolButton->setObjectName(QString::fromUtf8("Find_Supplier_toolButton"));
        sizePolicy1.setHeightForWidth(Find_Supplier_toolButton->sizePolicy().hasHeightForWidth());
        Find_Supplier_toolButton->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(Find_Supplier_toolButton);

        label_2 = new QLabel(Purchase_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_3->addWidget(label_2);

        dateEdit = new QDateEdit(Purchase_Dialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);

        label_3 = new QLabel(Purchase_Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(Purchase_Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(Purchase_Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background:transparent"));

        horizontalLayout_3->addWidget(label_5);

        Remark_lineEdit = new QLineEdit(Purchase_Dialog);
        Remark_lineEdit->setObjectName(QString::fromUtf8("Remark_lineEdit"));

        horizontalLayout_3->addWidget(Remark_lineEdit);


        gridLayout_5->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        tableView = new QTableView(Purchase_Dialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_5->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(Purchase_Dialog);

        QMetaObject::connectSlotsByName(Purchase_Dialog);
    } // setupUi

    void retranslateUi(QWidget *Purchase_Dialog)
    {
        Purchase_Dialog->setWindowTitle(QApplication::translate("Purchase_Dialog", "Form", 0));
        New_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\226\260\345\215\225", 0));
        Open_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\211\223\345\274\200", 0));
        Save_pushButton->setText(QApplication::translate("Purchase_Dialog", "\344\277\235\345\255\230", 0));
        Check_pushButton->setText(QApplication::translate("Purchase_Dialog", "\345\256\241\346\240\270", 0));
        Show_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\230\276\347\244\272", 0));
        Delete_pushButton->setText(QApplication::translate("Purchase_Dialog", "\345\210\240\351\231\244", 0));
        Label_comboBox->clear();
        Label_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Purchase_Dialog", "\346\211\223\345\215\260\345\215\225\345\223\201\346\240\207\347\255\276", 0)
         << QApplication::translate("Purchase_Dialog", "\346\211\223\345\215\260\346\211\200\346\234\211\345\225\206\345\223\201\346\240\207\347\255\276", 0)
         << QApplication::translate("Purchase_Dialog", "\350\256\276\350\256\241\346\235\241\347\240\201\346\240\207\347\255\276", 0)
        );
        Tutor_pushButton->setText(QApplication::translate("Purchase_Dialog", "\345\257\274\345\205\245", 0));
        groupBox->setTitle(QApplication::translate("Purchase_Dialog", "\345\275\225\345\205\245\345\225\206\345\223\201\346\225\260\346\215\256", 0));
        label_6->setText(QApplication::translate("Purchase_Dialog", "\345\225\206\345\223\201\346\235\241\347\240\201\357\274\232", 0));
        Find_ID_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\237\245\346\211\276", 0));
        label_8->setText(QApplication::translate("Purchase_Dialog", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        Find_Name_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\237\245\346\211\276", 0));
        label_10->setText(QApplication::translate("Purchase_Dialog", "\350\247\204\346\240\274\345\236\213\345\217\267\357\274\232", 0));
        Goods_Type_comboBox->clear();
        Goods_Type_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Purchase_Dialog", "1x1", 0)
         << QApplication::translate("Purchase_Dialog", "1x2", 0)
        );
        label_13->setText(QApplication::translate("Purchase_Dialog", "\351\242\234\350\211\262\357\274\232", 0));
        Find_Color_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\237\245\346\211\276", 0));
        label_14->setText(QApplication::translate("Purchase_Dialog", "\350\277\233\350\264\247\346\225\260\351\207\217:", 0));
        label_7->setText(QApplication::translate("Purchase_Dialog", "\347\261\273\345\210\253\357\274\232", 0));
        Goods_Categories_comboBox->clear();
        Goods_Categories_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Purchase_Dialog", "\347\203\237", 0)
         << QApplication::translate("Purchase_Dialog", "\351\205\222", 0)
        );
        Find_Categories_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\237\245\346\211\276", 0));
        label_9->setText(QApplication::translate("Purchase_Dialog", "\345\223\201\347\211\214\357\274\232", 0));
        Goods_Brand_comboBox->clear();
        Goods_Brand_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Purchase_Dialog", "\347\272\242\345\241\224\345\261\261", 0)
         << QApplication::translate("Purchase_Dialog", "\344\272\221\347\203\237", 0)
         << QApplication::translate("Purchase_Dialog", "\351\273\221\345\205\260\345\267\236", 0)
         << QApplication::translate("Purchase_Dialog", "\344\270\255\345\215\216", 0)
         << QApplication::translate("Purchase_Dialog", "\350\214\205\345\217\260", 0)
         << QApplication::translate("Purchase_Dialog", "\346\261\276\351\205\222", 0)
         << QApplication::translate("Purchase_Dialog", "\347\253\271\345\217\266\351\235\222", 0)
        );
        Find_Brand_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\237\245\346\211\276", 0));
        label_11->setText(QApplication::translate("Purchase_Dialog", "\345\224\256\344\273\267\357\274\232", 0));
        label_12->setText(QApplication::translate("Purchase_Dialog", "\350\277\233\344\273\267\357\274\232", 0));
        label_15->setText(QApplication::translate("Purchase_Dialog", "\345\215\225\344\275\215\357\274\232", 0));
        Goods_Unit_comboBox->clear();
        Goods_Unit_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Purchase_Dialog", "\344\270\252", 0)
         << QApplication::translate("Purchase_Dialog", "\346\211\223", 0)
         << QApplication::translate("Purchase_Dialog", "\347\223\266", 0)
         << QApplication::translate("Purchase_Dialog", "\345\217\260", 0)
         << QApplication::translate("Purchase_Dialog", "\346\241\266", 0)
         << QApplication::translate("Purchase_Dialog", "\345\214\205", 0)
         << QApplication::translate("Purchase_Dialog", "\347\256\261", 0)
         << QApplication::translate("Purchase_Dialog", "\346\235\241", 0)
         << QApplication::translate("Purchase_Dialog", "\346\215\206", 0)
        );
        Find_Bid_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\237\245\346\211\276", 0));
        Ok_Add_pushButton->setText(QApplication::translate("Purchase_Dialog", "\346\267\273\345\212\240", 0));
        label->setText(QApplication::translate("Purchase_Dialog", "\344\276\233\350\264\247\345\225\206\357\274\232", 0));
        Find_Supplier_toolButton->setText(QApplication::translate("Purchase_Dialog", "\346\237\245\346\211\276", 0));
        label_2->setText(QApplication::translate("Purchase_Dialog", "\345\215\225\346\215\256\346\227\245\346\234\237\357\274\232", 0));
        label_3->setText(QApplication::translate("Purchase_Dialog", "\350\277\233\350\264\247\345\215\225\345\217\267\357\274\232", 0));
        label_4->setText(QApplication::translate("Purchase_Dialog", "\344\277\235\345\255\230\346\227\266\350\207\252\345\212\250\347\224\237\346\210\220", 0));
        label_5->setText(QApplication::translate("Purchase_Dialog", "\345\244\207\346\263\250\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Purchase_Dialog: public Ui_Purchase_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASE_DIALOG_H

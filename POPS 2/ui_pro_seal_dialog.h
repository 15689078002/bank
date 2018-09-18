/********************************************************************************
** Form generated from reading UI file 'pro_seal_dialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRO_SEAL_DIALOG_H
#define UI_PRO_SEAL_DIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCheckBox>
#include <QComboBox>
#include <QDateEdit>
#include <QFrame>
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
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pro_Seal_Dialog
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *New_pushButton;
    QPushButton *Open_pushButton;
    QPushButton *Again_pushButton;
    QPushButton *Floppy_pushButton;
    QPushButton *Cancel_Floppy_pushButton;
    QPushButton *Modify_pushButton;
    QPushButton *Cancel_pushButton;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *Price_Sum_label;
    QLabel *Any_price_label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *Find_Id_pushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QSpacerItem *horizontalSpacer;
    QLineEdit *Find_Goods_Id_lineEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *Vip_Id_lineEdit;
    QPushButton *Find_pushButton;
    QFrame *line;
    QLabel *label_5;
    QLineEdit *Remark_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *Employee_comboBox;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_5;
    QTableView *Goods_tableView;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Pro_Seal_Dialog)
    {
        if (Pro_Seal_Dialog->objectName().isEmpty())
            Pro_Seal_Dialog->setObjectName(QString::fromUtf8("Pro_Seal_Dialog"));
        Pro_Seal_Dialog->resize(887, 429);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Pro_Seal_Dialog->sizePolicy().hasHeightForWidth());
        Pro_Seal_Dialog->setSizePolicy(sizePolicy);
        Pro_Seal_Dialog->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(Pro_Seal_Dialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        New_pushButton = new QPushButton(Pro_Seal_Dialog);
        New_pushButton->setObjectName(QString::fromUtf8("New_pushButton"));
        New_pushButton->setMinimumSize(QSize(80, 60));
        New_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add.png);"));

        horizontalLayout_2->addWidget(New_pushButton);

        Open_pushButton = new QPushButton(Pro_Seal_Dialog);
        Open_pushButton->setObjectName(QString::fromUtf8("Open_pushButton"));
        Open_pushButton->setMinimumSize(QSize(80, 60));
        Open_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/open.png);"));

        horizontalLayout_2->addWidget(Open_pushButton);

        Again_pushButton = new QPushButton(Pro_Seal_Dialog);
        Again_pushButton->setObjectName(QString::fromUtf8("Again_pushButton"));
        Again_pushButton->setMinimumSize(QSize(80, 60));
        Again_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/print.png);"));

        horizontalLayout_2->addWidget(Again_pushButton);

        Floppy_pushButton = new QPushButton(Pro_Seal_Dialog);
        Floppy_pushButton->setObjectName(QString::fromUtf8("Floppy_pushButton"));
        Floppy_pushButton->setMinimumSize(QSize(80, 60));
        Floppy_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/lock.png);"));

        horizontalLayout_2->addWidget(Floppy_pushButton);

        Cancel_Floppy_pushButton = new QPushButton(Pro_Seal_Dialog);
        Cancel_Floppy_pushButton->setObjectName(QString::fromUtf8("Cancel_Floppy_pushButton"));
        Cancel_Floppy_pushButton->setMinimumSize(QSize(80, 60));
        Cancel_Floppy_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/key.png);"));

        horizontalLayout_2->addWidget(Cancel_Floppy_pushButton);

        Modify_pushButton = new QPushButton(Pro_Seal_Dialog);
        Modify_pushButton->setObjectName(QString::fromUtf8("Modify_pushButton"));
        Modify_pushButton->setMinimumSize(QSize(80, 60));
        Modify_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/modify.png);"));

        horizontalLayout_2->addWidget(Modify_pushButton);

        Cancel_pushButton = new QPushButton(Pro_Seal_Dialog);
        Cancel_pushButton->setObjectName(QString::fromUtf8("Cancel_pushButton"));
        Cancel_pushButton->setMinimumSize(QSize(80, 60));
        Cancel_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/delete.png);"));

        horizontalLayout_2->addWidget(Cancel_pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(8);
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(-1, 10, 2, 35);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Price_Sum_label = new QLabel(Pro_Seal_Dialog);
        Price_Sum_label->setObjectName(QString::fromUtf8("Price_Sum_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Price_Sum_label->sizePolicy().hasHeightForWidth());
        Price_Sum_label->setSizePolicy(sizePolicy1);
        Price_Sum_label->setMinimumSize(QSize(295, 63));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        Price_Sum_label->setFont(font);
        Price_Sum_label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Price_Sum_label);

        Any_price_label = new QLabel(Pro_Seal_Dialog);
        Any_price_label->setObjectName(QString::fromUtf8("Any_price_label"));
        Any_price_label->setMinimumSize(QSize(0, 50));
        Any_price_label->setFont(font);
        Any_price_label->setStyleSheet(QString::fromUtf8("background:transparent"));

        verticalLayout->addWidget(Any_price_label);


        gridLayout_3->addLayout(verticalLayout, 0, 3, 1, 1);

        groupBox_2 = new QGroupBox(Pro_Seal_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Find_Id_pushButton = new QPushButton(groupBox_2);
        Find_Id_pushButton->setObjectName(QString::fromUtf8("Find_Id_pushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Find_Id_pushButton->sizePolicy().hasHeightForWidth());
        Find_Id_pushButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(Find_Id_pushButton, 0, 3, 1, 1);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy3.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_6, 0, 4, 1, 1);

        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy3.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_9, 1, 0, 1, 4);

        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(pushButton_10, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(25, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);

        Find_Goods_Id_lineEdit = new QLineEdit(groupBox_2);
        Find_Goods_Id_lineEdit->setObjectName(QString::fromUtf8("Find_Goods_Id_lineEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Find_Goods_Id_lineEdit->sizePolicy().hasHeightForWidth());
        Find_Goods_Id_lineEdit->setSizePolicy(sizePolicy5);
        Find_Goods_Id_lineEdit->setMinimumSize(QSize(228, 44));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        Find_Goods_Id_lineEdit->setFont(font1);

        gridLayout->addWidget(Find_Goods_Id_lineEdit, 0, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(Pro_Seal_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background:transparent"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        checkBox = new QCheckBox(splitter);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy3.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy3);
        splitter->addWidget(checkBox);
        checkBox_2 = new QCheckBox(splitter);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy3.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy3);
        splitter->addWidget(checkBox_2);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(280, 40, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Pro_Seal_Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);

        horizontalLayout_4->addWidget(label_4);

        Vip_Id_lineEdit = new QLineEdit(Pro_Seal_Dialog);
        Vip_Id_lineEdit->setObjectName(QString::fromUtf8("Vip_Id_lineEdit"));
        sizePolicy4.setHeightForWidth(Vip_Id_lineEdit->sizePolicy().hasHeightForWidth());
        Vip_Id_lineEdit->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(Vip_Id_lineEdit);

        Find_pushButton = new QPushButton(Pro_Seal_Dialog);
        Find_pushButton->setObjectName(QString::fromUtf8("Find_pushButton"));
        sizePolicy4.setHeightForWidth(Find_pushButton->sizePolicy().hasHeightForWidth());
        Find_pushButton->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(Find_pushButton);

        line = new QFrame(Pro_Seal_Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy6);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        label_5 = new QLabel(Pro_Seal_Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setFont(font2);

        horizontalLayout_4->addWidget(label_5);

        Remark_lineEdit = new QLineEdit(Pro_Seal_Dialog);
        Remark_lineEdit->setObjectName(QString::fromUtf8("Remark_lineEdit"));
        sizePolicy.setHeightForWidth(Remark_lineEdit->sizePolicy().hasHeightForWidth());
        Remark_lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(Remark_lineEdit);


        gridLayout_4->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(Pro_Seal_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        horizontalLayout_3->addWidget(label);

        Employee_comboBox = new QComboBox(Pro_Seal_Dialog);
        Employee_comboBox->setObjectName(QString::fromUtf8("Employee_comboBox"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        Employee_comboBox->setFont(font3);

        horizontalLayout_3->addWidget(Employee_comboBox);

        label_2 = new QLabel(Pro_Seal_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        horizontalLayout_3->addWidget(label_2);

        dateEdit = new QDateEdit(Pro_Seal_Dialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);

        label_3 = new QLabel(Pro_Seal_Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        horizontalLayout_3->addWidget(label_3);

        line_2 = new QFrame(Pro_Seal_Dialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        Goods_tableView = new QTableView(Pro_Seal_Dialog);
        Goods_tableView->setObjectName(QString::fromUtf8("Goods_tableView"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(100);
        sizePolicy7.setHeightForWidth(Goods_tableView->sizePolicy().hasHeightForWidth());
        Goods_tableView->setSizePolicy(sizePolicy7);

        gridLayout_4->addWidget(Goods_tableView, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_4->addItem(verticalSpacer, 4, 0, 1, 1);

        Goods_tableView->raise();
        QWidget::setTabOrder(Find_Goods_Id_lineEdit, Find_Id_pushButton);
        QWidget::setTabOrder(Find_Id_pushButton, New_pushButton);
        QWidget::setTabOrder(New_pushButton, Open_pushButton);
        QWidget::setTabOrder(Open_pushButton, Again_pushButton);
        QWidget::setTabOrder(Again_pushButton, Floppy_pushButton);
        QWidget::setTabOrder(Floppy_pushButton, Modify_pushButton);
        QWidget::setTabOrder(Modify_pushButton, Cancel_Floppy_pushButton);
        QWidget::setTabOrder(Cancel_Floppy_pushButton, Cancel_pushButton);
        QWidget::setTabOrder(Cancel_pushButton, Employee_comboBox);
        QWidget::setTabOrder(Employee_comboBox, Vip_Id_lineEdit);
        QWidget::setTabOrder(Vip_Id_lineEdit, Find_pushButton);
        QWidget::setTabOrder(Find_pushButton, Remark_lineEdit);
        QWidget::setTabOrder(Remark_lineEdit, pushButton_6);
        QWidget::setTabOrder(pushButton_6, dateEdit);
        QWidget::setTabOrder(dateEdit, Goods_tableView);
        QWidget::setTabOrder(Goods_tableView, checkBox);
        QWidget::setTabOrder(checkBox, checkBox_2);
        QWidget::setTabOrder(checkBox_2, pushButton_9);

        retranslateUi(Pro_Seal_Dialog);

        QMetaObject::connectSlotsByName(Pro_Seal_Dialog);
    } // setupUi

    void retranslateUi(QWidget *Pro_Seal_Dialog)
    {
        Pro_Seal_Dialog->setWindowTitle(QApplication::translate("Pro_Seal_Dialog", "Form", 0));
        New_pushButton->setText(QString());
        Open_pushButton->setText(QString());
        Again_pushButton->setText(QString());
        Floppy_pushButton->setText(QString());
        Cancel_Floppy_pushButton->setText(QString());
        Modify_pushButton->setText(QString());
        Cancel_pushButton->setText(QString());
        Price_Sum_label->setText(QApplication::translate("Pro_Seal_Dialog", "\345\224\256\344\273\267\357\274\232\357\277\245 0.00", 0));
        Any_price_label->setText(QApplication::translate("Pro_Seal_Dialog", "\346\225\260\351\207\217\357\274\2320/\345\216\237\344\273\267\357\274\2320.00", 0));
        groupBox_2->setTitle(QApplication::translate("Pro_Seal_Dialog", "\345\234\250\344\270\213\346\241\206\344\270\255\350\276\223\345\205\245\342\200\234\345\225\206\345\223\201\346\235\241\345\275\242\347\240\201\342\200\235\357\274\214\346\214\211\342\200\234\345\233\236\350\275\246\351\224\256\342\200\235\347\241\256\350\256\244", 0));
        Find_Id_pushButton->setText(QApplication::translate("Pro_Seal_Dialog", "\346\237\245\346\211\276", 0));
        pushButton_6->setText(QApplication::translate("Pro_Seal_Dialog", "F5\347\273\223\347\256\227", 0));
        pushButton_9->setText(QApplication::translate("Pro_Seal_Dialog", "\350\260\203\346\225\264\346\225\264\345\215\225\351\207\221\351\242\235", 0));
        pushButton_10->setText(QApplication::translate("Pro_Seal_Dialog", "\345\217\226\346\266\210\350\260\203\346\225\264", 0));
        groupBox->setTitle(QApplication::translate("Pro_Seal_Dialog", "\345\225\206\345\223\201\351\224\200\345\224\256\346\226\271\346\241\210", 0));
        checkBox->setText(QApplication::translate("Pro_Seal_Dialog", "\345\220\257\347\224\250\346\225\264\345\215\225\346\212\230\346\211\243", 0));
        checkBox_2->setText(QApplication::translate("Pro_Seal_Dialog", "\345\220\257\347\224\250\346\273\241\351\242\235\350\277\224\351\242\235", 0));
        label_4->setText(QApplication::translate("Pro_Seal_Dialog", "\344\274\232\345\221\230\345\217\267\357\274\232", 0));
        Find_pushButton->setText(QApplication::translate("Pro_Seal_Dialog", "\346\237\245\346\211\276", 0));
        label_5->setText(QApplication::translate("Pro_Seal_Dialog", "\345\244\207\346\263\250\357\274\232", 0));
        label->setText(QApplication::translate("Pro_Seal_Dialog", "\350\220\245 \344\270\232 \345\221\230\357\274\232", 0));
        label_2->setText(QApplication::translate("Pro_Seal_Dialog", "\351\224\200\345\224\256\346\227\245\346\234\237\357\274\232", 0));
        label_3->setText(QApplication::translate("Pro_Seal_Dialog", "\351\224\200\345\224\256\345\215\225\345\217\267\357\274\232", 0));
#ifndef QT_NO_WHATSTHIS
        line_2->setWhatsThis(QApplication::translate("Pro_Seal_Dialog", "<html><head/><body><p>\346\217\220\344\272\244\345\220\216\350\207\252\345\212\250\347\224\237\346\210\220</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class Pro_Seal_Dialog: public Ui_Pro_Seal_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRO_SEAL_DIALOG_H

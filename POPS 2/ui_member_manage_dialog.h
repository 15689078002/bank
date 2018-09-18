/********************************************************************************
** Form generated from reading UI file 'member_manage_dialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBER_MANAGE_DIALOG_H
#define UI_MEMBER_MANAGE_DIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QFormLayout>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpacerItem>
#include <QTabWidget>
#include <QTableView>
#include <QTableWidget>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Member_Manage_Dialog
{
public:
    QFormLayout *formLayout;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *Show_All_pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Add_pushButton;
    QPushButton *Modify_pushButton;
    QPushButton *Sort_pushButton;
    QPushButton *Delete_pushButton;
    QPushButton *Class_pushButton;
    QPushButton *Tutor_pushButton;
    QPushButton *Birthday_pushButton;
    QPushButton *Adjust_pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *Choose_comboBox;
    QLineEdit *FindlineEdit;
    QPushButton *Find_pushButton;
    QPushButton *Save_pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QTabWidget *VIP_Adjust_tabWidget;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *VIP_Goods_tableWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *VIP_Grade_tableWidget;
    QTableView *tableView;

    void setupUi(QWidget *Member_Manage_Dialog)
    {
        if (Member_Manage_Dialog->objectName().isEmpty())
            Member_Manage_Dialog->setObjectName(QString::fromUtf8("Member_Manage_Dialog"));
        Member_Manage_Dialog->resize(796, 587);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(30);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(Member_Manage_Dialog->sizePolicy().hasHeightForWidth());
        Member_Manage_Dialog->setSizePolicy(sizePolicy);
        Member_Manage_Dialog->setMinimumSize(QSize(0, 10));
        formLayout = new QFormLayout(Member_Manage_Dialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        Show_All_pushButton = new QPushButton(Member_Manage_Dialog);
        Show_All_pushButton->setObjectName(QString::fromUtf8("Show_All_pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Show_All_pushButton->sizePolicy().hasHeightForWidth());
        Show_All_pushButton->setSizePolicy(sizePolicy1);
        Show_All_pushButton->setMinimumSize(QSize(80, 60));
        Show_All_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/showall.png);"));

        gridLayout->addWidget(Show_All_pushButton, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 10, 1, 1);

        Add_pushButton = new QPushButton(Member_Manage_Dialog);
        Add_pushButton->setObjectName(QString::fromUtf8("Add_pushButton"));
        sizePolicy1.setHeightForWidth(Add_pushButton->sizePolicy().hasHeightForWidth());
        Add_pushButton->setSizePolicy(sizePolicy1);
        Add_pushButton->setMinimumSize(QSize(80, 60));
        Add_pushButton->setMaximumSize(QSize(80, 60));
        Add_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add.png);"));

        gridLayout->addWidget(Add_pushButton, 0, 0, 1, 1);

        Modify_pushButton = new QPushButton(Member_Manage_Dialog);
        Modify_pushButton->setObjectName(QString::fromUtf8("Modify_pushButton"));
        sizePolicy1.setHeightForWidth(Modify_pushButton->sizePolicy().hasHeightForWidth());
        Modify_pushButton->setSizePolicy(sizePolicy1);
        Modify_pushButton->setMinimumSize(QSize(80, 60));
        Modify_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/modify.png);"));

        gridLayout->addWidget(Modify_pushButton, 0, 1, 1, 1);

        Sort_pushButton = new QPushButton(Member_Manage_Dialog);
        Sort_pushButton->setObjectName(QString::fromUtf8("Sort_pushButton"));
        sizePolicy1.setHeightForWidth(Sort_pushButton->sizePolicy().hasHeightForWidth());
        Sort_pushButton->setSizePolicy(sizePolicy1);
        Sort_pushButton->setMinimumSize(QSize(80, 60));
        Sort_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/sort.png);"));

        gridLayout->addWidget(Sort_pushButton, 0, 3, 1, 1);

        Delete_pushButton = new QPushButton(Member_Manage_Dialog);
        Delete_pushButton->setObjectName(QString::fromUtf8("Delete_pushButton"));
        sizePolicy1.setHeightForWidth(Delete_pushButton->sizePolicy().hasHeightForWidth());
        Delete_pushButton->setSizePolicy(sizePolicy1);
        Delete_pushButton->setMinimumSize(QSize(80, 60));
        Delete_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/delete.png);"));

        gridLayout->addWidget(Delete_pushButton, 0, 2, 1, 1);

        Class_pushButton = new QPushButton(Member_Manage_Dialog);
        Class_pushButton->setObjectName(QString::fromUtf8("Class_pushButton"));
        sizePolicy1.setHeightForWidth(Class_pushButton->sizePolicy().hasHeightForWidth());
        Class_pushButton->setSizePolicy(sizePolicy1);
        Class_pushButton->setMinimumSize(QSize(80, 60));
        Class_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/vip.png);"));

        gridLayout->addWidget(Class_pushButton, 0, 8, 1, 1);

        Tutor_pushButton = new QPushButton(Member_Manage_Dialog);
        Tutor_pushButton->setObjectName(QString::fromUtf8("Tutor_pushButton"));
        sizePolicy1.setHeightForWidth(Tutor_pushButton->sizePolicy().hasHeightForWidth());
        Tutor_pushButton->setSizePolicy(sizePolicy1);
        Tutor_pushButton->setMinimumSize(QSize(80, 60));
        Tutor_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/document_xls.png);"));

        gridLayout->addWidget(Tutor_pushButton, 0, 9, 1, 1);

        Birthday_pushButton = new QPushButton(Member_Manage_Dialog);
        Birthday_pushButton->setObjectName(QString::fromUtf8("Birthday_pushButton"));
        sizePolicy1.setHeightForWidth(Birthday_pushButton->sizePolicy().hasHeightForWidth());
        Birthday_pushButton->setSizePolicy(sizePolicy1);
        Birthday_pushButton->setMinimumSize(QSize(80, 60));
        Birthday_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/birthday.png);"));

        gridLayout->addWidget(Birthday_pushButton, 0, 7, 1, 1);

        Adjust_pushButton = new QPushButton(Member_Manage_Dialog);
        Adjust_pushButton->setObjectName(QString::fromUtf8("Adjust_pushButton"));
        sizePolicy1.setHeightForWidth(Adjust_pushButton->sizePolicy().hasHeightForWidth());
        Adjust_pushButton->setSizePolicy(sizePolicy1);
        Adjust_pushButton->setMinimumSize(QSize(80, 60));
        Adjust_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/Integraladjustment.png);"));

        gridLayout->addWidget(Adjust_pushButton, 0, 6, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Member_Manage_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        Choose_comboBox = new QComboBox(Member_Manage_Dialog);
        Choose_comboBox->setObjectName(QString::fromUtf8("Choose_comboBox"));
        sizePolicy1.setHeightForWidth(Choose_comboBox->sizePolicy().hasHeightForWidth());
        Choose_comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Choose_comboBox);

        FindlineEdit = new QLineEdit(Member_Manage_Dialog);
        FindlineEdit->setObjectName(QString::fromUtf8("FindlineEdit"));
        sizePolicy1.setHeightForWidth(FindlineEdit->sizePolicy().hasHeightForWidth());
        FindlineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(FindlineEdit);

        Find_pushButton = new QPushButton(Member_Manage_Dialog);
        Find_pushButton->setObjectName(QString::fromUtf8("Find_pushButton"));
        sizePolicy1.setHeightForWidth(Find_pushButton->sizePolicy().hasHeightForWidth());
        Find_pushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Find_pushButton);

        Save_pushButton = new QPushButton(Member_Manage_Dialog);
        Save_pushButton->setObjectName(QString::fromUtf8("Save_pushButton"));
        sizePolicy1.setHeightForWidth(Save_pushButton->sizePolicy().hasHeightForWidth());
        Save_pushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Save_pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        VIP_Adjust_tabWidget = new QTabWidget(Member_Manage_Dialog);
        VIP_Adjust_tabWidget->setObjectName(QString::fromUtf8("VIP_Adjust_tabWidget"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        VIP_Goods_tableWidget = new QTableWidget(tab_2);
        VIP_Goods_tableWidget->setObjectName(QString::fromUtf8("VIP_Goods_tableWidget"));

        horizontalLayout_3->addWidget(VIP_Goods_tableWidget);

        VIP_Adjust_tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        VIP_Grade_tableWidget = new QTableWidget(tab);
        VIP_Grade_tableWidget->setObjectName(QString::fromUtf8("VIP_Grade_tableWidget"));

        horizontalLayout_2->addWidget(VIP_Grade_tableWidget);

        VIP_Adjust_tabWidget->addTab(tab, QString());

        gridLayout_2->addWidget(VIP_Adjust_tabWidget, 4, 0, 1, 1);

        tableView = new QTableView(Member_Manage_Dialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy2);
        tableView->setMinimumSize(QSize(737, 300));

        gridLayout_2->addWidget(tableView, 3, 0, 1, 1);


        formLayout->setLayout(0, QFormLayout::SpanningRole, gridLayout_2);


        retranslateUi(Member_Manage_Dialog);

        VIP_Adjust_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Member_Manage_Dialog);
    } // setupUi

    void retranslateUi(QWidget *Member_Manage_Dialog)
    {
        Member_Manage_Dialog->setWindowTitle(QApplication::translate("Member_Manage_Dialog", "Form", 0));
        Show_All_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "\345\205\250\351\203\250\346\230\276\347\244\272", 0));
        Add_pushButton->setText(QString());
        Modify_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "\344\277\256\346\224\271", 0));
        Sort_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "\346\216\222\345\272\217", 0));
        Delete_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "\345\210\240\351\231\244",0));
        Class_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "VIP\347\261\273\345\210\253", 0));
        Tutor_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "\345\257\274\345\205\245VIP", 0));
        Birthday_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "\347\224\237\346\227\245\346\217\220\351\206\222", 0));
        Adjust_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "\347\247\257\345\210\206\350\260\203\346\225\264", 0));
        label->setText(QApplication::translate("Member_Manage_Dialog", "\347\255\233\351\200\211\351\241\271\347\233\256\357\274\232", 0));
        Choose_comboBox->clear();
        Choose_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Member_Manage_Dialog", "VIP\345\215\241\345\217\267", 0)
         << QApplication::translate("Member_Manage_Dialog", "VIP\345\247\223\345\220\215", 0)
         << QApplication::translate("Member_Manage_Dialog", "VIP\347\261\273\345\210\253", 0)
         << QApplication::translate("Member_Manage_Dialog", "\346\211\213\346\234\272", 0)
         << QApplication::translate("Member_Manage_Dialog", "\347\224\265\345\255\220\351\202\256\344\273\266", 0)
         << QApplication::translate("Member_Manage_Dialog", "\345\207\272\347\224\237\346\227\245\346\234\237(\344\273\213\344\272\216)", 0)
         << QApplication::translate("Member_Manage_Dialog", "\345\274\200\345\215\241\346\227\245\346\234\237(\344\273\213\344\272\216)", 0)
         << QApplication::translate("Member_Manage_Dialog", "\346\234\200\350\277\221\346\266\210\350\264\271(\344\273\213\344\272\216)", 0)
        );
        Find_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "\346\237\245\350\257\242", 0));
        Save_pushButton->setText(QApplication::translate("Member_Manage_Dialog", "\344\277\235\345\255\230", 0));
        VIP_Adjust_tabWidget->setTabText(VIP_Adjust_tabWidget->indexOf(tab_2), QApplication::translate("Member_Manage_Dialog", "VIP\345\225\206\345\223\201\346\266\210\350\264\271\346\230\216\347\273\206", 0));
        VIP_Adjust_tabWidget->setTabText(VIP_Adjust_tabWidget->indexOf(tab), QApplication::translate("Member_Manage_Dialog", "VIP\347\247\257\345\210\206\350\260\203\346\225\264\350\256\260\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class Member_Manage_Dialog: public Ui_Member_Manage_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBER_MANAGE_DIALOG_H

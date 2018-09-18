/********************************************************************************
** Form generated from reading UI file 'homepagedialog.ui'
**
** Created: Tue Nov 11 16:25:22 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGEDIALOG_H
#define UI_HOMEPAGEDIALOG_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QGridLayout>
#include <QHeaderView>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_homepageDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *homepageDialog)
    {
        if (homepageDialog->objectName().isEmpty())
            homepageDialog->setObjectName(QString::fromUtf8("homepageDialog"));
        homepageDialog->resize(616, 440);
        homepageDialog->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(homepageDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(41);
        gridLayout->setVerticalSpacing(26);
        gridLayout->setContentsMargins(-1, 0, 5, 0);
        pushButton = new QPushButton(homepageDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(120, 90));
        pushButton->setMaximumSize(QSize(120, 90));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(homepageDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(120, 90));
        pushButton_5->setMaximumSize(QSize(120, 90));
        pushButton_5->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(homepageDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(120, 90));
        pushButton_2->setMaximumSize(QSize(120, 90));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(homepageDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(120, 90));
        pushButton_4->setMaximumSize(QSize(120, 90));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_4, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(homepageDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(120, 90));
        pushButton_3->setMaximumSize(QSize(120, 90));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(88, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);


        retranslateUi(homepageDialog);

        QMetaObject::connectSlotsByName(homepageDialog);
    } // setupUi

    void retranslateUi(QWidget *homepageDialog)
    {
        homepageDialog->setWindowTitle(QApplication::translate("homepageDialog", "Form", 0));
        pushButton->setText(QApplication::translate("homepageDialog", "\345\211\215\345\217\260\351\224\200\345\224\256", 0));
        pushButton_5->setText(QApplication::translate("homepageDialog", "\350\277\233\351\224\200\345\255\230\347\273\237\350\256\241", 0));
        pushButton_2->setText(QApplication::translate("homepageDialog", "\351\207\207\350\264\255\350\277\233\350\264\247", 0));
        pushButton_4->setText(QApplication::translate("homepageDialog", "\345\272\223\345\255\230\350\260\203\346\225\264", 0));
        pushButton_3->setText(QApplication::translate("homepageDialog", "\351\224\200\345\224\256\347\273\237\350\256\241", 0));
    } // retranslateUi

};

namespace Ui {
    class homepageDialog: public Ui_homepageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGEDIALOG_H

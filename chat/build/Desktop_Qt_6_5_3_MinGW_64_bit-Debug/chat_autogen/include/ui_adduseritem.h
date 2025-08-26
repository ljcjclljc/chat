/********************************************************************************
** Form generated from reading UI file 'adduseritem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERITEM_H
#define UI_ADDUSERITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUserItem
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *add_tip;
    QLabel *message_tip;
    QLabel *tight_tip;

    void setupUi(QWidget *AddUserItem)
    {
        if (AddUserItem->objectName().isEmpty())
            AddUserItem->setObjectName("AddUserItem");
        AddUserItem->resize(250, 70);
        AddUserItem->setMinimumSize(QSize(250, 70));
        AddUserItem->setMaximumSize(QSize(250, 70));
        horizontalLayout = new QHBoxLayout(AddUserItem);
        horizontalLayout->setObjectName("horizontalLayout");
        add_tip = new QLabel(AddUserItem);
        add_tip->setObjectName("add_tip");
        add_tip->setMinimumSize(QSize(40, 40));
        add_tip->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(add_tip);

        message_tip = new QLabel(AddUserItem);
        message_tip->setObjectName("message_tip");

        horizontalLayout->addWidget(message_tip);

        tight_tip = new QLabel(AddUserItem);
        tight_tip->setObjectName("tight_tip");
        tight_tip->setMinimumSize(QSize(30, 30));
        tight_tip->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(tight_tip);


        retranslateUi(AddUserItem);

        QMetaObject::connectSlotsByName(AddUserItem);
    } // setupUi

    void retranslateUi(QWidget *AddUserItem)
    {
        AddUserItem->setWindowTitle(QCoreApplication::translate("AddUserItem", "Form", nullptr));
        add_tip->setText(QString());
        message_tip->setText(QCoreApplication::translate("AddUserItem", "\346\237\245\346\211\276 uid/name", nullptr));
        tight_tip->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddUserItem: public Ui_AddUserItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERITEM_H

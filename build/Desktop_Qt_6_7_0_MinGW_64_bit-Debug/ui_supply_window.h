/********************************************************************************
** Form generated from reading UI file 'supply_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPLY_WINDOW_H
#define UI_SUPPLY_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_supply_window
{
public:
    QToolButton *where_;
    QToolButton *price_;
    QPushButton *Find_;
    QLabel *title;

    void setupUi(QDialog *supply_window)
    {
        if (supply_window->objectName().isEmpty())
            supply_window->setObjectName("supply_window");
        supply_window->resize(191, 198);
        where_ = new QToolButton(supply_window);
        where_->setObjectName("where_");
        where_->setGeometry(QRect(40, 50, 111, 21));
        price_ = new QToolButton(supply_window);
        price_->setObjectName("price_");
        price_->setGeometry(QRect(40, 90, 111, 21));
        Find_ = new QPushButton(supply_window);
        Find_->setObjectName("Find_");
        Find_->setGeometry(QRect(20, 130, 151, 31));
        title = new QLabel(supply_window);
        title->setObjectName("title");
        title->setGeometry(QRect(60, 15, 77, 16));
        title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(supply_window);

        QMetaObject::connectSlotsByName(supply_window);
    } // setupUi

    void retranslateUi(QDialog *supply_window)
    {
        supply_window->setWindowTitle(QCoreApplication::translate("supply_window", "\350\247\205\351\243\237", nullptr));
        where_->setText(QCoreApplication::translate("supply_window", "where?", nullptr));
        price_->setText(QCoreApplication::translate("supply_window", "price?", nullptr));
        Find_->setText(QCoreApplication::translate("supply_window", "-Start Searching-", nullptr));
        title->setText(QCoreApplication::translate("supply_window", "-Find Food-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class supply_window: public Ui_supply_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPLY_WINDOW_H

/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QLabel *resultLabel;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName("search");
        search->resize(149, 120);
        resultLabel = new QLabel(search);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(23, 20, 101, 61));
        resultLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "Dialog", nullptr));
        resultLabel->setText(QCoreApplication::translate("search", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H

/********************************************************************************
** Form generated from reading UI file 'find.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_H
#define UI_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_find
{
public:
    QLabel *resultLabel;

    void setupUi(QWidget *find)
    {
        if (find->objectName().isEmpty())
            find->setObjectName("find");
        find->resize(140, 98);
        resultLabel = new QLabel(find);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(20, 10, 54, 16));

        retranslateUi(find);

        QMetaObject::connectSlotsByName(find);
    } // setupUi

    void retranslateUi(QWidget *find)
    {
        find->setWindowTitle(QCoreApplication::translate("find", "Form", nullptr));
        resultLabel->setText(QCoreApplication::translate("find", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class find: public Ui_find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_H

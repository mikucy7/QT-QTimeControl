/********************************************************************************
** Form generated from reading UI file 'window2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW2_H
#define UI_WINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window2
{
public:

    void setupUi(QWidget *window2)
    {
        if (window2->objectName().isEmpty())
            window2->setObjectName("window2");
        window2->resize(400, 300);

        retranslateUi(window2);

        QMetaObject::connectSlotsByName(window2);
    } // setupUi

    void retranslateUi(QWidget *window2)
    {
        window2->setWindowTitle(QCoreApplication::translate("window2", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window2: public Ui_window2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW2_H

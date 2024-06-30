/********************************************************************************
** Form generated from reading UI file 'collect.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLECT_H
#define UI_COLLECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Collect
{
public:
    QLabel *image;
    QPushButton *Collect_the_Star;

    void setupUi(QDialog *Collect)
    {
        if (Collect->objectName().isEmpty())
            Collect->setObjectName("Collect");
        Collect->resize(280, 396);
        image = new QLabel(Collect);
        image->setObjectName("image");
        image->setGeometry(QRect(0, 0, 280, 396));
        Collect_the_Star = new QPushButton(Collect);
        Collect_the_Star->setObjectName("Collect_the_Star");
        Collect_the_Star->setGeometry(QRect(80, 360, 121, 24));

        retranslateUi(Collect);

        QMetaObject::connectSlotsByName(Collect);
    } // setupUi

    void retranslateUi(QDialog *Collect)
    {
        Collect->setWindowTitle(QCoreApplication::translate("Collect", "Dialog", nullptr));
        image->setText(QString());
        Collect_the_Star->setText(QCoreApplication::translate("Collect", "Collect the star", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Collect: public Ui_Collect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLECT_H

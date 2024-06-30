/********************************************************************************
** Form generated from reading UI file 'record_image.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_IMAGE_H
#define UI_RECORD_IMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_record_image
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *record_image)
    {
        if (record_image->objectName().isEmpty())
            record_image->setObjectName("record_image");
        record_image->resize(140, 198);
        label = new QLabel(record_image);
        label->setObjectName("label");
        label->setGeometry(QRect(-1, 1, 141, 201));
        pushButton = new QPushButton(record_image);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 170, 80, 18));

        retranslateUi(record_image);

        QMetaObject::connectSlotsByName(record_image);
    } // setupUi

    void retranslateUi(QDialog *record_image)
    {
        record_image->setWindowTitle(QCoreApplication::translate("record_image", "collection", nullptr));
        label->setText(QCoreApplication::translate("record_image", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("record_image", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class record_image: public Ui_record_image {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_IMAGE_H

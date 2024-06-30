/********************************************************************************
** Form generated from reading UI file 'tmap_change.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMAP_CHANGE_H
#define UI_TMAP_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tmap_change
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *time_left;
    QTextEdit *textEdit_2;
    QPushButton *deltmap;

    void setupUi(QDialog *tmap_change)
    {
        if (tmap_change->objectName().isEmpty())
            tmap_change->setObjectName("tmap_change");
        tmap_change->resize(400, 300);
        buttonBox = new QDialogButtonBox(tmap_change);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(40, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(tmap_change);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 381, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(0, 25));
        textEdit->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(textEdit);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        dateTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setMinimumSize(QSize(0, 25));
        dateTimeEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(dateTimeEdit);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_2->addWidget(label_4);

        dateTimeEdit_2 = new QDateTimeEdit(gridLayoutWidget);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");

        horizontalLayout_2->addWidget(dateTimeEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        time_left = new QLabel(gridLayoutWidget);
        time_left->setObjectName("time_left");
        time_left->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(time_left);

        textEdit_2 = new QTextEdit(gridLayoutWidget);
        textEdit_2->setObjectName("textEdit_2");

        verticalLayout->addWidget(textEdit_2);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        deltmap = new QPushButton(tmap_change);
        deltmap->setObjectName("deltmap");
        deltmap->setGeometry(QRect(140, 272, 80, 25));
        deltmap->setMinimumSize(QSize(0, 25));
        deltmap->setMaximumSize(QSize(16777215, 25));

        retranslateUi(tmap_change);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, tmap_change, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, tmap_change, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(tmap_change);
    } // setupUi

    void retranslateUi(QDialog *tmap_change)
    {
        tmap_change->setWindowTitle(QCoreApplication::translate("tmap_change", "\344\277\256\346\224\271\344\272\213\345\212\241", nullptr));
        label->setText(QCoreApplication::translate("tmap_change", "\344\272\213\345\212\241\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("tmap_change", "\346\214\201\347\273\255\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("tmap_change", "~", nullptr));
        label_3->setText(QCoreApplication::translate("tmap_change", "\350\241\250\346\240\274\351\242\234\350\211\262", nullptr));
        time_left->setText(QCoreApplication::translate("tmap_change", "\345\244\207\346\263\250", nullptr));
        deltmap->setText(QCoreApplication::translate("tmap_change", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tmap_change: public Ui_tmap_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMAP_CHANGE_H

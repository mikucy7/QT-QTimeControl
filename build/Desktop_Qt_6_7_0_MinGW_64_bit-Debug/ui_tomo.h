/********************************************************************************
** Form generated from reading UI file 'tomo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOMO_H
#define UI_TOMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tomo
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *tomo)
    {
        if (tomo->objectName().isEmpty())
            tomo->setObjectName("tomo");
        tomo->resize(400, 300);
        buttonBox = new QDialogButtonBox(tomo);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(tomo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(9, 9, 381, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(150, 25));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 25));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 25));
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        retranslateUi(tomo);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, tomo, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, tomo, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(tomo);
    } // setupUi

    void retranslateUi(QDialog *tomo)
    {
        tomo->setWindowTitle(QCoreApplication::translate("tomo", "\347\225\252\350\214\204\351\222\237\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("tomo", "\350\257\267\347\241\256\350\256\244\346\202\250\350\246\201\350\277\233\350\241\214\347\232\204\344\273\273\345\212\241", nullptr));
        label_3->setText(QCoreApplication::translate("tomo", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("tomo", "\350\257\267\347\241\256\350\256\244\346\210\226\350\276\223\345\205\245\351\242\204\350\256\241\350\277\233\350\241\214\346\227\266\351\227\264\357\274\210\345\210\206\351\222\237\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tomo: public Ui_tomo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOMO_H

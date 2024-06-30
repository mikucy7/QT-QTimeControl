/********************************************************************************
** Form generated from reading UI file 'arrange_create.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARRANGE_CREATE_H
#define UI_ARRANGE_CREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createtask
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *createtask)
    {
        if (createtask->objectName().isEmpty())
            createtask->setObjectName("createtask");
        createtask->resize(400, 300);
        buttonBox = new QDialogButtonBox(createtask);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(31, 250, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(createtask);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 381, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 25));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(0, 25));
        textEdit->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(textEdit);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 25));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        dateTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setMinimumSize(QSize(0, 25));
        dateTimeEdit->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(dateTimeEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(createtask);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, createtask, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, createtask, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(createtask);
    } // setupUi

    void retranslateUi(QDialog *createtask)
    {
        createtask->setWindowTitle(QCoreApplication::translate("createtask", "\346\226\260\345\242\236ddl", nullptr));
        label->setText(QCoreApplication::translate("createtask", "\346\226\260\345\273\272ddl", nullptr));
        label_2->setText(QCoreApplication::translate("createtask", "\344\273\273\345\212\241\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("createtask", "\346\210\252\346\255\242\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createtask: public Ui_createtask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARRANGE_CREATE_H

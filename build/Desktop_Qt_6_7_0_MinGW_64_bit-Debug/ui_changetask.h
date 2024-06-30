/********************************************************************************
** Form generated from reading UI file 'changetask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGETASK_H
#define UI_CHANGETASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changetask
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_3;
    QLabel *time_left;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *changetask)
    {
        if (changetask->objectName().isEmpty())
            changetask->setObjectName("changetask");
        changetask->resize(400, 300);
        gridLayoutWidget = new QWidget(changetask);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(9, 9, 381, 281));
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

        dateTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setMinimumSize(QSize(0, 25));
        dateTimeEdit->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(dateTimeEdit);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        time_left = new QLabel(gridLayoutWidget);
        time_left->setObjectName("time_left");
        time_left->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(time_left);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(changetask);
        QObject::connect(pushButton, &QPushButton::clicked, changetask, qOverload<>(&QDialog::reject));
        QObject::connect(pushButton_2, &QPushButton::clicked, changetask, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(changetask);
    } // setupUi

    void retranslateUi(QDialog *changetask)
    {
        changetask->setWindowTitle(QCoreApplication::translate("changetask", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("changetask", "\344\273\273\345\212\241\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("changetask", "\346\210\252\346\255\242\346\227\245\346\234\237", nullptr));
        label_3->setText(QCoreApplication::translate("changetask", "\345\211\251\344\275\231\346\227\266\351\227\264", nullptr));
        time_left->setText(QCoreApplication::translate("changetask", "\345\211\251\344\275\231\346\227\266\351\227\264", nullptr));
        pushButton->setText(QCoreApplication::translate("changetask", "\345\217\226\346\266\210", nullptr));
        pushButton_2->setText(QCoreApplication::translate("changetask", "\345\272\224\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changetask: public Ui_changetask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETASK_H

/********************************************************************************
** Form generated from reading UI file 'tmap_create.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMAP_CREATE_H
#define UI_TMAP_CREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tmap_create
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
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
    QSpacerItem *horizontalSpacer_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *tmap_create)
    {
        if (tmap_create->objectName().isEmpty())
            tmap_create->setObjectName("tmap_create");
        tmap_create->resize(500, 400);
        gridLayoutWidget = new QWidget(tmap_create);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 481, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 25));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));
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
        dateTimeEdit->setMinimumSize(QSize(150, 25));
        dateTimeEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(dateTimeEdit);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_2->addWidget(label_4);

        dateTimeEdit_2 = new QDateTimeEdit(gridLayoutWidget);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");
        dateTimeEdit_2->setMinimumSize(QSize(150, 0));

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


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalLayoutWidget = new QWidget(tmap_create);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 350, 481, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(80, 18));

        horizontalLayout_3->addWidget(pushButton);

        checkBox = new QCheckBox(horizontalLayoutWidget);
        checkBox->setObjectName("checkBox");

        horizontalLayout_3->addWidget(checkBox);

        buttonBox = new QDialogButtonBox(horizontalLayoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        retranslateUi(tmap_create);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, tmap_create, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, tmap_create, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(tmap_create);
    } // setupUi

    void retranslateUi(QDialog *tmap_create)
    {
        tmap_create->setWindowTitle(QCoreApplication::translate("tmap_create", "\346\226\260\345\242\236\344\272\213\345\212\241", nullptr));
        label_5->setText(QCoreApplication::translate("tmap_create", "\346\226\260\345\273\272\344\272\213\345\212\241", nullptr));
        label->setText(QCoreApplication::translate("tmap_create", "\344\272\213\345\212\241\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("tmap_create", "\346\214\201\347\273\255\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("tmap_create", "~", nullptr));
        label_3->setText(QCoreApplication::translate("tmap_create", "\350\241\250\346\240\274\351\242\234\350\211\262", nullptr));
        time_left->setText(QCoreApplication::translate("tmap_create", "\345\244\207\346\263\250", nullptr));
        pushButton->setText(QCoreApplication::translate("tmap_create", "\350\257\276\350\241\250\345\257\274\345\205\245", nullptr));
        checkBox->setText(QCoreApplication::translate("tmap_create", "\345\274\200\345\220\257\345\276\252\347\216\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tmap_create: public Ui_tmap_create {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMAP_CREATE_H

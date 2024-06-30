/********************************************************************************
** Form generated from reading UI file 'decorator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECORATOR_H
#define UI_DECORATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_decorator
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QPushButton *fontchange;
    QPushButton *headchange;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *textlabel;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_3;
    QLabel *textlabel_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *apply_button;
    QPushButton *exit_button;

    void setupUi(QWidget *decorator)
    {
        if (decorator->objectName().isEmpty())
            decorator->setObjectName("decorator");
        decorator->resize(400, 300);
        gridLayoutWidget = new QWidget(decorator);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        fontchange = new QPushButton(gridLayoutWidget);
        fontchange->setObjectName("fontchange");
        fontchange->setMinimumSize(QSize(60, 40));

        gridLayout_2->addWidget(fontchange, 2, 1, 1, 1);

        headchange = new QPushButton(gridLayoutWidget);
        headchange->setObjectName("headchange");
        headchange->setMinimumSize(QSize(60, 40));

        gridLayout_2->addWidget(headchange, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        textlabel = new QLabel(gridLayoutWidget);
        textlabel->setObjectName("textlabel");
        textlabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(textlabel, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(60, 40));

        gridLayout_2->addWidget(pushButton_4, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(60, 40));

        gridLayout_3->addWidget(pushButton_3, 1, 1, 1, 1);

        textlabel_3 = new QLabel(gridLayoutWidget);
        textlabel_3->setObjectName("textlabel_3");
        textlabel_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(textlabel_3, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");

        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        apply_button = new QPushButton(gridLayoutWidget);
        apply_button->setObjectName("apply_button");

        horizontalLayout->addWidget(apply_button);

        exit_button = new QPushButton(gridLayoutWidget);
        exit_button->setObjectName("exit_button");

        horizontalLayout->addWidget(exit_button);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 9);
        verticalLayout->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        retranslateUi(decorator);

        QMetaObject::connectSlotsByName(decorator);
    } // setupUi

    void retranslateUi(QWidget *decorator)
    {
        decorator->setWindowTitle(QCoreApplication::translate("decorator", "\351\243\216\346\240\274\344\277\256\346\224\271", nullptr));
        fontchange->setText(QCoreApplication::translate("decorator", "\345\205\250\345\261\200\346\226\207\345\255\227\344\277\256\346\224\271", nullptr));
        headchange->setText(QCoreApplication::translate("decorator", "\345\244\264\345\203\217\344\277\256\346\224\271", nullptr));
        textlabel->setText(QCoreApplication::translate("decorator", "\346\226\207\345\255\227\344\270\216\345\233\276\345\203\217\344\277\256\346\224\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("decorator", "\345\205\266\344\273\226\344\277\256\346\224\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("decorator", "\350\203\214\346\231\257\344\277\256\346\224\271", nullptr));
        textlabel_3->setText(QCoreApplication::translate("decorator", "\351\243\216\346\240\274\344\277\256\346\224\271", nullptr));
        apply_button->setText(QCoreApplication::translate("decorator", "apply", nullptr));
        exit_button->setText(QCoreApplication::translate("decorator", "exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class decorator: public Ui_decorator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECORATOR_H

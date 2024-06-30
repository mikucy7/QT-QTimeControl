/********************************************************************************
** Form generated from reading UI file 'maintime.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTIME_H
#define UI_MAINTIME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Maintime
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *main_right;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *totaltime;
    QPushButton *button_start;
    QFrame *line;
    QVBoxLayout *main_left;
    QPushButton *exitbutton;
    QVBoxLayout *header;
    QLabel *head;
    QVBoxLayout *tasks_list;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *supplyment;
    QPushButton *diary;
    QPushButton *decoration;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menubar;
    QMenu *menuqtimer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Maintime)
    {
        if (Maintime->objectName().isEmpty())
            Maintime->setObjectName("Maintime");
        Maintime->resize(1280, 960);
        Maintime->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Maintime);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        main_right = new QVBoxLayout();
        main_right->setObjectName("main_right");
        main_right->setSizeConstraint(QLayout::SetDefaultConstraint);
        main_right->setContentsMargins(10, 10, 10, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        main_right->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        totaltime = new QPushButton(centralwidget);
        totaltime->setObjectName("totaltime");
        totaltime->setMinimumSize(QSize(0, 60));

        horizontalLayout->addWidget(totaltime);

        button_start = new QPushButton(centralwidget);
        button_start->setObjectName("button_start");
        button_start->setMinimumSize(QSize(0, 60));

        horizontalLayout->addWidget(button_start);


        main_right->addLayout(horizontalLayout);

        main_right->setStretch(0, 9);
        main_right->setStretch(1, 1);

        verticalLayout_4->addLayout(main_right);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_4->addWidget(line);

        main_left = new QVBoxLayout();
        main_left->setObjectName("main_left");
        main_left->setContentsMargins(10, 10, 10, 10);
        exitbutton = new QPushButton(centralwidget);
        exitbutton->setObjectName("exitbutton");

        main_left->addWidget(exitbutton);

        header = new QVBoxLayout();
        header->setObjectName("header");
        header->setContentsMargins(5, 5, 5, 5);
        head = new QLabel(centralwidget);
        head->setObjectName("head");
        head->setStyleSheet(QString::fromUtf8("image: url(:/images/image/hdimage1.png);"));

        header->addWidget(head);


        main_left->addLayout(header);

        tasks_list = new QVBoxLayout();
        tasks_list->setObjectName("tasks_list");
        tasks_list->setContentsMargins(5, 5, 5, 5);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1236, 91));
        verticalLayoutWidget_5 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(60, 90, 160, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        tasks_list->addWidget(scrollArea);


        main_left->addLayout(tasks_list);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        supplyment = new QPushButton(centralwidget);
        supplyment->setObjectName("supplyment");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(supplyment->sizePolicy().hasHeightForWidth());
        supplyment->setSizePolicy(sizePolicy);
        supplyment->setMinimumSize(QSize(0, 60));

        verticalLayout_2->addWidget(supplyment);

        diary = new QPushButton(centralwidget);
        diary->setObjectName("diary");
        diary->setMinimumSize(QSize(0, 60));

        verticalLayout_2->addWidget(diary);

        decoration = new QPushButton(centralwidget);
        decoration->setObjectName("decoration");
        decoration->setMinimumSize(QSize(0, 60));

        verticalLayout_2->addWidget(decoration);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(1, 0));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 3);
        verticalLayout_2->setStretch(2, 3);

        main_left->addLayout(verticalLayout_2);

        main_left->setStretch(1, 1);
        main_left->setStretch(2, 5);
        main_left->setStretch(3, 3);

        verticalLayout_4->addLayout(main_left);

        Maintime->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Maintime);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 17));
        menuqtimer = new QMenu(menubar);
        menuqtimer->setObjectName("menuqtimer");
        Maintime->setMenuBar(menubar);
        statusbar = new QStatusBar(Maintime);
        statusbar->setObjectName("statusbar");
        Maintime->setStatusBar(statusbar);

        menubar->addAction(menuqtimer->menuAction());

        retranslateUi(Maintime);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Maintime);
    } // setupUi

    void retranslateUi(QMainWindow *Maintime)
    {
        Maintime->setWindowTitle(QCoreApplication::translate("Maintime", "Maintime", nullptr));
        totaltime->setText(QCoreApplication::translate("Maintime", "totaltime", nullptr));
        button_start->setText(QCoreApplication::translate("Maintime", "Start Journey", nullptr));
        exitbutton->setText(QCoreApplication::translate("Maintime", "\351\200\200\345\207\272", nullptr));
        head->setText(QString());
        supplyment->setText(QCoreApplication::translate("Maintime", "Supplyment", nullptr));
        diary->setText(QCoreApplication::translate("Maintime", "Diary", nullptr));
        decoration->setText(QCoreApplication::translate("Maintime", "Decoration", nullptr));
        menuqtimer->setTitle(QCoreApplication::translate("Maintime", "qtimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Maintime: public Ui_Maintime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTIME_H

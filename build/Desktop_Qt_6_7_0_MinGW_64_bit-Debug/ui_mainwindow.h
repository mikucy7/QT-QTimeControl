/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelheader;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *decorate;
    QPushButton *diary;
    QPushButton *supply;
    QPushButton *start;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *exitbutton;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *newtmap;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_8;
    QFrame *line;
    QWidget *page3;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pg3_exitbutton;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_3;
    QFrame *line_2;
    QWidget *page2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pg2_breakbutton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_4;
    QLCDNumber *lcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 800);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page1 = new QWidget();
        page1->setObjectName("page1");
        horizontalLayout = new QHBoxLayout(page1);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        labelheader = new QLabel(page1);
        labelheader->setObjectName("labelheader");
        labelheader->setMinimumSize(QSize(90, 90));
        labelheader->setMaximumSize(QSize(90, 90));
        labelheader->setStyleSheet(QString::fromUtf8("image: url(:/images/image/hdimage1.png);"));

        gridLayout_7->addWidget(labelheader, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_7);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, -1, 0, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea = new QScrollArea(page1);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setEnabled(true);
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea{border:none;background-color:transparent;border-radius:100px;}\n"
"QScrollArea QScrollBar:vertical{width:8px;background:rgba(255, 255, 255, 200);margin:0px,1px,0px,1px;padding-top:0px;padding-bottom:0px;border-radius:20px;}\n"
"QScrollArea QScrollBar::handle:vertical{background:rgba(255, 255, 255, 200);border-radius:10px;}\n"
"QScrollArea QScrollBar::handle:vertical:hover{background:transparent;border-radius:10px;}\n"
"QScrollArea QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical{background:transparent;border-radius:10px;}\n"
"QScrollArea QScrollBar::add-line:vertical,QScrollBar::sub-line:vertical{height:0px;width:0px;}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setEnabled(true);
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 217, 289));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 200), stop:1 rgba(255, 255, 255, 255));"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        gridLayout_6->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_6);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(10);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 10, 0, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        decorate = new QPushButton(page1);
        decorate->setObjectName("decorate");
        decorate->setMinimumSize(QSize(170, 60));
        decorate->setMaximumSize(QSize(170, 60));

        gridLayout_4->addWidget(decorate, 2, 1, 1, 1);

        diary = new QPushButton(page1);
        diary->setObjectName("diary");
        diary->setMinimumSize(QSize(170, 60));
        diary->setMaximumSize(QSize(170, 60));

        gridLayout_4->addWidget(diary, 1, 1, 1, 1);

        supply = new QPushButton(page1);
        supply->setObjectName("supply");
        supply->setMinimumSize(QSize(170, 60));
        supply->setMaximumSize(QSize(170, 60));

        gridLayout_4->addWidget(supply, 3, 1, 1, 1);

        start = new QPushButton(page1);
        start->setObjectName("start");
        start->setMinimumSize(QSize(170, 60));
        start->setMaximumSize(QSize(170, 60));
        start->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /*\345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262*/    \n"
"    color:black;\n"
"\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    \n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\345\217\263\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-left:4px;\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\344\270\213\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-top:4px;\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"	background-color:rgb(200,200,200);\n"
"}"));

        gridLayout_4->addWidget(start, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, -1, 0, -1);
        exitbutton = new QPushButton(page1);
        exitbutton->setObjectName("exitbutton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(20);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exitbutton->sizePolicy().hasHeightForWidth());
        exitbutton->setSizePolicy(sizePolicy);
        exitbutton->setMinimumSize(QSize(170, 0));
        exitbutton->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_7->addWidget(exitbutton);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 4);
        verticalLayout_2->setStretch(2, 4);

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        tableWidget = new QTableWidget(page1);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setLineWidth(2);
        tableWidget->setMidLineWidth(2);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableWidget->setRowCount(9);
        tableWidget->setColumnCount(7);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        newtmap = new QPushButton(page1);
        newtmap->setObjectName("newtmap");
        newtmap->setMinimumSize(QSize(30, 25));
        newtmap->setMaximumSize(QSize(50, 25));

        horizontalLayout_8->addWidget(newtmap);

        pushButton_4 = new QPushButton(page1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(40, 0));
        pushButton_4->setMaximumSize(QSize(50, 28));

        horizontalLayout_8->addWidget(pushButton_4);

        lineEdit = new QLineEdit(page1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 25));
        lineEdit->setMaximumSize(QSize(16777215, 25));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lineEdit);

        pushButton_3 = new QPushButton(page1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 25));
        pushButton_3->setMaximumSize(QSize(50, 28));

        horizontalLayout_8->addWidget(pushButton_3);

        pushButton = new QPushButton(page1);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(30, 25));
        pushButton->setMaximumSize(QSize(50, 25));

        horizontalLayout_8->addWidget(pushButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_8);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        line = new QFrame(page1);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(2, 4);

        horizontalLayout->addLayout(gridLayout);

        stackedWidget->addWidget(page1);
        page3 = new QWidget();
        page3->setObjectName("page3");
        horizontalLayout_4 = new QHBoxLayout(page3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(5, 5, 5, 5);
        label_2 = new QLabel(page3);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));

        horizontalLayout_6->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pg3_exitbutton = new QPushButton(page3);
        pg3_exitbutton->setObjectName("pg3_exitbutton");
        pg3_exitbutton->setMinimumSize(QSize(60, 40));

        horizontalLayout_6->addWidget(pg3_exitbutton);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_3 = new QLabel(page3);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/images/image/bgimage1.jpg);"));

        verticalLayout_8->addWidget(label_3);


        gridLayout_2->addLayout(verticalLayout_8, 2, 0, 1, 1);

        line_2 = new QFrame(page3);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line_2, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(2, 6);

        horizontalLayout_4->addLayout(gridLayout_2);

        stackedWidget->addWidget(page3);
        page2 = new QWidget();
        page2->setObjectName("page2");
        horizontalLayout_2 = new QHBoxLayout(page2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(10, 10, 10, 10);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");

        gridLayout_3->addLayout(verticalLayout_7, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pg2_breakbutton = new QPushButton(page2);
        pg2_breakbutton->setObjectName("pg2_breakbutton");
        pg2_breakbutton->setMinimumSize(QSize(60, 40));

        horizontalLayout_5->addWidget(pg2_breakbutton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(page2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(40, 40));

        horizontalLayout_5->addWidget(pushButton_2);


        gridLayout_3->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, -1, -1, -1);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

        lcdNumber = new QLCDNumber(page2);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setProperty("value", QVariant(12345.000000000000000));
        lcdNumber->setProperty("intValue", QVariant(12345));

        verticalLayout_9->addWidget(lcdNumber);

        verticalLayout_9->setStretch(1, 1);

        gridLayout_3->addLayout(verticalLayout_9, 1, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(1, 5);
        gridLayout_3->setRowStretch(2, 1);

        horizontalLayout_2->addLayout(gridLayout_3);

        stackedWidget->addWidget(page2);

        verticalLayout_4->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QTimeController", nullptr));
        labelheader->setText(QCoreApplication::translate("MainWindow", "\345\244\264\345\203\217", nullptr));
        decorate->setText(QCoreApplication::translate("MainWindow", "Decorate", nullptr));
        diary->setText(QCoreApplication::translate("MainWindow", "Diary", nullptr));
        supply->setText(QCoreApplication::translate("MainWindow", "Supply", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start My Journey", nullptr));
        exitbutton->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        newtmap->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\345\221\250", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\345\221\250", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ALL my friends", nullptr));
        pg3_exitbutton->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pg2_breakbutton->setText(QCoreApplication::translate("MainWindow", "have a break", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "music", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

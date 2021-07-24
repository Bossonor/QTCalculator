/********************************************************************************
** Form generated from reading UI file 'QtCounter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCOUNTER_H
#define UI_QTCOUNTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtCounterClass
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QPushButton *num7;
    QPushButton *num4;
    QPushButton *num1;
    QPushButton *num8;
    QPushButton *num5;
    QPushButton *num2;
    QPushButton *num9;
    QPushButton *num6;
    QPushButton *num3;
    QPushButton *leftbrk;
    QPushButton *add;
    QPushButton *multiply;
    QPushButton *rightbrk;
    QPushButton *subtract;
    QPushButton *divide;
    QPushButton *num0;
    QPushButton *equal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtCounterClass)
    {
        if (QtCounterClass->objectName().isEmpty())
            QtCounterClass->setObjectName(QStringLiteral("QtCounterClass"));
        QtCounterClass->resize(372, 313);
        centralWidget = new QWidget(QtCounterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 0, 351, 31));
        num7 = new QPushButton(centralWidget);
        num7->setObjectName(QStringLiteral("num7"));
        num7->setGeometry(QRect(10, 40, 61, 51));
        num4 = new QPushButton(centralWidget);
        num4->setObjectName(QStringLiteral("num4"));
        num4->setGeometry(QRect(10, 100, 61, 51));
        num1 = new QPushButton(centralWidget);
        num1->setObjectName(QStringLiteral("num1"));
        num1->setGeometry(QRect(10, 160, 61, 51));
        num8 = new QPushButton(centralWidget);
        num8->setObjectName(QStringLiteral("num8"));
        num8->setGeometry(QRect(80, 40, 61, 51));
        num5 = new QPushButton(centralWidget);
        num5->setObjectName(QStringLiteral("num5"));
        num5->setGeometry(QRect(80, 100, 61, 51));
        num2 = new QPushButton(centralWidget);
        num2->setObjectName(QStringLiteral("num2"));
        num2->setGeometry(QRect(80, 160, 61, 51));
        num9 = new QPushButton(centralWidget);
        num9->setObjectName(QStringLiteral("num9"));
        num9->setGeometry(QRect(150, 40, 61, 51));
        num6 = new QPushButton(centralWidget);
        num6->setObjectName(QStringLiteral("num6"));
        num6->setGeometry(QRect(150, 100, 61, 51));
        num3 = new QPushButton(centralWidget);
        num3->setObjectName(QStringLiteral("num3"));
        num3->setGeometry(QRect(150, 160, 61, 51));
        leftbrk = new QPushButton(centralWidget);
        leftbrk->setObjectName(QStringLiteral("leftbrk"));
        leftbrk->setGeometry(QRect(230, 40, 61, 51));
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(230, 100, 61, 51));
        multiply = new QPushButton(centralWidget);
        multiply->setObjectName(QStringLiteral("multiply"));
        multiply->setGeometry(QRect(230, 160, 61, 51));
        rightbrk = new QPushButton(centralWidget);
        rightbrk->setObjectName(QStringLiteral("rightbrk"));
        rightbrk->setGeometry(QRect(300, 40, 61, 51));
        subtract = new QPushButton(centralWidget);
        subtract->setObjectName(QStringLiteral("subtract"));
        subtract->setGeometry(QRect(300, 100, 61, 51));
        divide = new QPushButton(centralWidget);
        divide->setObjectName(QStringLiteral("divide"));
        divide->setGeometry(QRect(300, 160, 61, 51));
        num0 = new QPushButton(centralWidget);
        num0->setObjectName(QStringLiteral("num0"));
        num0->setGeometry(QRect(10, 220, 201, 21));
        equal = new QPushButton(centralWidget);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setGeometry(QRect(230, 220, 131, 21));
        QtCounterClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtCounterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 372, 26));
        QtCounterClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtCounterClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtCounterClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtCounterClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtCounterClass->setStatusBar(statusBar);

        retranslateUi(QtCounterClass);
        QObject::connect(num7, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(num4, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(num8, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(num9, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(num5, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(num6, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(num1, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(num2, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(num3, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(num0, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(leftbrk, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(rightbrk, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(add, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(subtract, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(multiply, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(divide, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));
        QObject::connect(equal, SIGNAL(clicked()), QtCounterClass, SLOT(ButtonClicked()));

        QMetaObject::connectSlotsByName(QtCounterClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtCounterClass)
    {
        QtCounterClass->setWindowTitle(QApplication::translate("QtCounterClass", "QtCounter", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("QtCounterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        num7->setText(QApplication::translate("QtCounterClass", "7", Q_NULLPTR));
        num4->setText(QApplication::translate("QtCounterClass", "4", Q_NULLPTR));
        num1->setText(QApplication::translate("QtCounterClass", "1", Q_NULLPTR));
        num8->setText(QApplication::translate("QtCounterClass", "8", Q_NULLPTR));
        num5->setText(QApplication::translate("QtCounterClass", "5", Q_NULLPTR));
        num2->setText(QApplication::translate("QtCounterClass", "2", Q_NULLPTR));
        num9->setText(QApplication::translate("QtCounterClass", "9", Q_NULLPTR));
        num6->setText(QApplication::translate("QtCounterClass", "6", Q_NULLPTR));
        num3->setText(QApplication::translate("QtCounterClass", "3", Q_NULLPTR));
        leftbrk->setText(QApplication::translate("QtCounterClass", "(", Q_NULLPTR));
        add->setText(QApplication::translate("QtCounterClass", "+", Q_NULLPTR));
        multiply->setText(QApplication::translate("QtCounterClass", "*", Q_NULLPTR));
        rightbrk->setText(QApplication::translate("QtCounterClass", ")", Q_NULLPTR));
        subtract->setText(QApplication::translate("QtCounterClass", "-", Q_NULLPTR));
        divide->setText(QApplication::translate("QtCounterClass", "\303\267", Q_NULLPTR));
        num0->setText(QApplication::translate("QtCounterClass", "0", Q_NULLPTR));
        equal->setText(QApplication::translate("QtCounterClass", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtCounterClass: public Ui_QtCounterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCOUNTER_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEditDenominador1;
    QFrame *line;
    QLineEdit *lineEditNumerador1;
    QPushButton *pushButtonOperacao;
    QLineEdit *lineEditNumerador2;
    QFrame *line_2;
    QLineEdit *lineEditDenominador2;
    QLabel *label;
    QLineEdit *lineEditNumeradorR;
    QFrame *line_3;
    QLineEdit *lineEditDenominadorR;
    QPushButton *pushButtonExecutar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(623, 299);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEditDenominador1 = new QLineEdit(centralWidget);
        lineEditDenominador1->setObjectName(QString::fromUtf8("lineEditDenominador1"));
        lineEditDenominador1->setGeometry(QRect(50, 120, 61, 25));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 100, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEditNumerador1 = new QLineEdit(centralWidget);
        lineEditNumerador1->setObjectName(QString::fromUtf8("lineEditNumerador1"));
        lineEditNumerador1->setGeometry(QRect(50, 60, 61, 25));
        pushButtonOperacao = new QPushButton(centralWidget);
        pushButtonOperacao->setObjectName(QString::fromUtf8("pushButtonOperacao"));
        pushButtonOperacao->setGeometry(QRect(150, 90, 41, 25));
        lineEditNumerador2 = new QLineEdit(centralWidget);
        lineEditNumerador2->setObjectName(QString::fromUtf8("lineEditNumerador2"));
        lineEditNumerador2->setGeometry(QRect(250, 60, 61, 25));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(220, 100, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lineEditDenominador2 = new QLineEdit(centralWidget);
        lineEditDenominador2->setObjectName(QString::fromUtf8("lineEditDenominador2"));
        lineEditDenominador2->setGeometry(QRect(250, 120, 61, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 90, 21, 17));
        lineEditNumeradorR = new QLineEdit(centralWidget);
        lineEditNumeradorR->setObjectName(QString::fromUtf8("lineEditNumeradorR"));
        lineEditNumeradorR->setGeometry(QRect(430, 60, 61, 25));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(400, 100, 118, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        lineEditDenominadorR = new QLineEdit(centralWidget);
        lineEditDenominadorR->setObjectName(QString::fromUtf8("lineEditDenominadorR"));
        lineEditDenominadorR->setGeometry(QRect(430, 120, 61, 25));
        pushButtonExecutar = new QPushButton(centralWidget);
        pushButtonExecutar->setObjectName(QString::fromUtf8("pushButtonExecutar"));
        pushButtonExecutar->setGeometry(QRect(300, 170, 89, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 623, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEditNumerador1, lineEditDenominador1);
        QWidget::setTabOrder(lineEditDenominador1, pushButtonOperacao);
        QWidget::setTabOrder(pushButtonOperacao, lineEditNumerador2);
        QWidget::setTabOrder(lineEditNumerador2, lineEditDenominador2);
        QWidget::setTabOrder(lineEditDenominador2, lineEditNumeradorR);
        QWidget::setTabOrder(lineEditNumeradorR, lineEditDenominadorR);
        QWidget::setTabOrder(lineEditDenominadorR, pushButtonExecutar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonOperacao->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButtonExecutar->setText(QCoreApplication::translate("MainWindow", "EXEUTAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

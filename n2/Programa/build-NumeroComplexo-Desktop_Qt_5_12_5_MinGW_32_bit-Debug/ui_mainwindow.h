/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QLineEdit *lineEditDenominadorR;
    QLineEdit *lineEditDenominador2;
    QLineEdit *lineEditDenominador1;
    QLabel *label;
    QFrame *line_3;
    QLineEdit *lineEditNumerador2;
    QFrame *line_2;
    QPushButton *pushButtonOperacao;
    QLineEdit *lineEditNumeradorR;
    QFrame *line;
    QLineEdit *lineEditNumerador1;
    QPushButton *pushButtonExecutar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(736, 266);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 0, 661, 181));
        lineEditDenominadorR = new QLineEdit(groupBox);
        lineEditDenominadorR->setObjectName(QString::fromUtf8("lineEditDenominadorR"));
        lineEditDenominadorR->setGeometry(QRect(430, 110, 61, 25));
        lineEditDenominadorR->setReadOnly(true);
        lineEditDenominador2 = new QLineEdit(groupBox);
        lineEditDenominador2->setObjectName(QString::fromUtf8("lineEditDenominador2"));
        lineEditDenominador2->setGeometry(QRect(250, 110, 61, 25));
        lineEditDenominador1 = new QLineEdit(groupBox);
        lineEditDenominador1->setObjectName(QString::fromUtf8("lineEditDenominador1"));
        lineEditDenominador1->setGeometry(QRect(50, 110, 61, 25));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 80, 21, 17));
        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(400, 90, 118, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        lineEditNumerador2 = new QLineEdit(groupBox);
        lineEditNumerador2->setObjectName(QString::fromUtf8("lineEditNumerador2"));
        lineEditNumerador2->setGeometry(QRect(250, 50, 61, 25));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(220, 90, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButtonOperacao = new QPushButton(groupBox);
        pushButtonOperacao->setObjectName(QString::fromUtf8("pushButtonOperacao"));
        pushButtonOperacao->setGeometry(QRect(150, 80, 41, 25));
        lineEditNumeradorR = new QLineEdit(groupBox);
        lineEditNumeradorR->setObjectName(QString::fromUtf8("lineEditNumeradorR"));
        lineEditNumeradorR->setGeometry(QRect(430, 50, 61, 25));
        lineEditNumeradorR->setReadOnly(true);
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 90, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEditNumerador1 = new QLineEdit(groupBox);
        lineEditNumerador1->setObjectName(QString::fromUtf8("lineEditNumerador1"));
        lineEditNumerador1->setGeometry(QRect(50, 50, 61, 25));
        pushButtonExecutar = new QPushButton(groupBox);
        pushButtonExecutar->setObjectName(QString::fromUtf8("pushButtonExecutar"));
        pushButtonExecutar->setGeometry(QRect(550, 50, 89, 90));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 736, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEditNumerador1, lineEditDenominador1);
        QWidget::setTabOrder(lineEditDenominador1, lineEditNumerador2);
        QWidget::setTabOrder(lineEditNumerador2, lineEditDenominador2);
        QWidget::setTabOrder(lineEditDenominador2, pushButtonExecutar);
        QWidget::setTabOrder(pushButtonExecutar, lineEditNumeradorR);
        QWidget::setTabOrder(lineEditNumeradorR, lineEditDenominadorR);
        QWidget::setTabOrder(lineEditDenominadorR, pushButtonOperacao);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "RACIONAIS", nullptr));
        label->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButtonOperacao->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButtonExecutar->setText(QApplication::translate("MainWindow", "EXEUTAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

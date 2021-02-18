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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNumerador1;
    QLabel *label_3;
    QLineEdit *lineEditNumerador2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditDenominador1;
    QLabel *label_4;
    QLineEdit *lineEditDenominador2;
    QPushButton *pushButtonSoma;
    QPushButton *pushButtonSubtracao;
    QPushButton *pushButtonMultiplicacao;
    QPushButton *pushButtonDivisao;
    QPushButton *pushButtonIgualdade;
    QTextEdit *textEditResultado;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(461, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 418, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditNumerador1 = new QLineEdit(layoutWidget);
        lineEditNumerador1->setObjectName(QString::fromUtf8("lineEditNumerador1"));

        horizontalLayout->addWidget(lineEditNumerador1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditNumerador2 = new QLineEdit(layoutWidget);
        lineEditNumerador2->setObjectName(QString::fromUtf8("lineEditNumerador2"));

        horizontalLayout->addWidget(lineEditNumerador2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 421, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditDenominador1 = new QLineEdit(layoutWidget1);
        lineEditDenominador1->setObjectName(QString::fromUtf8("lineEditDenominador1"));

        horizontalLayout_2->addWidget(lineEditDenominador1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEditDenominador2 = new QLineEdit(layoutWidget1);
        lineEditDenominador2->setObjectName(QString::fromUtf8("lineEditDenominador2"));

        horizontalLayout_2->addWidget(lineEditDenominador2);

        pushButtonSoma = new QPushButton(centralWidget);
        pushButtonSoma->setObjectName(QString::fromUtf8("pushButtonSoma"));
        pushButtonSoma->setGeometry(QRect(90, 80, 31, 31));
        pushButtonSubtracao = new QPushButton(centralWidget);
        pushButtonSubtracao->setObjectName(QString::fromUtf8("pushButtonSubtracao"));
        pushButtonSubtracao->setGeometry(QRect(140, 80, 31, 31));
        pushButtonMultiplicacao = new QPushButton(centralWidget);
        pushButtonMultiplicacao->setObjectName(QString::fromUtf8("pushButtonMultiplicacao"));
        pushButtonMultiplicacao->setGeometry(QRect(190, 80, 31, 31));
        pushButtonDivisao = new QPushButton(centralWidget);
        pushButtonDivisao->setObjectName(QString::fromUtf8("pushButtonDivisao"));
        pushButtonDivisao->setGeometry(QRect(240, 80, 31, 31));
        pushButtonIgualdade = new QPushButton(centralWidget);
        pushButtonIgualdade->setObjectName(QString::fromUtf8("pushButtonIgualdade"));
        pushButtonIgualdade->setGeometry(QRect(290, 80, 31, 31));
        textEditResultado = new QTextEdit(centralWidget);
        textEditResultado->setObjectName(QString::fromUtf8("textEditResultado"));
        textEditResultado->setGeometry(QRect(30, 130, 381, 101));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 461, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CALCULADORA", nullptr));
        label->setText(QApplication::translate("MainWindow", "Numerador 1:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Numerador 2:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Denominador 1:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Denominador 2:", nullptr));
        pushButtonSoma->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButtonSubtracao->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButtonMultiplicacao->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButtonDivisao->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButtonIgualdade->setText(QApplication::translate("MainWindow", "==", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

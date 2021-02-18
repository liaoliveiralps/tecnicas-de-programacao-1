/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
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
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButtonSub;
    QPushButton *pushButtonMulti;
    QPushButton *pushButtonDiv;
    QPushButton *pushButtonRaiz;
    QPushButton *pushButtonPot;
    QLabel *label_7;
    QTextEdit *textEditrResultado;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNum1;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditNum2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditRaiz;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEditBase;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEditExpoente;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(514, 388);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 130, 91, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Indie Flower"));
        font.setPointSize(12);
        label_4->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 10, 75, 23));
        pushButtonSub = new QPushButton(centralWidget);
        pushButtonSub->setObjectName(QString::fromUtf8("pushButtonSub"));
        pushButtonSub->setGeometry(QRect(420, 10, 75, 23));
        pushButtonMulti = new QPushButton(centralWidget);
        pushButtonMulti->setObjectName(QString::fromUtf8("pushButtonMulti"));
        pushButtonMulti->setGeometry(QRect(300, 50, 75, 23));
        pushButtonDiv = new QPushButton(centralWidget);
        pushButtonDiv->setObjectName(QString::fromUtf8("pushButtonDiv"));
        pushButtonDiv->setGeometry(QRect(420, 50, 75, 23));
        pushButtonRaiz = new QPushButton(centralWidget);
        pushButtonRaiz->setObjectName(QString::fromUtf8("pushButtonRaiz"));
        pushButtonRaiz->setGeometry(QRect(350, 90, 75, 23));
        pushButtonPot = new QPushButton(centralWidget);
        pushButtonPot->setObjectName(QString::fromUtf8("pushButtonPot"));
        pushButtonPot->setGeometry(QRect(350, 140, 75, 23));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 193, 101, 20));
        label_7->setFont(font);
        textEditrResultado = new QTextEdit(centralWidget);
        textEditrResultado->setObjectName(QString::fromUtf8("textEditrResultado"));
        textEditrResultado->setGeometry(QRect(30, 210, 411, 111));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 241, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEditNum1 = new QLineEdit(widget);
        lineEditNum1->setObjectName(QString::fromUtf8("lineEditNum1"));

        horizontalLayout->addWidget(lineEditNum1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 50, 241, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEditNum2 = new QLineEdit(widget1);
        lineEditNum2->setObjectName(QString::fromUtf8("lineEditNum2"));

        horizontalLayout_2->addWidget(lineEditNum2);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 90, 216, 26));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        lineEditRaiz = new QLineEdit(widget2);
        lineEditRaiz->setObjectName(QString::fromUtf8("lineEditRaiz"));

        horizontalLayout_3->addWidget(lineEditRaiz);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(100, 120, 141, 26));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        lineEditBase = new QLineEdit(widget3);
        lineEditBase->setObjectName(QString::fromUtf8("lineEditBase"));

        horizontalLayout_4->addWidget(lineEditBase);

        widget4 = new QWidget(centralWidget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(100, 150, 171, 26));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);

        lineEditExpoente = new QLineEdit(widget4);
        lineEditExpoente->setObjectName(QString::fromUtf8("lineEditExpoente"));

        horizontalLayout_5->addWidget(lineEditExpoente);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 514, 21));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CALCULADORA", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Potencia\303\247\303\243o:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "soma", nullptr));
        pushButtonSub->setText(QCoreApplication::translate("MainWindow", "subtra\303\247\303\243o", nullptr));
        pushButtonMulti->setText(QCoreApplication::translate("MainWindow", "multiplica\303\247\303\243o", nullptr));
        pushButtonDiv->setText(QCoreApplication::translate("MainWindow", "divis\303\243o", nullptr));
        pushButtonRaiz->setText(QCoreApplication::translate("MainWindow", "calcular raiz", nullptr));
        pushButtonPot->setText(QCoreApplication::translate("MainWindow", "pot\303\252ncia", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "RESULTADO", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "N\303\272mero 1:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "N\303\272mero 2:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Raiz Quadrada:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "base:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "expoente:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonSubtracao;
    QPushButton *pushButtonDivisao;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditDenominador1;
    QLabel *label_4;
    QLineEdit *lineEditDenominador2;
    QPushButton *pushButtonMultiplicacao;
    QPushButton *pushButtonIgualdade;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNumerador1;
    QLabel *label_3;
    QLineEdit *lineEditNumerador2;
    QTextEdit *textEditResultadoN;
    QPushButton *pushButtonSoma;
    QFrame *line_2;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(687, 154);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonSubtracao = new QPushButton(centralwidget);
        pushButtonSubtracao->setObjectName(QString::fromUtf8("pushButtonSubtracao"));
        pushButtonSubtracao->setGeometry(QRect(470, 10, 21, 21));
        pushButtonDivisao = new QPushButton(centralwidget);
        pushButtonDivisao->setObjectName(QString::fromUtf8("pushButtonDivisao"));
        pushButtonDivisao->setGeometry(QRect(430, 70, 21, 21));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 381, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditDenominador1 = new QLineEdit(layoutWidget);
        lineEditDenominador1->setObjectName(QString::fromUtf8("lineEditDenominador1"));

        horizontalLayout_2->addWidget(lineEditDenominador1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEditDenominador2 = new QLineEdit(layoutWidget);
        lineEditDenominador2->setObjectName(QString::fromUtf8("lineEditDenominador2"));

        horizontalLayout_2->addWidget(lineEditDenominador2);

        pushButtonMultiplicacao = new QPushButton(centralwidget);
        pushButtonMultiplicacao->setObjectName(QString::fromUtf8("pushButtonMultiplicacao"));
        pushButtonMultiplicacao->setGeometry(QRect(450, 40, 21, 21));
        pushButtonIgualdade = new QPushButton(centralwidget);
        pushButtonIgualdade->setObjectName(QString::fromUtf8("pushButtonIgualdade"));
        pushButtonIgualdade->setGeometry(QRect(470, 70, 21, 21));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 10, 371, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditNumerador1 = new QLineEdit(layoutWidget_2);
        lineEditNumerador1->setObjectName(QString::fromUtf8("lineEditNumerador1"));

        horizontalLayout->addWidget(lineEditNumerador1);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditNumerador2 = new QLineEdit(layoutWidget_2);
        lineEditNumerador2->setObjectName(QString::fromUtf8("lineEditNumerador2"));

        horizontalLayout->addWidget(lineEditNumerador2);

        textEditResultadoN = new QTextEdit(centralwidget);
        textEditResultadoN->setObjectName(QString::fromUtf8("textEditResultadoN"));
        textEditResultadoN->setGeometry(QRect(520, 10, 121, 71));
        pushButtonSoma = new QPushButton(centralwidget);
        pushButtonSoma->setObjectName(QString::fromUtf8("pushButtonSoma"));
        pushButtonSoma->setGeometry(QRect(430, 10, 21, 21));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(300, 40, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(110, 40, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 687, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PROJETO RACIONAIS", nullptr));
        pushButtonSubtracao->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButtonDivisao->setText(QApplication::translate("MainWindow", "/", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Denominador 1:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Denominador 2:", nullptr));
        pushButtonMultiplicacao->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButtonIgualdade->setText(QApplication::translate("MainWindow", "==", nullptr));
        label->setText(QApplication::translate("MainWindow", "Numerador 1:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Numerador 2:", nullptr));
        pushButtonSoma->setText(QApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

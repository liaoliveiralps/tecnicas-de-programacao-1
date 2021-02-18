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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonSoma;
    QPushButton *pushButtonSub;
    QPushButton *pushButtonMulti;
    QPushButton *pushButtonDivi;
    QTextEdit *textEditResultado;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNumerador1;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditNumerador2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditDenominador1;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditDenominador2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(448, 210);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonSoma = new QPushButton(centralwidget);
        pushButtonSoma->setObjectName(QString::fromUtf8("pushButtonSoma"));
        pushButtonSoma->setGeometry(QRect(20, 80, 41, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        pushButtonSoma->setFont(font);
        pushButtonSub = new QPushButton(centralwidget);
        pushButtonSub->setObjectName(QString::fromUtf8("pushButtonSub"));
        pushButtonSub->setGeometry(QRect(80, 80, 41, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonSub->setFont(font1);
        pushButtonMulti = new QPushButton(centralwidget);
        pushButtonMulti->setObjectName(QString::fromUtf8("pushButtonMulti"));
        pushButtonMulti->setGeometry(QRect(20, 120, 41, 31));
        pushButtonMulti->setFont(font1);
        pushButtonDivi = new QPushButton(centralwidget);
        pushButtonDivi->setObjectName(QString::fromUtf8("pushButtonDivi"));
        pushButtonDivi->setGeometry(QRect(80, 120, 41, 31));
        pushButtonDivi->setFont(font1);
        textEditResultado = new QTextEdit(centralwidget);
        textEditResultado->setObjectName(QString::fromUtf8("textEditResultado"));
        textEditResultado->setGeometry(QRect(190, 80, 201, 71));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 201, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditNumerador1 = new QLineEdit(layoutWidget);
        lineEditNumerador1->setObjectName(QString::fromUtf8("lineEditNumerador1"));

        horizontalLayout->addWidget(lineEditNumerador1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 10, 207, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditNumerador2 = new QLineEdit(layoutWidget1);
        lineEditNumerador2->setObjectName(QString::fromUtf8("lineEditNumerador2"));

        horizontalLayout_2->addWidget(lineEditNumerador2);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 40, 201, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEditDenominador1 = new QLineEdit(layoutWidget2);
        lineEditDenominador1->setObjectName(QString::fromUtf8("lineEditDenominador1"));

        horizontalLayout_3->addWidget(lineEditDenominador1);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(220, 40, 201, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditDenominador2 = new QLineEdit(layoutWidget3);
        lineEditDenominador2->setObjectName(QString::fromUtf8("lineEditDenominador2"));

        horizontalLayout_4->addWidget(lineEditDenominador2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 448, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CALCULADORA DE FRA\303\207\303\225ES", nullptr));
        pushButtonSoma->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButtonSub->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButtonMulti->setText(QApplication::translate("MainWindow", "x", nullptr));
        pushButtonDivi->setText(QApplication::translate("MainWindow", "/", nullptr));
        label->setText(QApplication::translate("MainWindow", "Numerador 1:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Numerador 1:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Denominador 2:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Denominador 2:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNum1;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditNum2;
    QTableWidget *tableWidgetGrid;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(425, 495);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 20, 75, 23));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 191, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditNum1 = new QLineEdit(layoutWidget);
        lineEditNum1->setObjectName(QString::fromUtf8("lineEditNum1"));

        horizontalLayout->addWidget(lineEditNum1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 40, 191, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditNum2 = new QLineEdit(layoutWidget1);
        lineEditNum2->setObjectName(QString::fromUtf8("lineEditNum2"));

        horizontalLayout_2->addWidget(lineEditNum2);

        tableWidgetGrid = new QTableWidget(centralwidget);
        if (tableWidgetGrid->columnCount() < 2)
            tableWidgetGrid->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetGrid->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetGrid->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidgetGrid->rowCount() < 11)
            tableWidgetGrid->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetGrid->setVerticalHeaderItem(10, __qtablewidgetitem12);
        tableWidgetGrid->setObjectName(QString::fromUtf8("tableWidgetGrid"));
        tableWidgetGrid->setGeometry(QRect(30, 90, 361, 361));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 425, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PROJETO NATURAIS", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "executar", nullptr));
        label->setText(QApplication::translate("MainWindow", "N\303\272mero 1:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "N\303\272mero 2:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetGrid->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "1\302\272 N\303\232MERO", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetGrid->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "2\302\272 N\303\232MERO", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetGrid->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "FATORIAL", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetGrid->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "N\302\272 PERFEITO", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetGrid->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "PAL\303\215NDROMO", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetGrid->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "QUADRADO PERFEITO", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetGrid->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "N\302\272 PRIMO", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetGrid->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "BASE 10 P/ BASE 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetGrid->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "BASE 10 P/ BASE 8", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetGrid->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "BASE 10 P/ BASE 16", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetGrid->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "MDC", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetGrid->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "MMC", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetGrid->verticalHeaderItem(10);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "PRIMOS ENTRE SI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonExecutar_clicked()
{
    QString valor1 = "José das Cove";
    QString valor2 = "90";

    QTableWidgetItem *item1 = new QTableWidgetItem(valor1);
    QTableWidgetItem *item2 = new QTableWidgetItem(valor2);

    ui->tableWidgetGrid->setItem(0,0,item1);
    ui->tableWidgetGrid->setItem(0,1,item2);

    valor1 = "Teste da Grid";
    valor2 = "EOQ";
    item1 = new QTableWidgetItem(valor1);
    item2 = new QTableWidgetItem(valor2);
    ui->tableWidgetGrid->setItem(1,0,item1);
    ui->tableWidgetGrid->setItem(1,1,item2);


    valor1 = QString::number(std::sqrt(9));
    valor2 = QString::number(std::pow(2,2));
    item1 = new QTableWidgetItem(valor1);
    item2 = new QTableWidgetItem(valor2);
    ui->tableWidgetGrid->setItem(2,0,item1);
    ui->tableWidgetGrid->setItem(2,1,item2);
}

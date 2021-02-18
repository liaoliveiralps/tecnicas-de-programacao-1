#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //TP1::NComplexo numero1;
    //numero1.set(10, 8);
    //TP1::NComplexo numero2(5, 8);
    //TP1::NComplexo numero3;
    //numero3 = numero1.adicionar(numero2);

    TP1::NComplexo numero1 (ui->lineEditN1_real->text().toInt(), ui->lineEditN1_imag->text().toInt());
    TP1::NComplexo numero2 (ui->lineEditN2_real->text().toInt(), ui->lineEditN2_imag_2->text().toInt());
    TP1::NComplexo numero3;
    numero3 = numero1.adicionar(numero2);
    QString saida = "SOMA: ";
    saida += numero3.get();
    ui->textEditResultado->setText(saida);

}

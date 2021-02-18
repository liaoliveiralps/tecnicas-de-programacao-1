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


void MainWindow::on_pushButtonSoma_clicked()
{

        int numerador1 = ui->lineEditNumerador1->text().toInt();
        int denominador1 = ui->lineEditDenominador1->text().toInt();
        tp1::Fracao f1(numerador1,denominador1);
        int numerador2 = ui->lineEditNumerador2->text().toInt();
        int denominador2 = ui->lineEditDenominador2->text().toInt();
        tp1::Fracao f2(numerador2,denominador2);
        tp1::Fracao f3;
        f3 = f1.soma(f2);
        QString saida;
        saida = "Soma = "+ f3.mostra() + "\n";
        f3.simplifica();
        saida += "Soma = " + f3.mostra();
        ui->textEditResultado->setText(saida);

}
void MainWindow::on_pushButtonSub_clicked()
{
    int numerador1 = ui->lineEditNumerador1->text().toInt();
    int denominador1 = ui->lineEditDenominador1->text().toInt();
    tp1::Fracao f1(numerador1,denominador1);
    int numerador2 = ui->lineEditNumerador2->text().toInt();
    int denominador2 = ui->lineEditDenominador2->text().toInt();
    tp1::Fracao f2(numerador2,denominador2);
    tp1::Fracao f3;
    f3 = f1.subtrai(f2);
    QString saida;
    saida = "Subtração = "+ f3.mostra() + "\n";
    f3.simplifica();
    saida += "Subtração = " + f3.mostra();
    ui->textEditResultado->setText(saida);
}

void MainWindow::on_pushButtonMulti_clicked()
{
    int numerador1 = ui->lineEditNumerador1->text().toInt();
    int denominador1 = ui->lineEditDenominador1->text().toInt();
    tp1::Fracao f1(numerador1,denominador1);
    int numerador2 = ui->lineEditNumerador2->text().toInt();
    int denominador2 = ui->lineEditDenominador2->text().toInt();
    tp1::Fracao f2(numerador2,denominador2);
    tp1::Fracao f3;
    f3 = f1.multiplica(f2);
    QString saida;
    saida = "Multiplicação = " + f3.mostra() + "\n";
    f3.simplifica();
    saida += "Multiplicação = " + f3.mostra();
    ui->textEditResultado->setText(saida);
}

void MainWindow::on_pushButtonDivi_clicked()
{
    int numerador1 = ui->lineEditNumerador1->text().toInt();
    int denominador1 = ui->lineEditDenominador1->text().toInt();
    tp1::Fracao f1(numerador1,denominador1);
    int numerador2 = ui->lineEditNumerador2->text().toInt();
    int denominador2 = ui->lineEditDenominador2->text().toInt();
    tp1::Fracao f2(numerador2,denominador2);
    tp1::Fracao f3;
    f3 = f1.divide(f2);
    QString saida;
    saida = "Divisão = "+ f3.mostra() + "\n";
    f3.simplifica();
    saida += "Divisão = " + f3.mostra();
    ui->textEditResultado->setText(saida);
}

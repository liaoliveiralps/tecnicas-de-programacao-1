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
    try {
        int numerador1 = ui->lineEditNumerador1->text().toInt();
        int denominador1 = ui->lineEditDenominador1->text().toInt();
        lia::Racionais f1(numerador1,denominador1);
        int numerador2 = ui->lineEditNumerador2->text().toInt();
        int denominador2 = ui->lineEditDenominador2->text().toInt();
        lia::Racionais f2(numerador2,denominador2);
        lia::Racionais f3;
        f3 = f1.adicionar(f2);
        QString saida;
        f3.simplificacao();
        saida += "Soma = " + f3.mostra();
        ui->textEditResultadoN->setText(saida);

    } catch (QString erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}

void MainWindow::on_pushButtonSubtracao_clicked()
{
    try {
        int numerador1 = ui->lineEditNumerador1->text().toInt();
        int denominador1 = ui->lineEditDenominador1->text().toInt();
        lia::Racionais f1(numerador1,denominador1);
        int numerador2 = ui->lineEditNumerador2->text().toInt();
        int denominador2 = ui->lineEditDenominador2->text().toInt();
        lia::Racionais f2(numerador2,denominador2);
        lia::Racionais f3;
        f3 = f1.subtrair(f2);
        QString saida;
        f3.simplificacao();
        saida += "Subtração = " + f3.mostra();
        ui->textEditResultadoN->setText(saida);

    } catch (QString erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}

void MainWindow::on_pushButtonMultiplicacao_clicked()
{
    try {
        int numerador1 = ui->lineEditNumerador1->text().toInt();
        int denominador1 = ui->lineEditDenominador1->text().toInt();
        lia::Racionais f1(numerador1,denominador1);
        int numerador2 = ui->lineEditNumerador2->text().toInt();
        int denominador2 = ui->lineEditDenominador2->text().toInt();
        lia::Racionais f2(numerador2,denominador2);
        lia::Racionais f3;
        f3 = f1.multiplicar(f2);
        QString saida;
        f3.simplificacao();
        saida += "Multiplicação = " + f3.mostra();
        ui->textEditResultadoN->setText(saida);

    } catch (QString erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}

void MainWindow::on_pushButtonDivisao_clicked()
{
    try {
        int numerador1 = ui->lineEditNumerador1->text().toInt();
        int denominador1 = ui->lineEditDenominador1->text().toInt();
        lia::Racionais f1(numerador1,denominador1);
        int numerador2 = ui->lineEditNumerador2->text().toInt();
        int denominador2 = ui->lineEditDenominador2->text().toInt();
        lia::Racionais f2(numerador2,denominador2);
        lia::Racionais f3;
        f3 = f1.dividir(f2);
        QString saida;
        f3.simplificacao();
        saida += "Divisão = " + f3.mostra();
        ui->textEditResultadoN->setText(saida);


    } catch (QString erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}

void MainWindow::on_pushButtonIgualdade_clicked()
{
    try {
        int numerador1 = ui->lineEditNumerador1->text().toInt();
        int denominador1 = ui->lineEditDenominador1->text().toInt();
        lia::Racionais f1(numerador1,denominador1);
        int numerador2 = ui->lineEditNumerador2->text().toInt();
        int denominador2 = ui->lineEditDenominador2->text().toInt();
        lia::Racionais f2(numerador2,denominador2);
        bool f3;
        f1.simplificacao();
        f2.simplificacao();
        f3 = f1.igualdade(f2);
        QString saida;
        QString saida1;
        if(f3 == true)
            saida1 = "iguais.";
        else
            saida1 = "diferentes.";
        saida += "Igualdade = " + saida1;
        ui->textEditResultadoN->setText(saida);



    } catch (QString erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}

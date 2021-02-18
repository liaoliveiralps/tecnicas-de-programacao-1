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
    try {
        float num1 = ui->lineEditNum1->text().toFloat();
        float num2 = ui->lineEditNum2->text().toFloat();

        lia::Calculadora somando;
        somando.setNum1(num1);
        somando.setNum2(num2);
        float soma = somando.getNum1()+somando.getNum2();

        QString saida = "RESULTADO DA SOMA\n";
        saida+="Número 1: "+QString::number(somando.getNum1());
        saida+="\nNúmero 2: "+QString::number(somando.getNum2());
        saida+="\nSoma: "+QString::number(soma);

        ui->textEditrResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);

    }
}

void MainWindow::on_pushButtonSub_clicked()
{
    try {
        float num1 = ui->lineEditNum1->text().toFloat();
        float num2 = ui->lineEditNum2->text().toFloat();

        lia::Calculadora sub;
        sub.setNum1(num1);
        sub.setNum2(num2);
        float subtracao = sub.getNum1()-sub.getNum2();

        QString saida = "RESULTADO DA SUBTRAÇÃO\n";
        saida+="Número 1: "+QString::number(sub.getNum1());
        saida+="\nNúmero 2: "+QString::number(sub.getNum2());
        saida+="\nSubtração: "+QString::number(subtracao);

        ui->textEditrResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);

    }
}

void MainWindow::on_pushButtonMulti_clicked()
{
    try {
        float num1 = ui->lineEditNum1->text().toFloat();
        float num2 = ui->lineEditNum2->text().toFloat();

        lia::Calculadora mult;
        mult.setNum1(num1);
        mult.setNum2(num2);
        float multiplicacao = mult.getNum1()*mult.getNum2();

        QString saida = "RESULTADO DA MULTIPLICAÇÃO\n";
        saida+="Número 1: "+QString::number(mult.getNum1());
        saida+="\nNúmero 2: "+QString::number(mult.getNum2());
        saida+="\nMultiplicação: "+QString::number(multiplicacao);

        ui->textEditrResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);

    }
}

void MainWindow::on_pushButtonDiv_clicked()
{
    try {
        float num1 = ui->lineEditNum1->text().toFloat();
        float num2 = ui->lineEditNum2->text().toFloat();

        lia::Calculadora div;
        div.setNum1(num1);
        div.setNum2(num2);
        float divisao = div.getNum1()/div.getNum2();

        QString saida = "RESULTADO DA DIVISÃO\n";
        saida+="Número 1: "+QString::number(div.getNum1());
        saida+="\nNúmero 2: "+QString::number(div.getNum2());
        saida+="\nDivisão: "+QString::number(divisao);

        ui->textEditrResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);

    }
}

void MainWindow::on_pushButtonRaiz_clicked()
{
    try {
        float raiz = ui->lineEditRaiz->text().toFloat();

        lia::Calculadora eoq;
        eoq.setRaiz(raiz);
        float x = sqrt(eoq.getRaiz());

        QString saida = "DADOS DA RAIZ\n";
        saida+="Número: "+QString::number(eoq.getRaiz());
        saida+="\nRaiz quadrada: "+QString::number(x);

        ui->textEditrResultado->setText(saida);
    }
    catch (QString erro){
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonPot_clicked()
{
    try {
        float base = ui->lineEditBase->text().toFloat();
        int expo = ui->lineEditExpoente->text().toInt();

        lia::Calculadora potencia;
        potencia.setBase(base);
        potencia.setExpo(expo);

        float calpot = pow(potencia.getBase(),potencia.getExpo());
        QString saida = "DADOS DA POTENCIAÇÃO\n";
        saida +="Base: "+QString::number(potencia.getBase());
        saida+="\nExpoente: "+QString::number(potencia.getExpo());
        saida+="\nResultado da potenciação: "+QString::number(calpot);

        ui->textEditrResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);

    }
}

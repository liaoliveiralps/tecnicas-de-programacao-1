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



void MainWindow::on_pushButtonOperacao_clicked()
{
    contador = contador + 1;
    ui->line_3->setVisible(true);
    ui->lineEditDenominadorR->setVisible(true);
    ui->lineEditNumeradorR->setGeometry(ui->lineEditNumeradorR->geometry().x(),60,ui->lineEditNumeradorR->geometry().width(),ui->lineEditNumeradorR->geometry().height());

    if (contador == 5)
    {
        simbolo = "+";
        contador = 0;
    }

    if (contador == 4)
    {
        simbolo = "=";
        ui->line_3->setVisible(false);
        ui->lineEditDenominadorR->setVisible(false);
        ui->lineEditNumeradorR->setGeometry(ui->lineEditNumeradorR->geometry().x(),90,ui->lineEditNumeradorR->geometry().width(),ui->lineEditNumeradorR->geometry().height());
    }

    if (contador == 3)
        simbolo = "/";

    if (contador == 2)
        simbolo = "X";

    if (contador == 1)
        simbolo = "-";

    ui->pushButtonOperacao->setText(simbolo);
    ui->lineEditNumeradorR->clear();
    ui->lineEditDenominadorR->clear();
}

void MainWindow::on_pushButtonExecutar_clicked()
{
    try {

        if (simbolo != "=")
        {
            ui->line_3->setVisible(true);
            ui->lineEditDenominadorR->setVisible(true);
        }


        tp1::Racional num1;
        tp1::Racional num2;
        int numerador = 0, denominador = 0;
        numerador = (ui->lineEditNumerador1->text()).toInt();
        denominador = (ui->lineEditDenominador1->text()).toInt();

        num1.setNumerador(numerador);
        num1.setDenominador(denominador);

        numerador = (ui->lineEditNumerador2->text()).toInt();
        denominador = (ui->lineEditDenominador2->text()).toInt();

        num2.setNumerador(numerador);
        num2.setDenominador(denominador);


        tp1::Racional resultado;

        if (simbolo == "+")
            resultado = num1.adicionarRacional(num2);
        if (simbolo == "-")
            resultado = num1.subtrairRacional(num2);
        if (simbolo == "X")
            resultado = num1.multiplicarRacional(num2);
        if (simbolo == "/")
            resultado = num1.dividirRacional(num2);
        if (simbolo == "=")
        {
            bool resultadoLogico = false;
            resultadoLogico = num1.igualdadeRacional(num2);

            if (resultadoLogico)
                ui->lineEditNumeradorR->setText("V");
            else
                ui->lineEditNumeradorR->setText("F");
        }



        if (simbolo != "=")
        {
            ui->lineEditNumeradorR->setText(QString::number(resultado.getNumerador()));
            ui->lineEditDenominadorR->setText(QString::number(resultado.getDenominador()));
        }





    } catch (QString erro) {
        QMessageBox msg;
        msg.setText(erro);
        msg.exec();

    }


}

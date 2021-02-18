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
        int ladoA = ui->lineEditLadoA->text().toInt();
        int ladoB = ui->lineEditLadoB->text().toInt();
        int ladoC = ui->lineEditLadoC->text().toInt();
        lia::Triangulo cleo;
        cleo.setLados(ladoA,ladoB,ladoC);
        QString saida = "DADOS DO TRIÂNGULO\n";
        saida+="Lado A: "+QString::number(cleo.getLadoA());
        saida+="\nLado B: "+QString::number(cleo.getLadoB());
        saida+="\nLado C: "+QString::number(cleo.getLadoC());
        saida+="\nÁrea: "+QString::number(cleo.area());
        saida+="\nTipo de triângulo em relação aos lados: "+cleo.tipoLado();
        saida+="\nTipo de triângulo em relação aos ângulos: "+cleo.tipoAngulo();
        ui->textEditResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

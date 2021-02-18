#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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

void MainWindow::on_pushButtonExecutar_clicked()
{
    try {
       QString nome=ui->lineEditNome->text();
       int peso=ui->lineEditPeso->text().toInt();
       float altura=ui->lineEditAltura->text().toFloat();
       QString sexo=ui->lineEditSexo->text();

       tp1::Pessoa p;
       p.setNome(nome);
       p.setPeso(peso);
       p.setAltura(altura);
       p.setSexo(sexo);

       QString saida="Dados da Pessoa\n";
       saida+="Nome: " + p.getNome() + "\n";
       saida+="Peso: " + QString::number(p.getPeso()) + "\n";
       saida+="Altura: " + QString::number(p.getAltura()) + "\n";
       saida+="Sexo: " + p.getSexo() + "\n";
       saida+="IMC: " + QString::number(p.imc()) + "\n";

       ui->textEdit->setText(saida);

    } catch (QString erro) {
        QMessageBox::information(this,"Erro",erro);
    }
}

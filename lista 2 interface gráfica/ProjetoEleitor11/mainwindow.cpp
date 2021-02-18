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
        QString nome = ui->lineEditNome->text();
        int data = ui->lineEditData->text().toInt();

        lia::Eleitor qualquer;
        qualquer.setNome(nome);
        qualquer.setData(data);

        QString saida = "DADOS DO ELEITOR\n";
        saida+="Nome: "+qualquer.getNome();
        saida+="\nIdade: "+QString::number(qualquer.getData());
        saida+="\nTipo de eleitor: "+qualquer.tipoeleitor();

        ui->textEdit->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

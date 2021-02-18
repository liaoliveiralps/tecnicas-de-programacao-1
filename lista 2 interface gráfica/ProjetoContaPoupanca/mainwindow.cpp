#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditSaldo->setEnabled(false);
    ui->lineEditValor->setEnabled(false);
    ui->pushButtonSacar->setEnabled(false);
    ui->pushButtonDepositar->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    try {
        cp.setNome(ui->lineEditNome->text());
        cp.setNumeroDaConta(ui->lineEditNumConta->text().toInt());
        cp.setAgencia(ui->lineEditAgencia->text().toInt());
        QString saida = "R$ " + QString::number(cp.getSaldo());
        ui->lineEditSaldo->setText(saida);

        ui->lineEditNome->setEnabled(false);
        ui->lineEditAgencia->setEnabled(false);
        ui->lineEditNumConta->setEnabled(false);
        ui->pushButton->setEnabled(false);
        ui->pushButtonSacar->setEnabled(true);
        ui->pushButtonDepositar->setEnabled(true);
        ui->lineEditValor->setEnabled(true);

    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonDepositar_clicked()
{
    try {
        float valor = ui->lineEditValor->text().toFloat();
        cp.depositar(valor);
        QString saida = "R$ " + QString::number(cp.getSaldo());
        ui->lineEditSaldo->setText(saida);
        ui->lineEditValor->clear();
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonSacar_clicked()
{
    try {
        float valor = ui->lineEditValor->text().toFloat();
        cp.sacar(valor);
        QString saida = "R$ " + QString::number(cp.getSaldo());
        ui->lineEditSaldo->setText(saida);
        ui->lineEditValor->clear();
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

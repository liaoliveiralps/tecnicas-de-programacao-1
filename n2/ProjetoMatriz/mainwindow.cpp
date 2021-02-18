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


void MainWindow::on_pushButton_clicked()
{
    try {
        int linha = ui->lineEdit_linhaA->text().toInt();
        int coluna = ui->lineEdit_colunaA->text().toInt();

        tp1::Matriz teste(linha, coluna);

    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}

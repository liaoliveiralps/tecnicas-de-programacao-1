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
        float comprimento = ui->lineEditComprimento->text().toFloat();
        float largura = ui->lineEditLargura->text().toFloat();

        lia::Retangulo quadrado;
        quadrado.setComp(comprimento);
        quadrado.setLarg(largura);

        QString saida = "DADOS DO RETÂNGULO\n";
        saida+="Comprimento: " + QString::number(quadrado.getComp()) + "\n";
        saida+="Largura: " + QString::number(quadrado.getLarg()) + "\n";
        saida+="Área: " + QString::number(quadrado.area()) + "\n";
        saida+="Perímetro: " + QString::number(quadrado.perimetro()) + "\n";

        ui->textEditResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

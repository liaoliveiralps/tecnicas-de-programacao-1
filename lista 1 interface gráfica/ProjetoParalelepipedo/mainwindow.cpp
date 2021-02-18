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
        float altura = ui->lineEditAltura->text().toFloat();
        float largura = ui->lineEditLargura->text().toFloat();
        float comprimento = ui->lineEditComprimento->text().toFloat();

        lia::Paralelepipedo eoq;
        eoq.setAltura(altura);
        eoq.setLargura(largura);
        eoq.setComprimento(comprimento);

        QString saida = "DADOS DO PARALELEPÍPEDO\n";
        saida+="Altura : " + QString::number(eoq.getAltura()) + "\n";
        saida+="Largura: "+QString::number(eoq.getLargura())+"\n";
        saida+="Comprimento: "+QString::number(eoq.getComprimento())+"\n";
        saida+="Volume: "+QString::number(eoq.volume())+"\n";
        saida+="Área: "+QString::number(eoq.area())+"\n";

        ui->textEditResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

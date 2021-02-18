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
        lia::Paciente p1;
        p1.setNome(ui->lineEditNome->text());
        p1.setPeso(ui->lineEditPeso->text().toInt());
        p1.setAltura(ui->lineEditAltura->text().toFloat());

        QString saida="DADOS DO PACIENTE:\n";
        saida+="Nome: " + p1.getNome() + "\n";
        saida+="Peso: " + QString::number(p1.getPeso()) + "\n";
        saida+="Altura: " + QString::number(p1.getAltura()) + "\n";
        saida+="IMC: " + QString::number(p1.imc()) + "\n";
        saida+="Faixa Peso: " + p1.faixaPeso();
        ui->textEditResultado->setText(saida);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

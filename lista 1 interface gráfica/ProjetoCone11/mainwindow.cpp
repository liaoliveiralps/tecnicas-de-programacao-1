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
        float raio=ui->lineEditRaio->text().toFloat();
        float altura=ui->lineEditAltura->text().toFloat();

        lia::Cone casquinha;
        casquinha.setRaio(raio);
        casquinha.setAltura(altura);

        QString saida="DADOS DO CONE\n";
        saida+="Raio: "+QString::number(casquinha.getRaio());
        saida+="\nAltura"+QString::number(casquinha.getAltura());
        saida+="\nGeratriz: "+QString::number(casquinha.geratriz());
        saida+="\nÁrea lateral: "+QString::number(casquinha.areal());
        saida+="\nÁrea Total: "+QString::number(casquinha.areat());
        saida+="\nVolume: "+QString::number(casquinha.volume());

        ui->textEditResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

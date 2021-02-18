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
        float raio = ui->lineEditRaio->text().toFloat();
        float altura = ui->lineEditAltura->text().toFloat();

        lia::Cilindro q;
        q.setRaio(raio);
        q.setAltura(altura);

        QString saida="DADOS DO CILINDRO\n";
        saida+="Raio: " + QString::number(q.getRaio())+"\n";
        saida+="Altura: "+QString::number(q.getAltura())+"\n";
        saida+="Área Lateral: "+QString::number(q.areal())+"\n";
        saida+="Área Total: "+QString::number(q.areat())+"\n";
        saida+="Volume: "+QString::number(q.volume())+"\n";

        ui->textEditResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);

    }
}

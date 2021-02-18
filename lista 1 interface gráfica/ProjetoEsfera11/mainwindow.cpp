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

        lia::Esfera globo;
        globo.setRaio(raio);

        QString saida="DADOS DA ESFERA\n";
        saida+="Raio: " + QString::number(globo.getRaio()) + "\n";
        saida+="Cálculo da área: " + QString::number(globo.area()) + "\n";
        saida+="Cálculo do volume: " + QString::number(globo.volume()) + "\n";

        ui->textEditResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);

    }
}

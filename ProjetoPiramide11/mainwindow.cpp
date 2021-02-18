#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <piramide.h>
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
void MainWindow::on_pushButtonCalcular_clicked()
{
    try {
        float base=ui->lineEditBase->text().toFloat();
        float altura=ui->lineEditAltura->text().toFloat();

        lia::Piramide cleo;
        cleo.setBase(base);
        cleo.setAltura(altura);

        QString saida="Dados da Piramide\n";
        saida+="Base: " + QString::number(cleo.getBase()) + "\n";
        saida+="Altura: " + QString::number(cleo.getAltura()) + "\n";
        saida+="Volume: " + QString::number(cleo.volume()) + "\n";

        ui->textEditResultado->setText(saida);

    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);

    }{}
}

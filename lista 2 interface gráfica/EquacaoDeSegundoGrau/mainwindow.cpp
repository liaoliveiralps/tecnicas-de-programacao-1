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
       int a = ui->lineEditA->text().toInt();
       int b = ui->lineEditB->text().toInt();
       int c = ui->lineEditC->text().toInt();

       lia::Equacao eoq;
       eoq.setA(a);
       eoq.setB(b);
       eoq.setC(c);
       QString saida="DADOS DA EQUAÇÃO\n";
       saida+="Coeficiente A: "+QString::number(eoq.getA());
       saida+="\nCoeficiente B: "+QString::number(eoq.getB());
       saida+="\nCoeficiente C: "+QString::number(eoq.getC());
       saida+="\nValor do delta: "+QString::number(eoq.delta());
       if(eoq.delta()==0){
           QString r="\nExiste apenas uma raiz real";
           saida+=r+"\nValor de X: "+QString::number(eoq.raiz1());
       }
       else if(eoq.delta()<0){
           QString r="\nNão existe raiz real";
           saida+=r;
       }
       else {
          saida+="\nValor de X1: "+QString::number(eoq.raiz1());
          saida+="\nValor de X2: "+QString::number(eoq.raiz2());
       }
       ui->textEditResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

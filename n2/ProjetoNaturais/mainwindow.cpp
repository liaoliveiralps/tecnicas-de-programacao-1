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
        //FATORIAL//
        lia::Naturais num1;
        lia::Naturais num3;
        num1 = ui->lineEditNum1->text().toLong();
        num1.set(num1);
        num3 = num1.calculoFatorial();
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(num3.get()));
        ui->tableWidgetGrid->setItem(0,0,item1);

        lia::Naturais num2;
        num2 = ui->lineEditNum2->text().toLong();
        num2.set(num2);
        num3 = num2.calculoFatorial();
        item1 = new QTableWidgetItem(QString::number(num3.get()));
        ui->tableWidgetGrid->setItem(0,1,item1);

        //NUMERO PERFEITO//
        QString saida;
        if(num1.numPerfeito()==true)
            saida = "sim";
        else
            saida = "não";
        QTableWidgetItem *item2 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(1,0,item2);

        if(num2.numPerfeito()==true)
            saida = "sim";
        else
            saida = "não";
        item2 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(1,1,item2);

        //CAPICUIA//
        if(num1.capicuia()==true)
            saida = "sim";
        else
            saida = "não";
        QTableWidgetItem *item3 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(2,0,item3);

        if(num2.capicuia()==true)
            saida = "sim";
        else
            saida = "não";
        item3 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(2,1,item3);

        //QUADRADO PERFEITO//
        if(num1.quadradoPerfeito()==true)
            saida = "sim";
        else
            saida = "não";
        QTableWidgetItem *item4 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(3,0,item4);

        if(num2.quadradoPerfeito()==true)
            saida = "sim";
        else
            saida = "não";
        item4 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(3,1,item4);

        //NUMERO PRIMO//
        if(num1.numPrimo()==true)
            saida = "sim";
        else
            saida = "não";
        QTableWidgetItem *item5 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(4,0,item5);

        if(num2.numPrimo()==true)
            saida = "sim";
        else
            saida = "não";
        item5 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(4,1,item5);

        //MUDANÇA DE BASES//
        QString b1, b2, b3, b4, b5, b6;
        b1+=num1.mudarBase(2);
        b2+=num2.mudarBase(2);

        QTableWidgetItem *item6 = new QTableWidgetItem(b1);
        ui->tableWidgetGrid->setItem(5,0,item6);
        QTableWidgetItem *item7 = new QTableWidgetItem(b2);
        ui->tableWidgetGrid->setItem(5,1,item7);

        b3 = num1.mudarBase(8);
        b4 = num2.mudarBase(8);

        item6 = new QTableWidgetItem(b3);
        item7 = new QTableWidgetItem(b4);
        ui->tableWidgetGrid->setItem(6,0,item6);
        ui->tableWidgetGrid->setItem(6,1,item7);

        b5 += num1.mudarBase(16);
        b6 += num2.mudarBase(16);
        item6 = new QTableWidgetItem(b5);
        item7 = new QTableWidgetItem(b6);
        ui->tableWidgetGrid->setItem(7,0,item6);
        ui->tableWidgetGrid->setItem(7,1,item7);

        //CALCULO DO MDC//
        lia::Naturais mdc;
        mdc = num1.calculoMDC(num2);
        QTableWidgetItem *item8 = new QTableWidgetItem(QString::number(mdc.get()));
        ui->tableWidgetGrid->setItem(8,0,item8);
        item8 = new QTableWidgetItem(QString::number(mdc.get()));
        ui->tableWidgetGrid->setItem(8,1,item8);

        //CALCULO DO MMC//
        lia::Naturais mmc;
        mmc = num1.calculoMMC(num2);
        QTableWidgetItem *item9 = new QTableWidgetItem(QString::number(mmc.get()));
        ui->tableWidgetGrid->setItem(9,0,item9);
        item9 = new QTableWidgetItem(QString::number(mmc.get()));
        ui->tableWidgetGrid->setItem(9,1,item9);

        //PRIMOS ENTRE SI//
        if(num1.primosEntreSi(num2)==true)
            saida = "sim";
        else
            saida = "não";
        QTableWidgetItem *item10 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(10,0,item10);
        item10 = new QTableWidgetItem(saida);
        ui->tableWidgetGrid->setItem(10,1,item10);
    } catch (QString erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}

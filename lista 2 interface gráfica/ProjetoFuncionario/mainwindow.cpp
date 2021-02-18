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
       QString nome = ui->lineEditNome->text();
       float salarioDoMes = ui->lineEditSalario->text().toFloat();
       int numerDeFilhos = ui->lineEditfFilhos->text().toInt();
       float aumento = ui->lineEditAumento->text().toFloat();

       lia::Funcionario jao;
       jao.setNome(nome);
       jao.setSalarioDoMes(salarioDoMes);
       jao.setNumerodeFilhos(numerDeFilhos);
       jao.setAumentoSalarial(aumento);

       QString saida = "DADOS DO FUNCIONÁRIO\n";
       saida += "Nome: " + jao.getNome();
       saida += "\nSalário do Mês: " + QString::number(jao.getSalarioDoMes());
       saida += "\nNúmero de filhos: " + QString::number(jao.getNumeroDeFilhos());
       saida += "\nAumento Salarial: " + QString::number(jao.getAumentoSalarial());
       saida += "\nSalário Bruto: " +QString::number(jao.getSalarioBruto());
       saida +="\nINSS: " + QString::number(jao.calculoInss());
       saida +="\nImposto de Renda: " + QString::number(jao.calculoIR());
       saida +="\nIRPF: " + QString::number(jao.calculoIRPF());
       saida +="\nSalário Liquido: " + QString::number(jao.getSalarioBruto()-(jao.calculoIR()+jao.calculoIRPF()+jao.calculoInss()));

       ui->textEditResultado->setText(saida);
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

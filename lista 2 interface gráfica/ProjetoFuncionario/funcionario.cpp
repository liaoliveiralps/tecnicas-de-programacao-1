#include "funcionario.h"
namespace lia{
Funcionario::Funcionario():
    nome(""),
    salarioDoMes(0),
    numeroDeFilhos(0),
    aumentoSalarial(0)
{

}
void Funcionario::setNumerodeFilhos(int filhos){
    if (filhos<0)
        throw QString("O número de filhos não pode ser negativo.");
    numeroDeFilhos=filhos;
}
void Funcionario::setSalarioDoMes(float salario1){
    if (salario1<=0)
        throw QString("Valor de salário inválido.");
    salarioDoMes=salario1;
}
void Funcionario::setAumentoSalarial(float aumento){
    if (aumento<0)
        throw QString("Aumento salarial não pode ser negativo");
    aumentoSalarial=aumento/100;
}
float Funcionario::calculoIR()const{
    float ir=0;
    if (getSalarioBruto()<=1903.98)
        ir=0;
    else if (getSalarioBruto()>1903.98&&getSalarioBruto()<=2826.65)
        ir=0.075*getSalarioBruto();
    else if (getSalarioBruto()>2826.65&&getSalarioBruto()<=3751.05)
        ir=0.15*getSalarioBruto();
    else if (getSalarioBruto()>3751.05&&getSalarioBruto()<=4664.68)
        ir=0.225*getSalarioBruto();
    else if (getSalarioBruto()>4664.68)
        ir=0.275*getSalarioBruto();
    return ir;
}
float Funcionario::calculoInss()const{
    float inss=0;
    if(getSalarioBruto()<=2545.00)
        inss = getSalarioBruto()*0.10;
    if (getSalarioBruto()>2545.00){
        float x = getSalarioBruto()-2545.00;
        inss += x*0.1;
    }
    return inss;
}
}

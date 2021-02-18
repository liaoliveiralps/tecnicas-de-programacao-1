#include "paciente.h"
namespace lia{
void Paciente::setPeso(int peso){
     if (peso<=0)
        throw QString("Peso não pode ser negativo ou igual a 0.");
     this->peso=peso;
}
void Paciente::setAltura(float altura){
    if (altura<=0)
        throw QString("Altura não pode ser negativa ou igual a 0.");
    this->altura=altura;
}
QString Paciente::faixaPeso()const{
    float imc= this->imc();
    if (imc<20)
        return QString("abaixo do peso ideal.");
    if (imc<=20)
        return QString("peso normal.");
    if (imc<=30)
        return QString("excesso de peso.");
    if (imc<=35)
        return QString("obesidade.");
    return QString("obesidade mórbida.");
}
Paciente::Paciente():
    nome(""),
    peso(0),
    altura(0)
{

}
}

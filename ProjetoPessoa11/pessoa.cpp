#include "pessoa.h"
namespace tp1{
void Pessoa::setPeso(int peso)
{
    if (peso<=0)
        throw QString ("Peso nao pode ser negativo ou igual a 0");
    this->peso = peso;
}

void Pessoa::setAltura(float altura)
{
    if (altura<=0)
        throw QString("Peso nao pode ser negativo ou igual a 0");
    this->altura = altura;
}

Pessoa::Pessoa():
    nome(""),
    peso(0),
    altura(0),
    sexo("")
{
}
}

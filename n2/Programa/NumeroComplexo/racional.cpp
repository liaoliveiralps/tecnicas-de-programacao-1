#include "racional.h"

namespace tp1 {

Racional::Racional():
    numerador(0),
    denominador(0)
{

}


Racional::Racional(int numerador, int denominador)
{
    setNumerador(numerador);
    setDenominador(denominador);
}


void Racional::setDenominador(int denominador)
{
     if (denominador == 0)
         throw QString("Denominador nao pode ser 0");

     this->denominador = denominador;
}

int Racional::gerarNumeroPrimo(int posicao)
{
    if (posicao >= 0) throw QString("posicao tem que ser >= 0");

    int primo = 0, numero = 2, verificador = 2, divisores = 2;

        for (int i = 0; i < posicao;)
        {
            for (;verificador < numero; verificador++)
            {
                if (numero % verificador == 0)
                    divisores++;

                if (divisores > 2 || (verificador*2) > numero)
                    verificador = numero + 1;//sai do loop
            }

            if (divisores == 2)
            {
                primo = numero;
                i++;
            }

            numero++;
            divisores = 2;
            verificador = 2;
        }


        return primo;
}

void Racional::reduzirRacional()
{

    for(int i = 2; std::abs(this->numerador) >= i && std::abs(this->denominador) >= i;)
    {
        if (this->numerador % i == 0 && this->denominador % i == 0)
        {
            this->numerador = this->numerador / i;
            this->denominador = this->denominador / i;
        }
        else
            i++;
    }

    if (this->numerador <= 0 && this->denominador < 0)
    {
        this->numerador = std::abs(this->numerador);
        this->denominador = std::abs(this->denominador);
    }

    if (this->numerador > 0 && denominador < 0)
    {
        this->denominador = std::abs(denominador);
        this->numerador = - this->numerador;
    }
}

int Racional::calcularMmc(int num1, int num2)
{
    int mmc = 1;
    int primoAtual = 1;

    for (int i = 0; num1 > 1 || num2 > 1;i++)
    {
         primoAtual = gerarNumeroPrimo(i + 1);

        if (num1 % primoAtual == 0 || num2 % primoAtual == 0)
            mmc = mmc * primoAtual;

        if (num1 % primoAtual == 0)
            num1 = num1 / primoAtual;

        if (num2 % primoAtual == 0)
            num2 = num2 / primoAtual;
    }

    return mmc;
}

Racional Racional::adicionarRacional(Racional numeroRacional)
{
    Racional num;

    if (this->denominador == numeroRacional.denominador)
    {
        num.numerador = this->numerador + numeroRacional.numerador;
        num.denominador = this->denominador;

    }
    else
    {
        //num.denominador = calcularMmc(this->denominador, numeroRacional.denominador);
        //num.numerador = (num.denominador / this->denominador) * this->numerador + (num.denominador / numeroRacional.denominador) * numeroRacional.numerador;
        num.denominador = this->denominador * numeroRacional.denominador;
        num.numerador = (((num.denominador)/this->denominador) * this->numerador) + ((num.denominador/numeroRacional.denominador)*numeroRacional.numerador);
    }

    num.reduzirRacional();
    return num;
}

Racional Racional::subtrairRacional(Racional numeroRacional)
{
    Racional num;

    if (this->denominador == numeroRacional.denominador)
    {
        num.numerador = this->numerador - numeroRacional.numerador;
        num.denominador = this->denominador;

    }
    else
    {
        //num.denominador = calcularMmc(this->denominador, numeroRacional.denominador);
        //num.numerador = (num.denominador / this->denominador) * this->numerador - (num.denominador / numeroRacional.denominador) * numeroRacional.numerador;
        num.denominador = this->denominador * numeroRacional.denominador;
        num.numerador = (((num.denominador)/this->denominador) * this->numerador) - ((num.denominador/numeroRacional.denominador)*numeroRacional.numerador);

    }


    num.reduzirRacional();
    return num;
}

Racional Racional::multiplicarRacional(Racional numeroRacional)
{
    Racional num;
    num.numerador = this->numerador * numeroRacional.numerador;
    num.denominador = this->denominador * numeroRacional.denominador;
    num.reduzirRacional();
    return num;
}

Racional Racional::dividirRacional(Racional numeroRacional)
{
    Racional num;
    num.numerador = this->numerador * numeroRacional.denominador;
    num.denominador = this->denominador * numeroRacional.numerador;
    num.reduzirRacional();
    return num;
}

bool Racional::igualdadeRacional(Racional numeroRacional)
{
    bool igualdade = false;
    this->reduzirRacional();
    numeroRacional.reduzirRacional();

    if (this->numerador == numeroRacional.numerador && this->denominador == numeroRacional.denominador)
        igualdade = true;

    return igualdade;
}



}

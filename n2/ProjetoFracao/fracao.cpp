#include "fracao.h"
namespace tp1{
Fracao::Fracao():
    numerador(0),
    denominador(0)
{

}
Fracao::Fracao(int n, int d):
    numerador(n),
    denominador(d)
{

}
Fracao Fracao::multiplica(Fracao fator2){
        Fracao produto(0,1);
        produto.numerador = this->numerador * fator2.numerador;
        produto.denominador = this->denominador * fator2.denominador;
        return produto;
    }
Fracao Fracao::divide(Fracao divisor){
        Fracao quociente(0,1);
        quociente.numerador = this->numerador * divisor.denominador;
        quociente.denominador = this->denominador * divisor.numerador;
        return quociente;
    }
Fracao Fracao::soma(Fracao parcela2){
        Fracao total(0,1);
        total.denominador = this->denominador * parcela2.denominador;
        total.numerador = this->numerador*parcela2.denominador + parcela2.numerador*this->denominador;
        return total;
    }
Fracao Fracao::subtrai(Fracao subtraendo){
        Fracao aux(-subtraendo.numerador, subtraendo.denominador);
        return this->soma(aux);
    }

void Fracao::simplifica(){
    int aux;
    aux = this->mdc();
    this->numerador /= aux;
    this->denominador /= aux;
}

int Fracao::mdc(){ //Algoritmo de Euclides
        int dividendo, divisor, resto;
        dividendo = abs(this->numerador);
        divisor = abs(this->denominador);
        resto = dividendo%divisor;
        while (resto!=0) {
            dividendo = divisor;
            divisor = resto;
            resto = dividendo%divisor;
        }
        return divisor;
    }

QString Fracao::mostra(){
        QString result;
        result += QString::number(this->numerador) +'/' + QString::number(this->denominador);
        return result;
    }
}

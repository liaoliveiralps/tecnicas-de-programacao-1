#include "racionais.h"
namespace lia{
Racionais::Racionais():
    numerador(0),
    denominador(0)
{

}
Racionais::Racionais(int numerador1, int denominador1){
    setNumerador(numerador1);
    setDenominador(denominador1);
}
void Racionais::setDenominador(int denominador1) {
    if(denominador1==0)
        throw QString("Denominador não pode ser negativo.");
    denominador = denominador1;
}
int Racionais::mdc(){
    int dividendo;
    int divisor;
    int resto;
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
Racionais Racionais::adicionar(Racionais objeto){
    Racionais total;
    total.denominador = this->denominador * objeto.denominador;
    total.numerador = this->numerador*objeto.denominador + objeto.numerador*this->denominador;
    return total;
}
Racionais Racionais::subtrair(Racionais objeto){
    Racionais aux(-objeto.numerador, objeto.denominador);
    return this->adicionar(aux);
}
Racionais Racionais::multiplicar(Racionais objeto){
    Racionais produto;
    produto.numerador = this->numerador * objeto.numerador;
    produto.denominador = this->denominador * objeto.denominador;
    return produto;
}
Racionais Racionais::dividir(Racionais objeto){
    Racionais quociente;
    quociente.numerador = this->numerador * objeto.denominador;
    quociente.denominador = this->denominador * objeto.numerador;
    return quociente;
}
bool Racionais::igualdade(Racionais objeto){
    if(numerador==objeto.numerador and denominador==objeto.denominador)
        return true;
    else
        return false;
}
void Racionais::simplificacao(){
    int aux;
    aux = this->mdc();
    this->numerador /= aux;
    this->denominador /= aux;
}
QString Racionais::mostra(){
        QString result;
        result += QString::number(this->numerador) +'/' + QString::number(this->denominador);
        return result;
    }
}

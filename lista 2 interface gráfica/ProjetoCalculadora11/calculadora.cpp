#include "calculadora.h"
namespace lia{
Calculadora::Calculadora():
    num1(0),
    num2(0),
    raiz(0),
    base(0),
    expoente(0)
{

}
void Calculadora::setNum2(float numero2){
    if (numero2==0)
        throw QString("Não existe divisão por zero.");
    num2=numero2;
}
void Calculadora::setRaiz(float raiz1){
    if (raiz1<0)
        throw QString("Não existe raiz real de números negativos.");
    raiz=raiz1;
}
}

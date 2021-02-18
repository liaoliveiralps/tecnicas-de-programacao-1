#include "poupanca.h"
namespace lia{
Poupanca::Poupanca():
    nome(""),
    numeroDaConta(0),
    agencia(0),
    saldo(0)
{

}
float Poupanca::sacar(float valor){
    if (valor<=0)
        throw QString("valor do saque não disponível");
    if (valor>saldo)
        throw QString("Falta de dinheiro");
    saldo=saldo-valor;
    return valor;
}
void Poupanca::depositar(float valor){
    if (valor<=0)
        throw QString("Valor do deposito não pode ser <=0");
    saldo=saldo+valor;
}
}

#ifndef POUPANCA_H
#define POUPANCA_H

#include <QString>
namespace lia{
class Poupanca
{
private:
    QString nome;
    int numeroDaConta;
    int agencia;
    float saldo;
public:
    Poupanca();
    QString getNome()const{return nome;}
    void setNome(QString nome1){nome=nome1;}
    int getNumeroDaConta()const{return numeroDaConta;}
    void setNumeroDaConta(int NumeroDaConta1){numeroDaConta=NumeroDaConta1;}
    int getAgencia()const{return agencia;}
    void setAgencia(int agencia1){agencia=agencia1;}
    float getSaldo()const{return saldo;}

    float sacar(float valor);
    void depositar(float valor);

};
}
#endif // POUPANCA_H

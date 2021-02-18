#ifndef CONTA_H
#define CONTA_H
#include <string>
namespace lia{
class conta
{
private:
    std::string nome;
    int numconta;
    int agencia;
    float saldo;
    float deposito;
    float saque;
public:
    conta();
    std::string getNome()const{return nome;}
    int getConta()const{return numconta;}
    int getAgencia()const{return agencia;}
    float getSaldo()const{return saldo;}
    float getDeposito()const{return deposito;}
    float getSaque()const{return saque;}
    void setNome(std::string nome){this->nome=nome;}
    void setConta(int numconta){this->numconta=numconta;}
    void setAgencia(int agencia){this->agencia=agencia;}
    void setSaldo(float saldo){this->saldo=saldo;}
    void setDeposito(float dep){deposito=dep;}
    void setSaque(float saq){saque=saq;
         if (saque>saldo)
             throw std::string ("\nValor de saque indisponivel.");
                            }
};
}
#endif // CONTA_H

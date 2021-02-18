#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <QString>
namespace lia{
class Funcionario
{
private:
    QString nome;
    float salarioDoMes;
    int numeroDeFilhos;
    float aumentoSalarial;
public:
    Funcionario();
    QString getNome()const{return nome;}
    float getSalarioDoMes()const{return salarioDoMes;}
    int getNumeroDeFilhos()const{return numeroDeFilhos;}
    float getAumentoSalarial()const{return aumentoSalarial;}
    float getSalarioBruto()const{return salarioDoMes*aumentoSalarial+salarioDoMes;}
    
    void setNome(QString nome1){nome=nome1;}
    void setSalarioDoMes(float salario1);
    void setNumerodeFilhos(int filhos);
    void setAumentoSalarial(float aumento);
    
    float calculoInss()const;
    float calculoIR()const;
    float calculoIRPF()const{return 54.00*numeroDeFilhos;}
    
};
}
#endif // FUNCIONARIO_H

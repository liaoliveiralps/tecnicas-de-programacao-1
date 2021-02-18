#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
namespace lia{
class funcionario
{
private:
    std::string nome;
    float salario;
    int filhos;
    float aumento;
public:
    funcionario();
    std::string getNome()const{return nome;}
    float getSalario()const{return salario;}
    int getFilhos()const{return filhos;}
    float getAumento()const{return aumento;}
    void setNome(std::string nome){this->nome=nome;}
    void setSalario(float salario){this->salario=salario;}
    void setFilhos(int filhos1){filhos=filhos1;}
    void setAumento(float aumento){this->aumento=aumento;}
    float valorinss()const{
        if (salario<=2545.00)
            return salario*0.06;
        else if (salario>2545.00)
            return salario*0.1;
                          }
    float valorir()const{
        if (salario>=1903.99&&salario<=2826.65)
            return salario*0.075;
        else if (salario>=2826.66&&salario<=3751.05)
            return salario*0.15;
        else if (salario>=3751.06&&salario<=4664.68)
            return salario*0.225;
        else if (salario>=4664.68)
            return salario*0.275;
                         }
};
}
#endif // FUNCIONARIO_H

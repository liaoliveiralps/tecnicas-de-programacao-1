#ifndef PESSOA_H
#define PESSOA_H
#include<string>

namespace TP{//inicio
class Pessoa
{
    //Atributos
private:
    std::string nome;
    int peso;
    float altura;
public:
    Pessoa();
    std::string getNome()const{return nome;}
    int getPeso()const{return peso;}
    float getAltura()const{return altura;}
    void setNome(std::string nome){this->nome = nome;}
    void setPeso(int peso){this->peso = peso;}
    void setAltura(float altura){this->altura = altura;}
    float calcularImc()const{return (peso/(altura*altura));}
};

}//fim
#endif // PESSOA_H

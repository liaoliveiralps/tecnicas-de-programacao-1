#ifndef PESSOA_H
#define PESSOA_H
#include <QString>
namespace tp1{
class Pessoa
{
private:
    QString nome;
    int peso;
    float altura;
    QString sexo;
public:
    Pessoa();
    QString getNome() const{return nome;}
    void setNome(QString nome){this->nome = nome;}
    int getPeso() const{return peso;}
    void setPeso(int peso);
    float getAltura() const{return altura;}
    void setAltura(float altura);
    QString getSexo() const{return sexo;}
    void setSexo(QString sexo){this->sexo=sexo;};
    float imc()const{return peso/(altura*altura);}
};
}
#endif // PESSOA_H

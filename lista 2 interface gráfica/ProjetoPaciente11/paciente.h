#ifndef PACIENTE_H
#define PACIENTE_H
#include <QString>
namespace lia{
class Paciente
{
private:
    QString nome;
    int peso;
    float altura;
public:
    Paciente();
    QString getNome()const{return nome;}
    int getPeso()const{return peso;}
    float getAltura()const{return altura;}

    void setNome(QString nome){this->nome=nome;}
    void setPeso(int peso);
    void setAltura(float altura);

    QString faixaPeso()const;
    float imc()const{return (peso/(altura*altura));}
};

#endif // PACIENTE_H
}

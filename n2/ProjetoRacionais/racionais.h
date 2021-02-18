#ifndef RACIONAIS_H
#define RACIONAIS_H
#include <QString>
//projeto Racionais
namespace lia{
class Racionais
{
private:
    int numerador;
    int denominador;
public:
    Racionais();

    Racionais(int numerador1, int denominador1); //ok
    void setNumerador(int numerador1) {this->numerador = numerador1;}
    void setDenominador(int denominador1);
    Racionais adicionar(Racionais objeto); //ok
    Racionais subtrair(Racionais objeto); //ok
    Racionais multiplicar(Racionais objeto);
    Racionais dividir(Racionais objeto);
    bool igualdade (Racionais objeto);
    int mdc();
    void simplificacao();
    QString mostra();
};
}
#endif // RACIONAIS_H

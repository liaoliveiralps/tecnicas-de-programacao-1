#ifndef RACIONAL_H
#define RACIONAL_H
#include<QString>
#include<cmath>

namespace tp1 {



class Racional
{
public:
    Racional();
    Racional(int numerador, int denominador);
    Racional adicionarRacional(Racional numeroRacional);
    Racional subtrairRacional(Racional numeroRacional);
    Racional multiplicarRacional(Racional numeroRacional);
    Racional dividirRacional(Racional numeroRacional);
    bool igualdadeRacional(Racional numeroRacional);
    void reduzirRacional();
    int gerarNumeroPrimo(int posicao);
    int calcularMmc(int num1, int num2);
    int getNumerador() const { return numerador; }
    int getDenominador() const { return denominador; }
    void setNumerador(int numerador) { this->numerador = numerador; }
    void setDenominador(int denominador);

private:
    int numerador, denominador;
};


}
#endif // RACIONAL_H

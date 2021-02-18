#ifndef FRACAO_H
#define FRACAO_H
#include <QString>
namespace tp1{
class Fracao
{
private:
    int numerador,
    denominador;
public:
    Fracao();
    Fracao(int n, int d);
       Fracao multiplica(Fracao fator2);
       Fracao divide(Fracao divisor);
       Fracao soma(Fracao parcela2);
       Fracao subtrai(Fracao subtraendo);
       void simplifica();
       QString mostra();
       int mdc();
};
}
#endif // FRACAO_H

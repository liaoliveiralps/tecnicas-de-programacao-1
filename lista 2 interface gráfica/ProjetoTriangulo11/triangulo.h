#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <QString>
#include <cmath>
namespace lia{
class Triangulo
{
private:
    int ladoA;
    int ladoB;
    int ladoC;
public:
    Triangulo();
    int getLadoA()const{return ladoA;}
    int getLadoB()const{return ladoB;}
    int getLadoC()const{return ladoC;}

    void setLados(int a1,int b1,int c1);
    float area()const;
    QString tipoLado()const;
    QString tipoAngulo()const;
};
}
#endif // TRIANGULO_H

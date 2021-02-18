#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <QString>
namespace lia{
class Calculadora
{
private:
    float num1;
    float num2;
    float raiz;
    float base;
    int expoente;
public:
    Calculadora();
    float getNum1()const{return num1;}
    void setNum1(float numero1){num1=numero1;}

    float getNum2()const{return num2;}
    void setNum2(float numero2);

    float getRaiz()const{return raiz;}
    void setRaiz(float raiz1);

    float getBase()const{return base;}
    void setBase(float base1){base=base1;}

    int getExpo()const{return expoente;}
    void setExpo(int expo1){expoente=expo1;}
};
}
#endif // CALCULADORA_H

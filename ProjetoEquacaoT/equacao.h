#ifndef EQUACAO_H
#define EQUACAO_H
#include <iostream>
#include <string>
#include <cmath>
namespace lia {
class Equacao
{
private:
    float a;
    float b;
    float c;
public:
    Equacao();
    float getA()const{return a;}
    float getB()const{return b;}
    float getC()const{return c;}
    void setA(float a){this->a=a;
         if (a==0.0)
             throw std::string ("O valor de A nao pode ser negativo.\n");
                      }
    void setB(float b){this->b=b;}
    void setC(float c){this->c=c;}
    float delta()const{return sqrt((b*b)-4*a*c);}
    float x1()const{return (-b+delta())/(2*a);}
    float x2()const{return (-b-delta())/(2*a);}
};
}
#endif // EQUACAO_H

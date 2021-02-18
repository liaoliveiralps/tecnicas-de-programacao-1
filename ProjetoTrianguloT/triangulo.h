#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <iomanip>
namespace lia{
class Triangulo
{
private:
    float a;
    float b;
    float c;
public:
    Triangulo();
    float getA()const{return a;}
    float getB()const{return b;}
    float getC()const{return c;}
    void setA(float a){this->a=a;
         if (a<0)
             throw std::string ("Nao eh um triangulo.\n");
                    }
    void setB(float b){this->b=b;
         if (b<0)
             throw std::string ("Nao eh um triangulo.\n");
                    }
    void setC(float c){this->c=c;
         if (c<0)
             throw std::string ("Nao eh um triangulo.\n");
                    }
    float area()const{
        std::cout<<std::fixed;
        std::cout<<std::setprecision(1);
        float p=(a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));}
};
}
#endif // TRIANGULO_H

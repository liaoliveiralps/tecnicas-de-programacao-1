#ifndef EQUACAO_H
#define EQUACAO_H
#include <QString>
#include <cmath>
namespace lia{
class Equacao
{
private:
    int a;
    int b;
    int c;
public:
    Equacao();
    int getA(){return a;}
    int getB(){return b;}
    int getC(){return c;}
    void setA(int a1);
    void setB(int b1){b=b1;}
    void setC(int c1){c=c1;}

    float delta()const;
    float raiz1()const;
    float raiz2()const;
};
}
#endif // EQUACAO_H

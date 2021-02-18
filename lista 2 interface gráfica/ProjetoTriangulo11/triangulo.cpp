#include "triangulo.h"
namespace lia{
Triangulo::Triangulo():
    ladoA(0),
    ladoB(0),
    ladoC(0)
{

}
float Triangulo::area()const{
    float perimetro=(ladoA+ladoB+ladoC)/2;
    float area=sqrt(perimetro*(perimetro-ladoA)*(perimetro-ladoB)*(perimetro-ladoC));
    return area;
}
void Triangulo::setLados(int a1, int b1, int c1){
    if (a1<0 || b1<0 || c1<0)
        throw QString("Valor dos lados não pode ser negativo.");
    if (a1>b1+c1)
        throw QString("Lado A maior que a soma dos lados B e C. Logo, não é um triângulo");
    else if (b1>c1+a1)
        throw QString("Lado B maior que a soma dos lados A e C. Logo, não é um triângulo");
    else if (c1>a1+b1)
        throw QString("Lado C maior que a soma dos lados A e B. Logo, não é um triângulo");
    ladoA=a1;
    ladoB=b1;
    ladoC=c1;
}
QString Triangulo::tipoLado()const{
    QString t = "0";
    if(ladoA==ladoB && ladoA==ladoC)
        t="triângulo equilátero";
    else if ((ladoA==ladoB&&ladoB!=ladoC) || (ladoA==ladoC&&ladoA!=ladoB) || (ladoB==ladoC&&ladoB!=ladoA))
        t="triângulo isósceles";
    else if (ladoA!=ladoB && ladoA!=ladoC)
        t="triângulo escaleno";
    return t;
}
QString Triangulo::tipoAngulo()const{
    QString t = "0";
    if(pow(ladoA,2)<pow(ladoB,2) + pow(ladoC,2))
        t="triângulo acutângulo";
    else if(pow(ladoA,2)>pow(ladoB,2) + pow(ladoC,2))
        t="triângulo obtusângulo";
    else if(pow(ladoA,2)==pow(ladoB,2) + pow(ladoC,2))
        t="triângulo retângulo";
    return t;
}
}

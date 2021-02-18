#include "equacao.h"
namespace lia{
Equacao::Equacao():
    a(0),
    b(0),
    c(0)
{

}
void Equacao::setA(int a1){
    if(a1==0)
        throw QString("Valor do A não pode ser igual a 0");
    a=a1;
}
float Equacao::delta()const{
    float delta1=b*b-4*a*c;
    return delta1;
}
float Equacao::raiz1()const{
    float raiz1=0;
    if(delta()==0){
        raiz1=(-b)/(2*a);
        return raiz1;}
    else if(delta()<0){
        raiz1=0;
        return raiz1;}
    else if(delta()>0)
        raiz1=(-b+sqrt(delta()))/(2*a);
        return raiz1;
}
float Equacao::raiz2()const{
    float raiz2=(-b-sqrt(delta()))/(2*a);
    return raiz2;
}
}

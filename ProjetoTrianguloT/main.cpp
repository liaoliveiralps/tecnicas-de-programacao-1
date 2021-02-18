#include <iostream>
#include <triangulo.h>
int main()
{
    try{
    lia::Triangulo qualquer;
    int a=0;
    int b=0;
    int c=0;
    std::cout<<"Informe o primeiro lado do triangulo: ";
    std::cin>>a;
    std::cout<<"Informe o segundo lado do triangulo: ";
    std::cin>>b;
    std::cout<<"Informe o terceiro lado do triangulo: ";
    std::cin>>c;
    qualquer.setA(a);
    qualquer.setB(b);
    qualquer.setC(c);
    std::cout<<"\nDADOS DO TRIANGULO\n";
    std::cout<<"Lado a: "<<qualquer.getA()<<"\n";
    std::cout<<"Lado b: "<<qualquer.getB()<<"\n";
    std::cout<<"Lado c: "<<qualquer.getC()<<"\n";
    std::cout<<"Area: "<<qualquer.area()<<"\n";
    std::cout<<"Tipo de triangulo em relacao aos lados: ";
    if (a>=b+c)
        std::cout<<"Nao forma um triangulo.\n";
    else if (a==b&&b==c)
        std::cout<<"triangulo equilatero.\n";
    else if ((a==b&&c!=a)||(b==c&&c!=a))
        std::cout<<"triangulo isoceles.\n";
    else if (a!=b&&b!=c&&c!=a)
        std::cout<<"triangulo escaleno.\n";
    std::cout<<"Tipo de triangulo em relacao aos angulos: ";
    if (a>=b+c)
        std::cout<<"Nao forma um triangulo.\n";
    else if (a*a<b*b+c*c)
        std::cout<<"acutangulo.\n";
    else if (a*a>b*b+c*c)
        std::cout<<"obtusangulo.\n";
    else if (a*a==b*b+c*c)
        std::cout<<"retangulo.\n";
    }
    catch (std::string erro){
        std::cout<<erro;
    }
}

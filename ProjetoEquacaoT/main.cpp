#include <iostream>
#include <equacao.h>
#include <string>
int main()
{
    try{
    lia::Equacao segundograu;
    float a;
    float b;
    float c;
    std::cout<<"\tEQUACAO DE SEGUNDO GRAU \n";
    std::cout<<"Informe o valor do coeficiente a: ";
    std::cin>>a;
    std::cout<<"Informe o valor do coeficiente b: ";
    std::cin>>b;
    std::cout<<"Informe o valor do coeficiente c: ";
    std::cin>>c;
    segundograu.setA(a);
    segundograu.setB(b);
    segundograu.setC(c);
    if (segundograu.delta()<0)
        std::cout<<"Não existe raiz real.";
    std::cout<<"\nDADOS DA EQUACAO: \n";
    std::cout<<"Valor do coeficiente a: "<<segundograu.getA()<<"\n";
    std::cout<<"Valor do coeficiente b: "<<segundograu.getB()<<"\n";
    std::cout<<"Valor do coeficiente c: "<<segundograu.getC()<<"\n";
    std::cout<<"\nRESULTADO: \n";
    std::cout<<"x1 = "<<segundograu.x1()<<"\n";
    std::cout<<"x2 = "<<segundograu.x2()<<"\n";
    }
    catch (std::string erro){
        std::cout<<erro;
    }
}

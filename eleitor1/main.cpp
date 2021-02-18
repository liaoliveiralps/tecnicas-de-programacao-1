#include <iostream>
#include <eleitor.h>
#include <string>
int main()
{
    try {
    lia::eleitor jao;
    std::string nome;
    int ano;
    std::cout<<"Digite o nome: ";
    std::cin>>nome;
    std::cout<<"Digite o ano de nascimento: ";
    std::cin>>ano;

    jao.setNome(nome);
    jao.setAno(ano);
    std::cout<<"DADOS DO ELEITOR: \n";
    std::cout<<"Nome: "<<jao.getNome()<<"\n";
    std::cout<<"Ano de Nascimento: "<<jao.getAno()<<"\n";
    std::cout<<"Tipo de Eleitor: ";
    if (jao.calculo()<16)
        std::cout<<"Não Eleitor.\n";
    else if (jao.calculo()>=16&&jao.calculo()<18)
            std::cout<<"Eleitor Facultativo.\n";
    else if (jao.calculo()>=18&&jao.calculo()<=65)
            std::cout<<"Eleitor Obrigatorio.\n";
    else if (jao.calculo()>65)
            std::cout<<"Eleitor Facultativo.\n";
    }
    catch (std::string erro) {
        std::cout<<erro;
    }
}

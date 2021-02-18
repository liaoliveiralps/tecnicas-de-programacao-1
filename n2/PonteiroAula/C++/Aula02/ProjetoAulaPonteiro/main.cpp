#include <iostream>
#include<Pessoa.h>
int main()
{
    //Manipulacao de classe usando ponteiro
    TP::Pessoa jose;

    jose.setNome("Jose das Cove");
    jose.setPeso(100);
    jose.setAltura(1.90);
    system("clear");
    std::cout<<"Objeto criado estaticamente \n";
    std::cout<<"Endereco do Objeto Jose => "<<&jose<<"\n";
    std::cout<<"Nome:   "<<jose.getNome()<<"\n";
    std::cout<<"Peso:   "<<jose.getPeso()<<"\n";
    std::cout<<"Altura: "<<jose.getAltura()<<"\n";
    std::cout<<"IMC:    "<<jose.calcularImc()<<"\n\n";

    TP::Pessoa &refJose = jose;
    std::cout<<"Manipulando Objeto por referencia \n";
    std::cout<<"Endereco do Objeto refJose => "<<&refJose<<"\n";
    std::cout<<"Nome:   "<<refJose.getNome()<<"\n";
    std::cout<<"Peso:   "<<refJose.getPeso()<<"\n";
    std::cout<<"Altura: "<<refJose.getAltura()<<"\n";
    std::cout<<"IMC:    "<<refJose.calcularImc()<<"\n\n";

    TP::Pessoa *ptJose = &jose;
    std::cout<<"Manipulando Objeto por ponteiro \n";
    std::cout<<"Endereco de ptJose => "<<&ptJose<<"\n";
    std::cout<<"Conteudo de ptJose => "<<ptJose<<"\n\n";
    std::cout<<"Manipulando Objeto por referencia \n";
    std::cout<<"Nome:   "<<ptJose->getNome()<<"\n";
    std::cout<<"Peso:   "<<ptJose->getPeso()<<"\n";
    std::cout<<"Altura: "<<ptJose->getAltura()<<"\n";
    std::cout<<"IMC:    "<<ptJose->calcularImc()<<"\n";


}

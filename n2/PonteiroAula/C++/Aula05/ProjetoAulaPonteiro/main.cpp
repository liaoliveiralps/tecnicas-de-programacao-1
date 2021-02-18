#include <iostream>
#include<Pessoa.h>
int main()
{
    //Manipulacao de classe criada dinamicamente
    TP::Pessoa *jose=0;
    //classe criada dinamicamente
    jose = new TP::Pessoa();

    jose->setNome("Jose das Cove");
    jose->setPeso(100);
    jose->setAltura(1.90);
    system("clear");
    std::cout<<"Objeto criado estaticamente \n";
    std::cout<<"Endereco do ponteiro Jose => "<<&jose<<"\n";
    std::cout<<"Endereco do objeto \n";
    std::cout<<"apontado pelo ponteiro Jose => "<<jose<<"\n";
    std::cout<<"Nome:   "<<jose->getNome()<<"\n";
    std::cout<<"Peso:   "<<jose->getPeso()<<"\n";
    std::cout<<"Altura: "<<jose->getAltura()<<"\n";
    std::cout<<"IMC:    "<<jose->calcularImc()<<"\n\n";

    delete jose;

    //Array criado dinamicamente
    const int tamanho = 5;
    int *array = 0;
    array = new int[tamanho];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    std::cout<<"Manipulando vetor criado dinamicamente \n";
    std::cout<<"Imprimindo os dados do array \n";
    std::cout<<"Array = { ";
    for(int pos=0; pos < tamanho;pos++){
        std::cout<<array[pos]<<", ";
    }
    std::cout<<"}\n\n";

    std::cout<<"Manipulando vetor criado dinamicamente \n";
    std::cout<<"Endereco do inicio do array => "<<array<<"\n";
    std::cout<<"Imprimindo os dados do array \n";
    std::cout<<"Array = { ";
    for(int pos=0; pos < tamanho;pos++){
        std::cout<<*(array+pos)<<", ";
    }
    std::cout<<"}\n\n";

    std::cout<<"Manipulando vetor criado dinamicamente \n";
    std::cout<<"Usando um ponteiro auxiliar e aritimetica de ponteiro \n";
    std::cout<<"Endereco do inicio do array => "<<array<<"\n";
    int *ptArray = array;
    std::cout<<"Endereco de ptArray => "<<&ptArray<<"\n";
    std::cout<<"Conteudo de ptArray => "<<ptArray<<"\n";
    std::cout<<"Imprimindo os dados do array \n";
    std::cout<<"Array = { ";
    for(int pos=0; pos < tamanho;pos++,ptArray++){
        std::cout<<*ptArray<<", ";
    }
    std::cout<<"}\n\n";


    delete[] array;

}

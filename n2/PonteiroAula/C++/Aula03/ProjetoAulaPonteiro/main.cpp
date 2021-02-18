#include <iostream>

int main()
{
    const int tamanho = 5;
    int array[tamanho]={1,2,3,4,5};

    system("clear");
    std::cout<<"Manipulando vetor criado estaticamente \n";
    std::cout<<"Imprimindo os dados do array \n";
    std::cout<<"Array = { ";
    for(int pos=0; pos < tamanho;pos++){
        std::cout<<array[pos]<<", ";
    }
    std::cout<<"}\n\n";

    std::cout<<"Manipulando vetor criado estaticamente \n";
    std::cout<<"Um array e na verdade um ponteiro constante\n";
    std::cout<<"Endereco do inicio do array => "<<array<<"\n";
    std::cout<<"Imprimindo os dados do array \n";
    std::cout<<"Array = { ";
    for(int pos=0; pos < tamanho;pos++){
        std::cout<<*(array+pos)<<", ";
    }
    std::cout<<"}\n\n";

    std::cout<<"Manipulando vetor criado estaticamente \n";
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


}

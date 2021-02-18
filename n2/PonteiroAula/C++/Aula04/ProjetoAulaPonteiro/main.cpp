#include <iostream>

int main()
{
    int tamanho = 0;
    std::cout<<"Digite o tamanho do vetor: ";
    std::cin>>tamanho;

    int *array = 0;
    try {
        array = new int[tamanho];
        for(int pos=0; pos < tamanho;pos++){
            std::cout<<"Array["<<pos<<"]=";
            std::cin>>*(array+pos);
        }
        std::cout<<"Imprimindo os dados do array \n";
        std::cout<<"Array = { ";
        for(int pos=0; pos < tamanho;pos++){
            std::cout<<*(array+pos)<<", ";
        }
        std::cout<<"}\n\n";
        delete[] array;
    } catch (std::bad_alloc&) {
        std::cout<<"Vetor não pode ser criado";
    }
}

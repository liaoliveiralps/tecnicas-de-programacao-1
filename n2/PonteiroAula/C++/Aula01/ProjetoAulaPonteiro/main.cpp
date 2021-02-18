#include <iostream>

int main()
{
    //Problemas com a inicialização
    int a;
    int b = 10;
    int *pt1;
    int *pt2 = 0;

    //system("clear");
    std::cout<<"Valor inicial das variáveis \n";
    std::cout<<"a => "<<a<<"\n";
    std::cout<<"b => "<<b<<"\n";

    std::cout<<"*pt1 => "<<pt1<<"\n";
    std::cout<<"*pt2 => "<<pt2<<"\n\n";

//================================================================

    std::cout<<"Endereco das variaveis na memoria \n";
    std::cout<<"Uso do operador & - o endereco de ?\n";
    std::cout<<"Endereco de a => "<< &a<<"\n";
    std::cout<<"Endereco de b => "<< &b<<"\n";

    std::cout<<"Endereco de pt1 => "<< &pt1<<"\n";
    std::cout<<"Endereco de pt2 => "<< &pt2<<"\n\n";

//================================================================

    //Operador * - para variaveis simples significa multiplicacao
    //std::cout<<"Valor do endereco *a"<< *a<<"\n";  //erro de compilacao
    //std::cout<<"Valor do endereco *b"<< *b<<"\n";  //erro de compilacao

    //Manipulando variaveis atraves dos ponteiros
    a = 20;
    b = 30;
    int &aRef = a;
    int &bRef = b;
    pt1 = &a;
    pt2 = &b;

    std::cout<<"Valores das variaveis simples\ne seus enderecos\n";
    std::cout<<"Valor de a => "<<a<<"\n";
    std::cout<<"Endereco de a => "<<&a<<"\n";
    std::cout<<"Valor de b => "<<b<<"\n";
    std::cout<<"Endereco de b => "<<&b<<"\n\n";

    std::cout<<"Valores das referencias as variaveis\nsimples e seus enderecos\n";
    std::cout<<"Valor de aRef => "<<aRef<<"\n";
    std::cout<<"Endereco de aRef => "<<&aRef<<"\n";
    std::cout<<"Valor de aRef => "<<bRef<<"\n";
    std::cout<<"Endereco de aRef => "<<&bRef<<"\n\n";

    std::cout<<"Valores dos ponteiro para as variaveis\nsimples e seus enderecos\n";
    std::cout<<"valor de pt1 => "<<pt1<<"\n";
    std::cout<<"Endereco de pt1 => "<<&pt1<<"\n";
    std::cout<<"Valor de *pt1 => "<<*pt1<<"\n";
    std::cout<<"valor de pt2 => "<<pt2<<"\n";
    std::cout<<"Endereco de pt2 => "<<&pt2<<"\n";
    std::cout<<"Valor de *pt2 => "<<*pt2<<"\n\n";

    //Ponteiro constante
    int z = 20;
    std::cout<<"Valor de z => "<<z<<"\n";
    std::cout<<"Endereco de z => "<<&z<<"\n";
    int *const pt3 = &z;
    std::cout<<"Valor de * const pt3 => "<<pt3<<"\n";
    std::cout<<"Endereco de pt3 => "<<&pt3<<"\n";
    std::cout<<"Valor do endereco apontado *pt3 => "<<*pt3<<"\n";
    *pt3 = 5;
    std::cout<<"Valor de z => "<<z<<"\n\n";
    //pt3 = &a; // erro ponteiro constante

    //Ponteiro para uma constante

    int t = 20;
    std::cout<<"Valor de t => "<<t<<"\n";
    std::cout<<"Endereco de t => "<<&t<<"\n";
    int const *pt4 = &t;
    std::cout<<"Valor de * const pt4 => "<<pt4<<"\n";
    std::cout<<"Endereco de pt4 => "<<&pt4<<"\n";
    std::cout<<"Valor do endereco apontado *pt4 => "<<*pt4<<"\n";
    //*pt4 = 5; // erro valor apontado e constante
    std::cout<<"Valor de t => "<<t<<"\n";
    pt4 = &a;
    std::cout<<"Valor de * const pt4 => "<<pt4<<"\n";
    std::cout<<"Endereco de pt4 => "<<&pt4<<"\n";
    std::cout<<"Valor do endereco apontado *pt4 => "<<*pt4<<"\n\n";

    // ponteiro constante para uma constante
    int w = 40;
    std::cout<<"Valor de w => "<<w<<"\n";
    std::cout<<"Endereco de w => "<<&w<<"\n";
    int const * const pt5 = &w;
    std::cout<<"Valor de * const pt5 => "<<pt5<<"\n";
    std::cout<<"Endereco de pt5 => "<<&pt5<<"\n";
    std::cout<<"Valor do endereco apontado *pt5 => "<<*pt5<<"\n";
    //*pt5 = 30; // ponteiro para uma constante
    //pt5 = &a;  // ponteiro constante

}

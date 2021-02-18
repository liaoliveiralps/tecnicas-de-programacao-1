#include<iostream>
using std::cout;
using std::endl;

class PPV{
public:
    static void trocaPPV(int a, int b){
        cout<<"Entrando no	Metodo trocaPPV( a = "<<a<<"  b = "<<b<<" )"<<endl;
        int aux=a;
        a=b;
        b=aux;
        cout<<"Saindo do 	Metodo trocaPPV( a = "<<a<<"  b = "<<b<<"  )"<<endl;
    }
};

int main(void){
    int valor1 = 15;
    int valor2 = 30;

    //*************************************************************************
        //Exemplificando a passagem de parametros por valor para tipos primitivos
    //*************************************************************************
    system("clear");
    cout<<endl<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"                  PROGRAMA PRINCIPAL"<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"Valores das variaveis antes da chamada do Metodo trocaPPV"<<endl<<endl;
    cout<<"Valor 1   = "<<valor1<<"     	Valor 2 = "<<valor2<<endl<<endl;
    cout<<"                             Argumentos"<<endl;
    cout<<"Chamada do metodo trocaPPV(valor1, valor2)"<<endl;
    cout<<"                            ↓"<<valor1<<"     ↓"<<valor2<<endl;
    cout<<"Metodo           trocaPPV(int a , int b)"<<endl;
    cout<<"                            Parametros "<<endl<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"            Funcionamento do Metodo trocaPPV"<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<" Metodo trocaPPV utiliza passagem de parametro por valor"<<endl<<endl;

    //Executando a chamada do trocaPPV - metodo com passagem de parametros por valor.
    //Os valores dos argumentos sao passados para os parametros do metodo porem estes nao sao modificados

    PPV::trocaPPV(valor1, valor2);

    cout<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"                  PROGRAMA PRINCIPAL"<<endl;
    cout<<"**********************************************************"<<endl;

    cout<<"Valores depois da chamada do Metodo trocaPPV"<<endl;
    cout<<"Valor 1   = "<<valor1<<"     	Valor 2 = "<<valor2<<endl<<endl;

}


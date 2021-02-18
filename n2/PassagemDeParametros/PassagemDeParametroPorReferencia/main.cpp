#include<iostream>
using std::endl;
using std::cout;
class PPR{
public:
    static void trocaPPR(int &a, int &b){
        cout<<"Entrando no	Metodo trocaPPR( valor1 = a = "<<a<<" 	valor2 = b = "<<b<<" )"<<endl;
        int aux=a;
        a=b;
        b=aux;
        cout<<"Saindo do 	Metodo trocaPPR( valor1 = a = "<<a<<" 	valor2 = b = "<<b<<" )"<<endl;
    }
};

int main(void){
    int valor1 = 15;
    int valor2 = 30;

    //*************************************************************************
    //Exemplificando a passagem de parametros por referencia para tipos primitivos
    //*************************************************************************
    system("clear");
    cout<<"**********************************************************"<<endl;
    cout<<"                  PROGRAMA PRINCIPAL"<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"Valores das variaveis antes da chamada do Metodo trocaPPR"<<endl<<endl;
    cout<<"Valor 1   = "<<valor1<<"     	Valor 2 = "<<valor2<<endl<<endl;
    cout<<"                              Argumentos"<<endl;
    cout<<"Chamada do metodo trocaPPR( valor1,   valor2)"<<endl;
    cout<<"                 Referencia   ↓         ↓"<<endl;
    cout<<"Metodo           trocaPPR(int &a ,  int &b)"<<endl;
    cout<<"                             Parametros "<<endl<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"            Funcionamento do Metodo trocaPPR"<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<" Metodo trocaPPR utiliza passagem de parametro por valor"<<endl<<endl;

    //Executando a chamada do trocaPPV - metodo com passagem de parametros por valor.
    //Os valores dos argumentos sao passados para os parametros do metodo porem estes nao sao modificados

     PPR::trocaPPR(valor1, valor2);

    cout<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"                  PROGRAMA PRINCIPAL"<<endl;
    cout<<"**********************************************************"<<endl;

    cout<<"Valores depois da chamada do Metodo trocaPPR"<<endl;
    cout<<"Valor 1   = "<<valor1<<"     	Valor 2 = "<<valor2<<endl<<endl;
}


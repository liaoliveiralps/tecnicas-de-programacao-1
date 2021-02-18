#include <iostream>
#include <conta.h>
#include <string>

int main()
{
   try{
   lia::conta pessoa;
   std::string nome;
   int numconta;
   int agencia;
   float saldo;
   int op=0;
   float deposito=0;
   float saque=0;
   std::cout<<"Digite o nome: ";
   std::cin>>nome;
   std::cout<<"Digite o numero da conta: ";
   std::cin>>numconta;
   std::cout<<"Digite a agencia: ";
   std::cin>>agencia;
   std::cout<<"Digite o saldo: ";
   std::cin>>saldo;
   pessoa.setNome(nome);
   pessoa.setConta(numconta);
   pessoa.setAgencia(agencia);
   pessoa.setSaldo(saldo);
   std::cout<<"Digite a operacao desejada:\n1-Deposito\t2-Saque\n";
   std::cin>>op;
   if (op==1){
       std::cout<<"Digite o valor para deposito: ";
       std::cin>>deposito;
       saldo+=deposito;
       pessoa.setSaldo(saldo);
       std::cout<<"Deposito feito com sucesso.";
   }
   else if (op==2){
       std::cout<<"Digite valor para saque: ";
       std::cin>>saque;
       saldo-=saque;
       pessoa.setSaldo(saldo);
       std::cout<<"Saque feito com sucesso.";
   }
   pessoa.setDeposito(deposito);
   pessoa.setSaque(saque);
   std::cout<<"\n\nDADOS DA CONTA: ";
   std::cout<<"Nome: "<<pessoa.getNome()<<"\n";
   std::cout<<"Numero da conta: "<<pessoa.getConta()<<"\n";
   std::cout<<"Agencia: "<<pessoa.getAgencia()<<"\n";
   std::cout<<"Saldo: R$"<<pessoa.getSaldo()<<"\n";
   }
    catch (std::string erro){
        std::cout<<erro;
    }
}

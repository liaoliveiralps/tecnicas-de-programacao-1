#include "naturais.h"
namespace lia{
Naturais::Naturais():
    numero(0)
{

}
Naturais::Naturais(long numero1):
    numero(numero1)
{

}
Naturais::Naturais(Naturais &objeto):
    numero(objeto.numero)
{

}
void Naturais::set(long numero1){
    numero = numero1;
    if(numero1<=0)
        throw QString("Número não pode ser negativo ou menor que zero.");
}
void Naturais::set(Naturais &objeto){
    numero = objeto.numero;
    if(objeto.numero<=0)
        throw QString("Número não pode ser negativo ou menor que zero.");
}
long Naturais::get(){
    long saida=numero;
    return saida;
}
Naturais Naturais::calculoFatorial(){
    long x=1;
    for(long i=1; i<=numero; i++){
        x=x*i;
    }
    Naturais set(x);
    return set;
}
bool Naturais::numPerfeito(){
    int x = numero;
    x--;
    long cont=0;
    for(int i=x; i>=1; i--){
        if(numero%i==0){
            cont=cont + i;
        }
    }
    if(cont==numero)
        return true;
    else
        return false;
}
bool Naturais::capicuia(){
    long reverso;
    int aux;
    aux = numero;
    reverso = 0;
    while (aux !=0) {
        reverso = reverso*10 + aux%10;
        aux = aux/10;
    }
    if(reverso==numero)
        return true;
    else
        return false;
}
bool Naturais::quadradoPerfeito(){
    if(numero==2)
        return false;
    else{
    if(numero%2==0){
        //numero par
       if(numero/4==0)
            return true;
       else
            return false;
    }
    else
        //numero impar
        if(numero%8==1)
            return true;
        else
            return false;
    }
}
bool Naturais::numPrimo(){
    if(numero==2 or numero==3 or numero==5 or numero==7 or numero==11)
        return true;
    else{
        if(numero%2!=0 and numero%3!=0 and numero%5!=0 and numero%7!=0 and numero%11!=0)
            return true;
        else
            return false;
    }
}
QString Naturais::mudarBase(int base)
{
        int num=numero;
        if(base==2)
        {

            int aux,bina[7];
            QString binario,reverse;

            if(num==0)return QString("0");
            for(aux=6;aux>=0;aux--)
            {
                if (num % 2 == 0)
                {
                   bina[aux]=0;
                   num = num / 2;
                }
                else
                {
                   bina[aux]=1;
                   num = num / 2;
                }
            }

           for (aux = 0; aux <= 6; aux++)
           {

               binario+=QString::number(bina[aux]);
           }
           return binario;
        }

        if(base==8)
        {
            int resto = -1,aux,sb[7]={'\0'};
            QString octalS;


            if (num == 0) return QString("0");
            for (aux = 7; aux >= 0; aux--)
            {
                resto = num % 8;
                num = num / 8;
                sb[aux]=resto;
            }

            for (aux = 0; aux <= 7; aux++)
            {

                octalS+=QString::number(sb[aux]);
            }
            return octalS;
        }

        if(base==16)
        {

            QString hexadecimal;
            char Resultado3;

            if(num==0)return QString("0");
            while(num > 0)
               {
                   switch (num%16)
                   {
                   case 1:
                       Resultado3='1';
                       break;
                   case 2:
                       Resultado3='2';
                       break;
                   case 3:
                       Resultado3='3';
                       break;
                   case 4:
                       Resultado3='4';
                       break;
                   case 5:
                       Resultado3='5';
                       break;
                   case 6:
                       Resultado3='6';
                       break;
                   case 7:
                       Resultado3='7';
                       break;
                   case 8:
                       Resultado3='8';
                       break;
                   case 9:
                       Resultado3='9';
                       break;
                   case 10:
                       Resultado3='A';
                       break;
                   case 11:
                       Resultado3='B';
                       break;
                   case 12:
                       Resultado3='C';
                       break;
                   case 13:
                       Resultado3='D';
                       break;
                   case 14:
                       Resultado3='E';
                       break;
                   case 15:
                       Resultado3='F';
                       break;

                   }
                   num=num/16;
               }

         hexadecimal=Resultado3;

return hexadecimal;
        }
}
Naturais Naturais::calculoMDC(Naturais &objeto){
    int dividendo;
    int divisor;
    int resto;
    dividendo = abs(numero);
    divisor = abs(objeto.numero);
    resto = dividendo%divisor;
    while (resto!=0) {
        dividendo = divisor;
        divisor = resto;
        resto = dividendo%divisor;
    }
    Naturais aux;
    aux = divisor;
    return aux;
}
Naturais Naturais::calculoMMC(Naturais &objeto){
        int dividendo;
        int divisor;
        int resto;
        dividendo = abs(numero);
        divisor = abs(objeto.numero);
        resto = dividendo%divisor;
        while (resto!=0) {
            dividendo = divisor;
            divisor = resto;
            resto = dividendo%divisor;
        }
        Naturais mmc;
        mmc = (numero*objeto.numero)/divisor;
        return mmc;
}
bool Naturais::primosEntreSi(Naturais &objeto){
    int dividendo;
    int divisor;
    int resto;
    dividendo = abs(numero);
    divisor = abs(objeto.numero);
    resto = dividendo%divisor;
    while (resto!=0) {
        dividendo = divisor;
        divisor = resto;
        resto = dividendo%divisor;
    }
    if(divisor==1)
        return true;
    else
        return false;
}
}

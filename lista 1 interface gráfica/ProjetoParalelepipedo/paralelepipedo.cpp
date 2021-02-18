#include "paralelepipedo.h"
namespace lia{
Paralelepipedo::Paralelepipedo():
    altura(0),
    largura(0),
    comprimento(0)
{

}
void Paralelepipedo::setAltura(float altura1){
    if (altura1<0)
        throw QString("Altura não pode ser negativa");
    altura=altura1;
}
void Paralelepipedo::setLargura(float largura1){
    if (largura1<0)
        throw  QString("Largura não pode ser negativa");
    largura=largura1;
}
void Paralelepipedo::setComprimento(float comprimento1){
    if (comprimento1<0)
        throw QString("Comprimento não pode ser negativo");
    comprimento=comprimento1;
}
}

#include "piramide.h"
namespace lia{
Piramide::Piramide():
    base(0),
    altura(0)
{

}
void Piramide::setBase(float base1){
    if (base1<0)
        throw QString("O valor da base não pode ser negativo.");
    base=base1;
}
void Piramide::setAltura(float altura1){
    if (altura1<0)
        throw QString("O valor da altura não pode ser negativo.");
    altura=altura1;
}
}

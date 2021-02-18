#include "cone.h"
namespace lia{
Cone::Cone():
    raio(0),
    altura(0)
{

}
void Cone::setRaio(float raio1){
    if (raio1<0)
        throw QString("O valor do raio não pode ser negativo.");
    raio=raio1;
}
void Cone::setAltura(float altura1){
    if (altura1<0)
        throw QString("O valor da altura não pode ser negativo.");
    altura=altura1;
}
}

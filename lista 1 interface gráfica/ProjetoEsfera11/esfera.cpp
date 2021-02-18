#include "esfera.h"
namespace lia{
Esfera::Esfera():
    raio(0)
{

}
void Esfera::setRaio(float raio1){
    if (raio1<0)
        throw QString ("O raio não pode ser negativo.");
    raio=raio1;
}
}

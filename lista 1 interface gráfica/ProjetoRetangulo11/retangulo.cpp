#include "retangulo.h"
namespace lia {
Retangulo::Retangulo():
    comprimento(0),
    largura(0)
{

}
void Retangulo::setComp(float comp1){
    if (comp1<0)
        throw QString ("O comprimento não pode ser negativo.");
    comprimento=comp1;
}
void Retangulo::setLarg(float larg1){
    if (larg1<0)
        throw QString ("A largura não pode ser negativa.");
    largura=larg1;
}
}

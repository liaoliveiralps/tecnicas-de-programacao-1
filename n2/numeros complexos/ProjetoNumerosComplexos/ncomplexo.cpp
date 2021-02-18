#include "ncomplexo.h"
namespace TP1{
NComplexo::NComplexo():
    parteReal(0),
    parteImaginaria(0)
{

}
NComplexo::NComplexo(int pReal, int pImaginaria):
    parteReal(pReal),
    parteImaginaria(pImaginaria)
{

}
NComplexo::NComplexo(NComplexo &objeto):
    parteReal(objeto.parteReal),
    parteImaginaria(objeto.parteImaginaria)
{

}
void NComplexo::set(NComplexo &objeto){
    this->parteReal = objeto.parteReal;
    parteImaginaria = objeto.parteImaginaria;
}

void NComplexo::set(int pReal, int pImaginaria){
    parteReal = pReal;
    parteImaginaria = pImaginaria;
}

QString NComplexo::get() const{
    QString saida = QString::number(parteReal);
    saida+= " + ";
    saida += QString::number(parteImaginaria);
    saida += "i";
    return saida;
}
NComplexo NComplexo::adicionar(NComplexo objeto){
    int pr = this->parteReal + objeto.parteReal;
    int pi = parteImaginaria + objeto.parteImaginaria;
    NComplexo aux(pr, pi);
    return aux;
}
NComplexo NComplexo::subtrair(NComplexo objeto){
    int pr = parteReal - objeto.parteReal;
    int pi = parteImaginaria - objeto.parteImaginaria;
    NComplexo aux(pr, pi);
    return aux;
}
NComplexo NComplexo::multiplicar(NComplexo objeto){
    int pr = parteReal * objeto.parteReal;
    int pi = parteImaginaria * objeto.parteImaginaria;
    NComplexo aux(pr, pi);
    return aux;
}
NComplexo NComplexo::dividir(NComplexo objeto){
    int pr = parteReal / objeto.parteReal;
    int pi = parteImaginaria / objeto.parteImaginaria;
    NComplexo aux(pr, pi);
    return aux;
}
bool NComplexo::igualdade(NComplexo objeto){
    if (parteReal==objeto.parteReal)
    {
        if (parteImaginaria==objeto.parteImaginaria){
            return true;
        }
    }
    else
        return false;
}
}

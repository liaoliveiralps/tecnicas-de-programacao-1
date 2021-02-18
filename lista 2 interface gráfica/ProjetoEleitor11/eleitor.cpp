#include "eleitor.h"
namespace lia{
Eleitor::Eleitor():
    nome(""),
    data(0)
{

}
void Eleitor::setData(int data1){
    if (data1<0)
        throw QString("Ano de nascimento inválido.");
    data1=2019-data1;
    data=abs(data1);
}
QString Eleitor::tipoeleitor()const{
    int ano = data;
    if (ano<16)
        return QString("Não eleitor.");
    if (ano>=16&&ano<18)
        return QString("Eleitor facultativo.");
    if (ano>=18&&ano<=65)
        return QString("Eleitor obrigatório.");
    else {
        return QString("Eleitor facultativo.");
    }
}
}

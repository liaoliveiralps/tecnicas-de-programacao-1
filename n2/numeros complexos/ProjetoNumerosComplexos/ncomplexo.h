#ifndef NCOMPLEXO_H
#define NCOMPLEXO_H
#include <QString>
namespace TP1 {

class NComplexo
{
private:
    int parteReal;
    int parteImaginaria;
public:
    NComplexo();
    NComplexo(int pReal, int pImaginaria);
    NComplexo(NComplexo &objeto);
    void set(int pReal, int pImaginaria);
    void set(NComplexo &objeto);
    QString get()const;
    NComplexo adicionar(NComplexo objeto);
    NComplexo subtrair(NComplexo objeto);
    NComplexo multiplicar(NComplexo objeto);
    NComplexo dividir(NComplexo objeto);
    bool igualdade  (NComplexo objeto);

};
}

#endif // NCOMPLEXO_H

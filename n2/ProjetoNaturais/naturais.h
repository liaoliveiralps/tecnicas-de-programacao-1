#ifndef NATURAIS_H
#define NATURAIS_H
#include <QString>
namespace lia{
class Naturais
{
private:
    long numero;
public:
    Naturais();
    Naturais(long numero1);
    Naturais(Naturais &objeto);
    void set(long numero1);
    void set(Naturais &objeto);
    long get();
    Naturais calculoFatorial();
    bool numPerfeito();
    bool capicuia();
    bool quadradoPerfeito();
    bool numPrimo();
    QString mudarBase(int base);
    Naturais calculoMDC(Naturais &objeto);
    Naturais calculoMMC(Naturais &objeto);
    bool primosEntreSi(Naturais &objeto);
};
}
#endif // NATURAIS_H

#ifndef ELEITOR_H
#define ELEITOR_H
#include <QString>
#include <cmath>
namespace lia{
class Eleitor
{
private:
    QString nome;
    int data;
public:
    Eleitor();
    QString getNome()const{return nome;}
    int getData()const{return data;}
    void setNome(QString nome1){nome=nome1;}
    void setData(int data1);
    QString tipoeleitor()const;
};
}
#endif // ELEITOR_H

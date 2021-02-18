#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H
#include <QString>
namespace lia{
class Paralelepipedo
{
private:
    float altura, largura, comprimento;
public:
    Paralelepipedo();
    float getAltura()const{return altura;}
    float getLargura()const{return largura;}
    float getComprimento()const{return comprimento;}
    float volume()const{return altura*comprimento*largura;}
    float area()const{return 2.0*(altura*largura+altura*comprimento+largura*comprimento);}

    void setAltura(float altura1);
    void setLargura(float largura1);
    void setComprimento(float comprimento1);
};
}
#endif // PARALELEPIPEDO_H

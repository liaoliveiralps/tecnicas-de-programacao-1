#ifndef RETANGULO_H
#define RETANGULO_H
#include <QString>
namespace lia{
class Retangulo
{
private:
    float comprimento;
    float largura;
public:
    Retangulo();
    float getComp()const{return comprimento;}
    float getLarg()const{return largura;}
    float area()const{return largura*comprimento;}
    float perimetro()const{return largura*largura+comprimento*comprimento;}

    void setComp(float comp1);
    void setLarg(float larg1);
};
}
#endif // RETANGULO_H

#ifndef PIRAMIDE_H
#define PIRAMIDE_H
#include <QString>
#include <string>
namespace lia{
class Piramide
{
private:
    float base;
    float altura;
public:
    Piramide();
    float getBase()const{return base;}
    float getAltura()const{return altura;}
    void setBase(float base);
    void setAltura(float altura);
    float volume()const{return (1.0/3.0)*base*altura;}

};
}
#endif // PIRAMIDE_H

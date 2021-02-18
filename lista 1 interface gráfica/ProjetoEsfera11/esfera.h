#ifndef ESFERA_H
#define ESFERA_H
#include <QString>
namespace lia{
class Esfera
{
private:
    float raio;
public:
    Esfera();
    float getRaio()const{return raio;}
    void setRaio(float raio1);
    float area()const{return 4*3.1415*raio*raio;}
    float volume()const{return (4.0/3.0)*3.1415*raio*raio*raio;}
};
}
#endif // ESFERA_H

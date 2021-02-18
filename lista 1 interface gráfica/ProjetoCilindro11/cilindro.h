#ifndef CILINDRO_H
#define CILINDRO_H
#include <QString>
namespace lia{
class Cilindro
{
private:
    float raio;
    float altura;
public:
    Cilindro();
    float getRaio()const{return raio;}
    float getAltura()const{return altura;}

    void setRaio(float raio1);
    void setAltura(float altura1);

    float areal()const{return 2*3.1415*raio*altura;}
    float areat()const{return 2*3.1415*raio*(altura+raio);}
    float volume()const{return 3.1415*raio*raio*altura;}
};
}
#endif // CILINDRO_H

#ifndef CONE_H
#define CONE_H
#include <cmath>
#include <QString>
namespace lia{
class Cone
{
private:
    float raio;
    float altura;
public:
    Cone();
    float getRaio()const{return raio;}
    float getAltura()const{return altura;}
    void setRaio(float raio1);
    void setAltura(float altura1);

    float geratriz()const{return sqrt(altura*altura+raio*raio);}
    float areal()const{return 3.1415*raio*geratriz();}
    float areat()const{return 3.1415*raio*(geratriz()+raio);}
    float volume()const{return 1.0/3.0*3.1415*raio*raio*altura;}
};
}
#endif // CONE_H

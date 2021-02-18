#include "piramide.h"
namespace lia{
void Piramide::setBase(float base)
{
    if (base<0)
       throw std::string ("O valor da base nao pode ser negativo.\n");
    this->base=base;
}
void Piramide::setAltura(float altura)
{
   if (altura<0)
       throw  std::string ("o valor da altura nao pode ser negativo.\n");
    this->altura=altura;
}
Piramide::Piramide():
    base(0),
    altura(0)
{

}
}

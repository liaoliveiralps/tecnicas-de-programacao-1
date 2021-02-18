#ifndef ELEITOR_H
#define ELEITOR_H
#include <string>
namespace lia{
class eleitor
{
private:
    std::string nome;
    int ano;
public:
    eleitor();
    std::string getNome()const{return nome;}
    int getAno()const{return ano;}
    void setNome(std::string nome){this->nome=nome;}
    void setAno(int ano){this->ano=ano;
         if (ano<0)
             throw std::string ("Ano de nascimento inválido.");
                        }
    float calculo()const{return (2019-ano);}
};
}
#endif // ELEITOR_H

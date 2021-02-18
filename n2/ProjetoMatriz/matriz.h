#ifndef MATRIZ_H
#define MATRIZ_H
#include <QString>
namespace tp1{
class Matriz
{
private:
    int quantidadeLinha;
    int quantidadeColuna;
    int *matriz;
public:
    Matriz(int qLinha, int qColuna);
    int getQuantidadeDeLinhas()const{return quantidadeLinha;}
    int getQuantidadeDeColunas()const{return quantidadeColuna;}
};
}
#endif // MATRIZ_H

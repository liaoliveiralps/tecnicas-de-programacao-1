#ifndef MATRIZ_H
#define MATRIZ_H
#include <QString>
namespace lia{
class Matriz
{
private:
    int quantidadeDeLinhas;
    int quantidadeDeColunas;
    int *matriz;
public:
    Matriz(int qLinhas, int qColunas);
        ~Matriz(){if(matriz) delete[] matriz;}
        int getQuantidadeDeLinhas()const{return quantidadeDeLinhas;}
        int getQuantidadeDeColunas()const{return quantidadeDeColunas;}

        void setElemento(int elemento, int linha, int coluna)const;
        int getElemento(int linha, int coluna)const;
        QString getMatriz()const;
        Matriz* adicionar (Matriz const * const mat)const;
};
}
#endif // MATRIZ_H

#include "matriz.h"
namespace tp1 {
Matriz::Matriz(int qLinha, int qColuna):
    quantidadeLinha(0),
    quantidadeColuna(0),
    matriz(0)
{
    if(qLinha<=0)
        throw QString ("Quantidade de linhas não pode ser menor ou igual a zero");
    if(qColuna<=0)
        throw QString ("Quantidade de colunas não pode ser menor ou igual a zero");
    try {
        matriz = new int[qLinha*qColuna];
        quantidadeLinha = qLinha;
        quantidadeColuna = qColuna;
    } catch (std::bad_alloc&) {
        throw QString("Memória insuficiente.");
    }
}
}

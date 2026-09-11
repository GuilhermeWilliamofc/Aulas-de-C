/*
1. Inicialização, consulta e percurso
Implemente as funções abaixo. A impressão deve percorrer a lista do primeiro ao último nó; para uma lista
vazia, imprima somente uma quebra de linha.
void inicializar(Lista *lista);
int estaVazia(Lista lista);
int obterQuantidade(Lista lista);
void imprimir(Lista lista);
*/

#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main(){
    Lista lista1;

    printf("Lista sem elementos:\n");
    inicializar(&lista1);
    imprimir(lista1);
    printf("Tamanho da Lista: %d Elemento(s)\n", obterQuantidade(lista1));

    printf("\nLista com 5 elementos:\n");
    preencherLista(&lista1, 5); // fiz essa funcao pra testar quando tem elementos
    imprimir(lista1);
    printf("Tamanho da Lista: %d Elemento(s)\n", obterQuantidade(lista1));

    return 0;
}

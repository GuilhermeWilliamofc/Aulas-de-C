/*
4. Remoção da primeira ocorrência
Implemente a remoção da primeira ocorrência do valor. Retorne 1 se um nó for removido e 0 se o valor não
existir. Trate lista vazia, nó inicial, intermediário, final e único; libere o nó removido e atualize quantidade apenas
no sucesso.
int remover(Lista *lista, int valor);
*/

#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main() {
    Lista lista;

    inicializar(&lista);

    inserirFinal(&lista, 10);
    inserirFinal(&lista, 20);
    inserirFinal(&lista, 30);
    inserirFinal(&lista, 40);

    printf("--- Lista Inicial ---\n");
    imprimir(lista);
    printf("\n");

    printf("Tentando remover o valor 20...\n");
    if (remover(&lista, 20)) {
        printf("Sucesso ao remover 20!\n");
    } else {
        printf("Valor 20 nao encontrado.\n");
    }
    imprimir(lista);
    printf("\n");

    printf("Tentando remover o valor 10 (inicio)...\n");
    if (remover(&lista, 10)) {
        printf("Sucesso ao remover 10!\n");
    } else {
        printf("Valor 10 nao encontrado.\n");
    }
    imprimir(lista);
    printf("\n");

    printf("Tentando remover o valor 40 (final)...\n");
    if (remover(&lista, 40)) {
        printf("Sucesso ao remover 40!\n");
    } else {
        printf("Valor 40 nao encontrado.\n");
    }
    imprimir(lista);
    printf("\n");

    printf("Tentando remover o valor 99 (nao existe)...\n");
    if (remover(&lista, 99)) {
        printf("Sucesso ao remover 99!\n");
    } else {
        printf("Valor 99 nao encontrado na lista.\n");
    }
    imprimir(lista);

    return 0;
}
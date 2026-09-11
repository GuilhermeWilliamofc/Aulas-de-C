/*
2. Inserção no início e no final
Implemente as duas inserções. Retorne 1 em caso de sucesso e 0 se a alocação falhar. Trate lista vazia e não
vazia; quantidade só deve ser alterada após uma inserção bem-sucedida.
int inserirInicio(Lista *lista, int valor);
int inserirFinal(Lista *lista, int valor);
*/

#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main(){
    Lista lista1;

    inicializar(&lista1);

    printf("Inserindo no comeco...\n");
    inserirInicio(&lista1, 20);
    inserirInicio(&lista1, 10);
    imprimir(lista1);

    printf("\nInserindo no final...\n");
    inserirFinal(&lista1, 30);
    inserirFinal(&lista1, 40);
    imprimir(lista1);

    printf("\nTotal de elementos: %d\n", obterQuantidade(lista1));

    return 0;
}
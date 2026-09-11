/*
3. Busca de um valor
Implemente a busca sequencial abaixo sem modificar a lista. Retorne 1 se existir ao menos um nó com o valor
procurado e 0 caso contrário. Teste valor no início, no final, repetido, ausente e lista vazia.
int buscar(Lista lista, int valor);
*/

#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main() {
    Lista lista;

    inicializar(&lista);
    printf("Teste 1: Lista Vazia\n");
    printf("Buscar 10 na lista vazia: %d (Esperado: 0)\n\n", buscar(lista, 10));

    inserirFinal(&lista, 10);
    inserirFinal(&lista, 20);
    inserirFinal(&lista, 30);
    inserirFinal(&lista, 10);

    printf("Lista Completa:\n");
    imprimir(lista);
    printf("\n");

    printf("Teste 2: Valor no Inicio\n");
    printf("Buscar 10: %d (Esperado: 1)\n\n", buscar(lista, 10));

    printf("Teste 3: Valor no Final\n");
    printf("Buscar 30: %d (Esperado: 1)\n\n", buscar(lista, 30));

    printf("Teste 4: Valor Repetido\n");
    printf("Buscar 10 (aparece 2x): %d (Esperado: 1)\n\n", buscar(lista, 10));

    printf("Teste 5: Valor Ausente\n");
    printf("Buscar 99: %d (Esperado: 0)\n\n", buscar(lista, 99));

    return 0;
}
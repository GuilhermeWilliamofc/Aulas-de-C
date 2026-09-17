/*
5. Liberação e teste integrado
Implemente liberar para desalocar todos os nós e restaurar o estado vazio. Em main, construa 10 → 20 → 30 →
40, imprima a lista, consulte 30 e 99, realize remoções que exercitem início, meio, fim e valor ausente, e confira
quantidade após cada operação. Ao final, libere a estrutura e confirme que ela está vazia.
void liberar(Lista *lista);
Invariantes a preservar: lista vazia implica inicio == NULL e quantidade == 0; o último nó aponta para NULL;
quantidade corresponde ao número de nós alcançáveis a partir de inicio.
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

    printf("--- Estado Inicial ---\n");
    imprimir(lista);
    printf("Quantidade de nos: %d\n", obterQuantidade(lista));

    printf("\n--- Consultas ---\n");
    printf("Consulta 30: %s\n", buscar(lista, 30) ? "Encontrado" : "Nao encontrado");
    printf("Consulta 99: %s\n", buscar(lista, 99) ? "Encontrado" : "Nao encontrado");

    printf("\n--- Remocoes ---\n");

    remover(&lista, 10);
    printf("Apos remover inicio (10):\n");
    imprimir(lista);
    printf("Quantidade de nos: %d\n\n", obterQuantidade(lista));

    remover(&lista, 30);
    printf("Apos remover meio (30):\n");
    imprimir(lista);
    printf("Quantidade de nos: %d\n\n", obterQuantidade(lista));

    remover(&lista, 40);
    printf("Apos remover fim (40):\n");
    imprimir(lista);
    printf("Quantidade de nos: %d\n\n", obterQuantidade(lista));

    int rm_ausente = remover(&lista, 99);
    printf("Tentativa de remover ausente (99) [%s]:\n", rm_ausente ? "Sucesso" : "Falha");
    imprimir(lista);
    printf("Quantidade de nos: %d\n", obterQuantidade(lista));

    printf("\n--- Liberacao ---\n");
    liberar(&lista);
    imprimir(lista);

    if (estaVazia(lista) && obterQuantidade(lista) == 0) {
        printf("Confirmacao: A lista esta totalmente vazia e zerada.\n");
    }

    return 0;
}
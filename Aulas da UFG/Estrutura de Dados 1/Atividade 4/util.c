#include <stdio.h>
#include <stdlib.h>

#include "util.h"

void inicializar(Lista *lista){
    lista->inicio = NULL;
    lista->quantidade = 0;
}

int estaVazia(Lista lista){
    if (lista.quantidade == 0 && lista.inicio == NULL){
        return 1;
    }

    return 0;
}

int obterQuantidade(Lista lista){
    return lista.quantidade;
}

void imprimir(Lista lista){
    No *atual = lista.inicio;

    for (int i = 0; i < lista.quantidade; i++){
        printf("%d Elemento: %d\n", i+1, atual->valor);
        atual = atual->proximo;
    }
}
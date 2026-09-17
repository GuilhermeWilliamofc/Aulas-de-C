/*
Você está criando uma lista de compras simples, em que cada item é representado só por um código inteiro. Por enquanto, você só precisa conseguir criar a lista vazia e adicionar itens no início dela.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    int codigo;
    struct Item *proximo;
} Item;

typedef struct {
    Item *inicio;
    int quantidade;
} ListaCompras;

void inicializar(ListaCompras *lista) {
    lista->inicio = NULL;
    lista->quantidade = 0;
}

int inserirInicio(ListaCompras *lista, int codigo) {
    Item *novo_item = malloc(sizeof *novo_item);

    if (novo_item == NULL){
        return 1;
    }

    novo_item->codigo = codigo;
    novo_item->proximo = lista->inicio;

    lista->inicio = novo_item;
    lista->quantidade++;
    return 0;
}

void imprimir(ListaCompras lista) {
    Item *atual = lista.inicio;

    while(atual != NULL){
        printf("%d\n", atual->codigo);
        atual = atual->proximo;
    }
}
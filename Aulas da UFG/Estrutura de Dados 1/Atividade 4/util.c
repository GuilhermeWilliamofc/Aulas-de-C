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
    if (estaVazia(lista)){
        printf("A Lista esta Vazia\n");
        return;
    }

    No *atual = lista.inicio;

    for (int i = 0; i < lista.quantidade; i++){
        printf("%d Elemento: %d\n", i+1, atual->valor);
        atual = atual->proximo;
    }
}

void preencherLista(Lista *lista, int quantidade){
    lista->inicio = NULL;
    lista->quantidade = 0;

    No *ultimo = NULL;

    for (int i = 0; i < quantidade; i++) {
        No *novo = (No *) malloc(sizeof(No));
        if (novo == NULL) {
            printf("Erro ao alocar memoria!\n");
            return;
        }

        novo->valor = i;
        novo->proximo = NULL;

        if (lista->inicio == NULL) {
            lista->inicio = novo;
        } else {
            ultimo->proximo = novo;
        }

        ultimo = novo;
        lista->quantidade++;
    }
}

int inserirInicio(Lista *lista, int valor){
    No *novo_no = malloc(sizeof *novo_no);

    if(novo_no == NULL){
        return 0;
    }

    novo_no->valor = valor;
    novo_no->proximo = lista->inicio;

    lista->inicio = novo_no;
    lista->quantidade++;

    return 1;
}

int inserirFinal(Lista *lista, int valor){
    No *novo_no = malloc(sizeof *novo_no);

    if(novo_no == NULL){
        return 0;
    }

    novo_no->valor = valor;
    novo_no->proximo = NULL;

    if(lista->inicio == NULL){
        lista->inicio = novo_no;
        lista->quantidade++;
        return 1;
    }

    No *atual = lista->inicio;

    while(atual->proximo != NULL){
        atual = atual->proximo;
    }

    atual->proximo = novo_no;
    lista->quantidade++;

    return 1;
}

int buscar(Lista lista, int valor){
    No *atual = lista.inicio;

    while (atual != NULL){
        if (atual->valor == valor){
            return 1;
        }

        atual = atual->proximo;
    }

    return 0;
}

int remover(Lista *lista, int valor){
    No *anterior = NULL;
    No *atual = lista->inicio;

    while (atual != NULL && atual->valor != valor){
        anterior = atual;
        atual = atual->proximo;
    }

    if(atual == NULL) {
        return 0;
    }

    if(anterior == NULL) {
        lista->inicio = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
    lista->quantidade--;

    return 1;
}

void liberar(Lista *lista){
    No *atual = lista->inicio;

    while (atual != NULL) {
        No *temp = atual->proximo;
        free(atual);
        atual = temp;
    }
    
    lista->inicio = NULL;
    lista->quantidade = 0;
}
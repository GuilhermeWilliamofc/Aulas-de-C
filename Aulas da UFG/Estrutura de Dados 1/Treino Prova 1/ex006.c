#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct No {
    int codigo;
    struct No *proximo;
} No;

typedef struct {
    No *primeiro;
    int quantidade;
} FilaEvacuacao;

void inicializar(FilaEvacuacao *fila){
    fila->primeiro = NULL;
    fila->quantidade = 0;
}

int buscar(FilaEvacuacao fila, int codigo){
    if (fila.primeiro == NULL){
        return 0;
    }

    No *atual = fila.primeiro;

    while (atual != NULL){
        if (atual->codigo == codigo){
            return 1;
        }
        atual = atual->proximo;
    }

    return 0;
}

int inserirFinal(FilaEvacuacao *fila, int codigo){
    if (fila == NULL || codigo <= 0 || buscar(*fila, codigo)){
        return 0;
    }

    No *novo_no = malloc(sizeof *novo_no);

    if (novo_no == NULL){
        return 0;
    }

    novo_no->codigo = codigo;
    novo_no->proximo = NULL;

    No *atual = fila->primeiro;

    if (atual == NULL){
        fila->primeiro = novo_no;
        fila->quantidade++;
        return 1;
    }

    while (atual->proximo != NULL){
        atual = atual->proximo;
    }

    atual->proximo = novo_no;
    fila->quantidade++;
    return 1;
}

int remover(FilaEvacuacao *fila, int codigo){
    if (fila == NULL || fila->primeiro == NULL){
        return 0;
    }

    No *atual = fila->primeiro;

    if (atual->codigo == codigo){
        fila->primeiro = atual->proximo;
        free(atual);
        fila->quantidade--;
        return 1;
    }

    No *anterior = atual;
    atual = atual->proximo;

    while (atual != NULL){
        if (atual->codigo == codigo){
            anterior->proximo = atual->proximo;
            free(atual);
            fila->quantidade--;
            return 1;
        }
        anterior = atual;
        atual = atual->proximo;
    }

    return 0;
}

void liberar(FilaEvacuacao *fila){
    if (fila == NULL || fila->primeiro == NULL){
        return;
    }

    No *atual = fila->primeiro;

    while (atual != NULL){
        No *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    fila->primeiro = NULL;
    fila->quantidade = 0;
}
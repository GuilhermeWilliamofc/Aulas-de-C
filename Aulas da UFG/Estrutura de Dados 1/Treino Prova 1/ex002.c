#include <stdio.h>
#include <stdlib.h>

typedef struct Documento {
    int codigo;
    int paginas;
    struct Documento *proximo;
} Documento;

typedef struct {
    Documento *inicio;
    int quantidade;
} FilaImpressao;

void inicializarFila(FilaImpressao *fila) {
    fila->inicio = NULL;
    fila->quantidade = 0;
}

int enfileirar(FilaImpressao *fila, int codigo, int paginas) {
    /* TODO: insere no FINAL */
    if (fila == NULL || codigo <= 0 || paginas <= 0){
        return 0;
    }

    Documento *novo_documento = malloc(sizeof *novo_documento);

    if (novo_documento == NULL){
        return 0;
    }

    novo_documento->codigo = codigo;
    novo_documento->paginas = paginas;
    novo_documento->proximo = NULL;

    Documento *atual = fila->inicio;

    if (atual == NULL){
        fila->inicio = novo_documento;
        fila->quantidade++;
        return 1;
    }

    while (atual->proximo != NULL){
        atual = atual->proximo;
    }

    atual->proximo = novo_documento;
    fila->quantidade++;
    return 1;
}

int desenfileirar(FilaImpressao *fila, int *codigo, int *paginas) {
    /* TODO: remove do INICIO e devolve os dados via ponteiro */
    Documento *atual = fila->inicio;

    if (atual == NULL){
        return 0;
    }

    *codigo = atual->codigo;
    *paginas = atual->paginas;

    fila->inicio = atual->proximo;
    free(atual);
    fila->quantidade--;
    return 1;
}

int main() {
    FilaImpressao fila;
    inicializarFila(&fila);

    enfileirar(&fila, 101, 15);
    enfileirar(&fila, 102, 30);

    int cod, pag;
    while (desenfileirar(&fila, &cod, &pag)) {
        printf("Imprimindo Doc: %d | Paginas: %d\n", cod, pag);
    }

    return 0;
}
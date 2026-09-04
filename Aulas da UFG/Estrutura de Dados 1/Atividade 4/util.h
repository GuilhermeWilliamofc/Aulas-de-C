#ifndef UTIL_H
#define UTIL_H

#include <stddef.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct {
    No *inicio;
    int quantidade;
} Lista;

void inicializar(Lista *lista);
int estaVazia(Lista lista);
int obterQuantidade(Lista lista);
void imprimir(Lista lista);

#endif
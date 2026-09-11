#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int codigo;
    struct No *proximo;
} No;

typedef struct {
    No *primeiro;
    int quantidade;
} ListaChamados;

void inicializar(ListaChamados *lista) {
    /* TODO: implemente esta funcao. */
    (void)lista;
}

No *buscar(ListaChamados lista, int codigo) {
    /* TODO: implemente esta funcao. */
    (void)lista;
    (void)codigo;
    return NULL;
}

int contar(ListaChamados lista) {
    /* TODO: implemente esta funcao. */
    (void)lista;
    return -1;
}

int inserirInicio(ListaChamados *lista, int codigo) {
    /* TODO: implemente esta funcao. */
    (void)lista;
    (void)codigo;
    return -1;
}

int inserirFinal(ListaChamados *lista, int codigo) {
    /* TODO: implemente esta funcao. */
    (void)lista;
    (void)codigo;
    return -1;
}

int remover(ListaChamados *lista, int codigo) {
    /* TODO: implemente esta funcao. */
    (void)lista;
    (void)codigo;
    return -1;
}

void imprimir(ListaChamados lista) {
    /* TODO: implemente esta funcao. */
    (void)lista;
}

void liberar(ListaChamados *lista) {
    /* TODO: implemente esta funcao. */
    (void)lista;
}

int main(void) {
    /* TODO: implemente o programa principal. */
    return 0;
}
#ifndef UTIL_H
#define UTIL_H

#include <stddef.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct Lista {
    No inicio;
    int quantidade;
} Lista;

int* gerar_vetor(size_t quantidade);

int* realocar_vetor(int *numeros, size_t nova_quantidade);

int preencher_vetor(int quantidade, int *vetor);

int printar_vetor(int quantidade, int *vetor);

int maior(int quantidade, int *vetor);

int menor(int quantidade, int *vetor);

int media(int quantidade, int *vetor);

#endif

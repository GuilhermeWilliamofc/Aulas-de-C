#ifndef UTIL_H
#define UTIL_H

#include <stddef.h>

int* gerar_vetor(size_t quantidade);

int* realocar_vetor(size_t nova_quantidade);

int preencher_vetor(int quantidade, int *vetor);

int printar_vetor(int quantidade, int *vetor);

int maior(int quantidade, int *vetor);

int menor(int quantidade, int *vetor);

int media(int quantidade, int *vetor);

#endif

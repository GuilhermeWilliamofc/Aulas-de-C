/*
1. Vetor dinâmico
Leia uma quantidade N, aloque com malloc um vetor de N inteiros e leia seus valores. Em seguida,
imprima todos os elementos na ordem de entrada e libere a memória com free.
*/

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(){
    int quantidade;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &quantidade);

    int *vetor = gerar_vetor((size_t) quantidade);

    preencher_vetor(quantidade, vetor);
    printf("\n");
    printar_vetor(quantidade, vetor);

    free(vetor);
    system("pause");
    return 0;
}
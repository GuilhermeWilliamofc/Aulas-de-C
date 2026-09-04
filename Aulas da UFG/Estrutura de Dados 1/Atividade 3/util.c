#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int* gerar_vetor(size_t quantidade) {
    int *numeros;
    int tamanho_tipo = sizeof *numeros;

    numeros = malloc(quantidade * tamanho_tipo);

    if (numeros == NULL) {
        return NULL;
    }

    return numeros;
}

int* realocar_vetor(int *numeros, size_t nova_quantidade) {
    int *novo_numeros;

    novo_numeros = realloc(numeros, nova_quantidade * sizeof *numeros);

    if (novo_numeros == NULL) {
        printf("Nao foi possivel realocar o vetor\n");
        return NULL;
    }

    return novo_numeros;
}

int preencher_vetor(int quantidade, int *vetor) {
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o %d Valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    return 0;
}

int printar_vetor(int quantidade, int *vetor) {
    printf("Printando todos os valores do vetor...\n");

    for (int i = 0; i < quantidade; i++) {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}

int maior(int quantidade, int *vetor){
    int maior;
    maior = vetor[0];

    for (int i = 1; i < quantidade; i++) {
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("O numero %d eh o maior\n", maior);

    return 0;
}

int menor(int quantidade, int *vetor){
    int menor;
    menor = vetor[0];

    for (int i = 1; i < quantidade; i++) {
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("O numero %d eh o menor\n", menor);

    return 0;
}

int media(int quantidade, int *vetor){
    float soma = 0;
    int maior_media = 0;

    for (int i = 0; i < quantidade; i++) {
        soma += vetor[i];
    }

    float media = soma / quantidade;

    printf("a media do vetor eh igual a: %.2f\n", media);

    for (int i = 0; i < quantidade; i++) {
        if (vetor[i] > media){
            maior_media += 1;
        }
    }

    printf("e %d valores sao maiores que a media\n", maior_media);

    return 0;
}
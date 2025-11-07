/* Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba valor do maior endereço de memória. */
#include <stdio.h>
#include <stdlib.h>

int* maior_endereco(int *endereco1, int *endereco2){
    int *maior = endereco1;

    if (endereco2 > maior){
        maior = endereco2;
    }

    return maior;
}

int main(){
    int inteiro1 = 1;
    int inteiro2 = 9;
    int *maior;

    int *ponteiro_inteiro1 = &inteiro1;
    int *ponteiro_inteiro2 = &inteiro2;

    maior = maior_endereco(&inteiro1, &inteiro2);

    printf("O ponteiro com o maior valor de endereco eh o ponteiro ");
    if (maior == &inteiro1){
        printf("1");
    }
    else if (maior == &inteiro2){
        printf("2");
    }
    printf(" que tem o endereco igual a: %p", maior);

    printf("\n");
    system("pause");
    return 0;
}
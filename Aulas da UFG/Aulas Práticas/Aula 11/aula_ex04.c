/* Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela. */
#include <stdio.h>
#include <stdlib.h>

void maior_e_menor_valor(int *valor1, int *valor2){
    int maior = *valor1;
    int menor = *valor2;

    if (*valor2 > maior){
        maior = *valor2;
        menor = *valor1;
    }

    *valor1 = maior;
    *valor2 = menor;
}

int main(){
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    maior_e_menor_valor(&valor1, &valor2);

    printf("O valor de A eh igual a: %d\nO valor de B eh igual a: %d", valor1, valor2);

    printf("\n");
    system("pause");
    return 0;
}
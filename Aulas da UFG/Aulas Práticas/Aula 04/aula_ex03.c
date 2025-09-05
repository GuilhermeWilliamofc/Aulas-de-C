/* Escreva um programa que receba um inteiro entre 1 e 7, inclusive, e
escreva o dia correspondente da semana (1 para domingo e 7 para
sábado). */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_digitado;

    printf("Digite um numero entre 1 a 7: ");
    scanf("%d", &num_digitado);

    switch (num_digitado)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terça-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 7:
        printf("Sabado");
        break;
    default:
        printf("Voce digitou um numero invalido!");
        break;
    }

    printf("\n");
    system("pause");
    return 0;
}
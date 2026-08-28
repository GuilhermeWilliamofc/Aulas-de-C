/*
1. Funções e modularização. Escreva um programa que leia três números inteiros e utilize funções
separadas para determinar o maior valor, o menor valor e a média aritmética.
• A função principal deve concentrar apenas a leitura, as chamadas das funções e a impressão dos
resultados.
*/

#include <stdio.h>

int maior(int num1, int num2, int num3){
    int maior;

    if (num1 > num2){
        maior = num1;
    }
    else{
        maior = num2;
    }

    if (num3 > maior){
        maior = num3;
    }

    return maior;
}

int menor(int num1, int num2, int num3){
    int menor;

    if (num1 < num2){
        menor = num1;
    }
    else{
        menor = num2;
    }

    if (num3 < menor){
        menor = num3;
    }

    return menor;
}

float media(int num1, int num2, int num3){
    return (num1 + num2 + num3) / 3;
}

int main(){
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Maior valor: %d\n", maior(num1, num2, num3));
    printf("Menor valor: %d\n", menor(num1, num2, num3));
    printf("Media aritmetica: %.2f\n", media(num1, num2, num3));

    return 0;
}
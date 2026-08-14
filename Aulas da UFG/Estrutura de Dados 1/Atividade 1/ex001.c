/*
1. Escreva a assinatura de uma função chamada maior que recebe dois números inteiros e retorna o maior
deles.
*/

#include <stdio.h>

int maior(int num1, int num2){
    if (num1 > num2){
        return num1;
    }

    return num2;
}

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("O maior entre eles eh: %d", maior(num1, num2));

    return 0;
}
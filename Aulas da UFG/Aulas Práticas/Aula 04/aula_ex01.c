/* Escreva um programa que receba dois números do usuário e realize
a divisão do primeiro pelo segundo. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("A divisao do primeiro valor (%.2f) pelo segundo valor (%.2f) eh igual a %.2f\n", num1, num2, num1/num2);

    system("pause");
    return 0;
}
/* Escreva um programa que receba 1 número inteiro e 2 números
reais. O número inteiro corresponde à operação matemática a ser
realizada, conforme mostrado abaixo (apresente o menu abaixo
para o usuário). Os números reais devem ser utilizados para
calcular o resultado da operação desejada. Mostre o resultado da
operação para o usuário.
○ Digite a operacao desejada:
○ “1 – Adicao”
○ “2 – Subtracao”
○ “3 – Multiplicacao”
○ “4 – Divisao” */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    float num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num2);

    printf("Digite o segundo numero: ");
    scanf("%f", &num3);

    printf("Digite a operacao desejada:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite: ");
    scanf("%d", &num1);

    switch (num1)
    {
    case 1:
        printf("A adicao entre %.2f e %.2f eh igual a %.2f", num2, num3, num2 + num3);
        break;
    case 2:
        printf("A subtracao entre %.2f e %.2f eh igual a %.2f", num2, num3, num2 - num3);
        break;
    case 3:
        printf("A multiplicacao entre %.2f e %.2f eh igual a %.2f", num2, num3, num2 * num3);
        break;
    case 4:
        printf("A divisao entre %.2f e %.2f eh igual a %.2f", num2, num3, num2 / num3);
        break;
    default:
        printf("Voce digitou uma operacao invalida!");
        break;
    }

    printf("\n");
    system("pause");
    return 0;
}
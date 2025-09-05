/* Escreva um programa que receba 4 números reais e informe qual é
o menor número dentre eles. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2, num3, num4, maior;

    printf("Digite o primeiro valor real: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo valor real: ");
    scanf("%f", &num2);

    printf("Digite o terceiro valor real: ");
    scanf("%f", &num3);

    printf("Digite o quarto valor real: ");
    scanf("%f", &num4);

    maior = num1;

    if (num2 > maior){
        maior = num2;
    }
    if (num3 > maior){
        maior = num3;
    }
    if (num4 > maior){
        maior = num4;
    }

    printf("O maior numero digitado foi %.2f\n", maior);

    system("pause");
    return 0;
}
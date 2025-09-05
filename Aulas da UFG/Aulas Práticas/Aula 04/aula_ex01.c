/* Escreva um programa que receba dois números do usuário e realize
a divisão do primeiro pelo segundo. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("A divisão do primeiro valor (%d) pelo segundo valor (%d) eh igual a %.2f\n", num1, num2, num1/num2);

    system("pause");
    return 0;
}
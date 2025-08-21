#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);

    printf("Subtração: %d\n", num1 - num2);

    system("pause");
    return 0;
}
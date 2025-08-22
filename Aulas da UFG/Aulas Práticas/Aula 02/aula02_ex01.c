#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("Digite outro número: ");
    scanf("%f", &num2);

    printf("\nO segundo número digitado foi \"%.2f\"\n", num2);
    printf("O primeiro número digitado foi \"%.2f\"\n", num1);
    
    system("pause");
    return 0;
}
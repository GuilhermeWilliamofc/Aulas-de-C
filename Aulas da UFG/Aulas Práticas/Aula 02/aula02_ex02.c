#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    printf("A soma entre %.2f + %.2f + %.2f = %.2f\n", num1, num2, num3, num1 + num2 + num3);
    
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3, num4;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    printf("Digite o quarto número: ");
    scanf("%f", &num4);

    printf("A mÃ©dia aritmética entre %.2f, %.2f, %.2f e %.2f é igual a %.2f\n", num1, num2, num3, num4, (num1 + num2 + num3 + num4) / 4);
    
    system("pause");
    return 0;
}
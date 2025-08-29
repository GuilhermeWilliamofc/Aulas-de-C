/* Receba dois números e mostre qual deles é o maior */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O primeiro valor (%d) eh maior do que o segundo valor (%d)\n", num1, num2);
    }
    else if (num1 == num2){
        printf("Ambos os valores sao iguais");
    }
    else{
        printf("O segundo valor (%d) eh maior do que o primeiro valor (%d)\n", num2, num1);
    }

    system("pause");
    return 0;
}
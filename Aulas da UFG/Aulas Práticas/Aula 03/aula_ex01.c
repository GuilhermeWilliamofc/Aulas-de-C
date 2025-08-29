/* Leia 2 números e imprima se os valores dos números são iguais */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    if (num1 == num2){
        printf("Ambos os numeros sao iguais!\n");
    }

    system("pause");
    return 0;
}
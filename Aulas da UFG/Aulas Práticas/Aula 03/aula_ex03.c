/* receba 2 números e calcule a soma dos números digitados e indique o valor do maior e do menor número digitado */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("A soma entre %d e %d eh igual a %d\n", num1, num2, num1 + num2);

    if (num1 > num2){
        printf("O primeiro valor (%d) eh o maior numero digitado\n");
    }
    else if (num1 == num2){
        printf("Ambos os valores sao iguais\n");
    }
    else{
        printf("O segundo valor (%d) eh o maior numero digitado\n");
    }

    system("pause");
    return 0;
}
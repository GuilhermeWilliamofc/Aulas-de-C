/* informe se um número inteiro digitado pelo usuário é par ou ímpar (resto da divisão 0 é par, 1 é impar)*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O numero %d eh par\n", num);
    }
    else{
        printf("O numero %d eh impar\n", num);
    }

    system("pause");
    return 0;
}
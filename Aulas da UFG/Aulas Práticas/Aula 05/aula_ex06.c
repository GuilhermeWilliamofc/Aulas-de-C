/* 6. Escreva um programa que leia 5 números e escreva o menor valor lido e o
maior valor lido. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int maior, menor, num, cont = 0;

    for (cont = 0; cont < 5; cont ++){
        printf("Digite o %d valor: ", cont + 1);
        scanf("%d", &num);

        if (cont == 0){
            maior = num;
            menor = num;
        }

        if (num > maior){
            maior = num;
        }

        if (num < menor){
            menor = num;
        }   
    }

    printf("O maior valor digitado foi %d e o menor foi %d\n", maior, menor);

    system("pause");
    return 0;
}
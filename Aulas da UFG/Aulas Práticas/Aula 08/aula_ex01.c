/* Crie um programa que informa qual o menor número de uma matriz
 3x3 de números inteiros. Leia os valores da matriz pelo teclado. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriznum[3][3]; // linha x coluna
    int cont1, cont2;

    for(cont1 = 0; cont1 < 3; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 3; cont2++){ // para cada coluna
            printf("Digite um numero inteiro para o indice [%d][%d]: ", cont1, cont2);
            scanf("%d", &matriznum[cont1][cont2]);
        }
    }

    for(cont1 = 0; cont1 < 3; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 3; cont2++){ // para cada coluna
            printf("[%d] ", matriznum[cont1][cont2]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
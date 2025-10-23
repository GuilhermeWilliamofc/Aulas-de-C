/* Leia uma matriz 3x3, calcule e mostre sua transposta. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriznum[3][3];
    int cont1, cont2;

    for(cont1 = 0; cont1 < 3; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 3; cont2++){ // para cada coluna
            printf("Digite um numero para o indice [%d][%d]: ", cont1, cont2);
            scanf("%d", &matriznum[cont1][cont2]);
        }
    }

    printf("\nA matriz original eh:\n");

    for(cont1 = 0; cont1 < 3; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 3; cont2++){ // para cada coluna
            printf("[%d] ", matriznum[cont1][cont2]);
        }
        printf("\n");
    }

    printf("\nA transposta dessa matriz eh:\n");

    for(cont1 = 0; cont1 < 3; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 3; cont2++){ // para cada coluna
            printf("[%d] ", matriznum[cont2][cont1]); // transposta somente inverte as linhas e colunas...
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
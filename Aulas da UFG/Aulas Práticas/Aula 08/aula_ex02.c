/* Leia 2 matrizes 3x2, mostre elas na tela. Calcule e mostre a soma
 (elemento a elemento) entre elas. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriznumeros1[3][2];
    int matriznumeros2[3][2];
    int cont1, cont2;
    int soma = 0;

    printf("Primeira Matriz\n");

    for(cont1 = 0; cont1 < 3; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 2; cont2++){ // para cada coluna
            printf("Digite um numero para o indice [%d][%d]: ", cont1, cont2);
            scanf("%d", &matriznumeros1[cont1][cont2]);
        }
    }

    printf("\nSegunda Matriz\n");

    for(cont1 = 0; cont1 < 3; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 2; cont2++){ // para cada coluna
            printf("Digite um numero para o indice [%d][%d]: ", cont1, cont2);
            scanf("%d", &matriznumeros2[cont1][cont2]);
        }
    }

    printf("\nPrimeira Matriz:\n");

    for(cont1 = 0; cont1 < 3; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 2; cont2++){ // para cada coluna
            printf("[%d] ", matriznumeros1[cont1][cont2]);
            soma += matriznumeros1[cont1][cont2]; // faz a soma da primeira matriz
        }
        printf("\n");
    }

    printf("\nSegunda Matriz:\n");

    for(cont1 = 0; cont1 < 3; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 2; cont2++){ // para cada coluna
            printf("[%d] ", matriznumeros2[cont1][cont2]);
            soma += matriznumeros2[cont1][cont2]; // faz a soma da segunda matriz
        }
        printf("\n");
    }

    printf("\n");

    printf("A soma de todos os elementos da primeira e segunda matriz eh igual a: %d\n", soma);

    system("pause");
    return 0;
}
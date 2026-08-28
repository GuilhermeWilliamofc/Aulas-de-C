/*
3. Declare uma matriz de inteiros com 3 linhas e 4 colunas e escreva um trecho de código que percorra
todos os seus elementos.
*/

#include <stdio.h>
#define LINHAS 3
#define COLUNAS 4

int main(){
    int matriz[LINHAS][COLUNAS];
    int valores_da_matriz = 0;

    for (int cont = 0; cont < LINHAS; cont++){
        for(int cont2 = 0; cont2 < COLUNAS; cont2++){
            matriz[cont][cont2] = valores_da_matriz;
            printf("Matriz[%d][%d]: ", cont, cont2);
            printf("%d\n", matriz[cont][cont2]);
            valores_da_matriz++;
        }
    }

    printf("Outra representacao...\n");

    for (int cont = 0; cont < LINHAS; cont++){
        for(int cont2 = 0; cont2 < COLUNAS; cont2++){
            printf("%d\t", matriz[cont][cont2]);
        }
        printf("\n");
    }

    return 0;
}
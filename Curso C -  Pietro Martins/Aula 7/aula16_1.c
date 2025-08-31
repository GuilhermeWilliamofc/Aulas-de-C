#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][3] = {
        {1, 2, 3}, // linha 0
        {4, 5, 6}, // linha 1
        {7, 8, 9} // linha 2
    };
    int linha, coluna;

    printf("-------------------------------\n");
    printf("Imprimindo a primeira linha:\n");
    for (coluna = 0; coluna < 3; coluna++){ // para cada coluna da matriz
        if (coluna < 2){ // se não for o último elemento
            printf("%d, ", matriz[0][coluna]);
        }
        else{ // se for o último elemento da linha
            printf("%d\n", matriz[0][coluna]);
        }
    }

    printf("-------------------------------\n");
    printf("Imprimindo a matriz toda:\n");
    for (linha = 0; linha < 3; linha++){ // para cada linha da matriz
        for (coluna = 0; coluna < 3; coluna++){ // para cada coluna da matriz
            if (coluna < 2){ // se não for o último elemento da linha
                printf("%d, ", matriz[linha][coluna]);
            }
            else{ // se for o último elemento da linha
                printf("%d\n", matriz[linha][coluna]);
            }
        }
    }

    printf("-------------------------------\n");
    system("pause");
    return 0;
}
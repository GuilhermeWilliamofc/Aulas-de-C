#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][3]; // você declara o tamanho da matriz, nesse caso é uma matriz 3x3 (3 linhas e 3 colunas)

    // linha 0 (A contagem começa do 0 e vai até N-1, sendo N o tamanho da matriz)
    matriz[0][0] = 1; // coluna 0
    matriz[0][1] = 2; // coluna 1
    matriz[0][2] = 3; // coluna 2

    // linha 1
    matriz[1][0] = 4; // coluna 0
    matriz[1][1] = 5; // coluna 1
    matriz[1][2] = 6; // coluna 2

    // linha 2
    matriz[2][0] = 7; // coluna 0
    matriz[2][1] = 8; // coluna 1
    matriz[2][2] = 9; // coluna 2

    printf("-------------------------------\n");
    printf("Imprimindo a primeira linha da matriz:\n");
    printf("%d, %d, %d\n", matriz[0][0], matriz[0][1], matriz[0][2]);

    printf("-------------------------------\n");
    printf("Imprimindo a segunda linha da matriz:\n");
    printf("%d, %d, %d\n", matriz[1][0], matriz[1][1], matriz[1][2]);

    printf("-------------------------------\n");
    printf("Imprimindo a terceira linha da matriz:\n");
    printf("%d, %d, %d\n", matriz[2][0], matriz[2][1], matriz[2][2]);

    printf("-------------------------------\n");
    system("pause");
    return 0;
}
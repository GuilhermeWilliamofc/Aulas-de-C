/*
3. Processamento de matrizes. Leia dois números inteiros N e M representando, respectivamente, a
quantidade de linhas e de colunas da matriz. Em seguida, leia os N × M valores inteiros da matriz e
implemente funções para:
• encontrar o maior elemento e informar sua posição;
• calcular a soma dos elementos de cada linha e de cada coluna;
• calcular a média de todos os elementos;
• contar quantos elementos possuem valor superior à média.
*/

#include <stdio.h>

#define LINHAS 100
#define COLUNAS 100

int maior(int matriz[LINHAS][COLUNAS], int linhas, int colunas){
    int maior = matriz[0][0];
    for (int cont = 0; cont < linhas; cont++){
        for (int cont2 = 0; cont2 < colunas; cont2++){
            if (matriz[cont][cont2] > maior){
                maior = matriz[cont][cont2];
            }
        }
    }
    return maior;
}

void posicaoMaior(int matriz[LINHAS][COLUNAS], int linhas, int colunas, int maior){
    for (int cont = 0; cont < linhas; cont++){
        for (int cont2 = 0; cont2 < colunas; cont2++){
            if (matriz[cont][cont2] == maior){
                printf("Posicao do maior elemento: [%d][%d]\n", cont, cont2);
                return;
            }
        }
    }
}

void somaLinhas(int matriz[LINHAS][COLUNAS], int linhas, int colunas){
    int soma;
    for (int cont = 0; cont < linhas; cont++){
        soma = 0;

        for (int cont2 = 0; cont2 < colunas; cont2++){
            soma += matriz[cont][cont2];
        }

        printf("Soma da linha %d: %d\n", cont, soma);
    }
}

void somaColunas(int matriz[LINHAS][COLUNAS], int linhas, int colunas){
    int soma;
    for (int cont = 0; cont < colunas; cont++){

        soma = 0;

        for (int cont2 = 0; cont2 < linhas; cont2++){
            soma += matriz[cont2][cont];
        }

        printf("Soma da coluna %d: %d\n", cont, soma);
    }
}

float media(int matriz[LINHAS][COLUNAS], int linhas, int colunas){
    int soma = 0;
    for (int cont = 0; cont < linhas; cont++){

        for (int cont2 = 0; cont2 < colunas; cont2++){
            soma += matriz[cont][cont2];
        }
    }
    return (float)soma / (linhas * colunas);
}

int acimaMedia(int matriz[LINHAS][COLUNAS], int linhas, int colunas, float media){
    int quantidade = 0;
    for (int cont = 0; cont < linhas; cont++){
        for (int cont2 = 0; cont2 < colunas; cont2++){
            if (matriz[cont][cont2] > media){
                quantidade++;
            }
        }
    }

    return quantidade;
}

int main(){
    int matriz[LINHAS][COLUNAS];

    int linhas;
    int colunas;

    int maiorValor;
    float mediaMatriz;
    int quantidadeAcimaMedia;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    printf("\n");

    for (int cont = 0; cont < linhas; cont++){
        for (int cont2 = 0; cont2 < colunas; cont2++){
            printf("Matriz[%d][%d]: ", cont, cont2);
            scanf("%d", &matriz[cont][cont2]);
        }
    }
    printf("\n");

    maiorValor = maior(matriz, linhas, colunas);

    printf("Maior elemento: %d\n", maiorValor);

    posicaoMaior(matriz, linhas, colunas, maiorValor);
    printf("\n");

    somaLinhas(matriz, linhas, colunas);
    printf("\n");

    somaColunas(matriz, linhas, colunas);
    printf("\n");

    mediaMatriz = media(matriz, linhas, colunas);
    printf("Media dos elementos: %.2f\n", mediaMatriz);
    quantidadeAcimaMedia = acimaMedia(matriz, linhas, colunas, mediaMatriz);
    printf("Quantidade de elementos acima da media: %d\n", quantidadeAcimaMedia);

    return 0;
}
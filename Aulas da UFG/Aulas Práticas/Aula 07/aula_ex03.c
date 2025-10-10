/* Dada duas sequências de 4 números, calcule e imprima a soma de cada número com o
seu índice correspondente (exemplo: 𝑥[0] + 𝑦[0]; 𝑥[1] + 𝑦[1]; etc). */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int xnumeros[4];
    int ynumeros[4];
    int cont;
    int soma = 0;

    for (cont = 0; cont < 4; cont++){
        printf("Digite o %d Valor do Vetor X: ", cont + 1);
        scanf("%d", &xnumeros[cont]);
    }

    printf("\n");

    for (cont = 0; cont < 4; cont++){
        printf("Digite o %d Valor do Vetor Y: ", cont + 1);
        scanf("%d", &ynumeros[cont]);
    }

    printf("\nA Soma:\n");

    for (cont = 0; cont < 4; cont++){
        if (cont < 3){
            printf("%d + ", xnumeros[cont]);
            printf("%d + ", ynumeros[cont]);
        }
        else{
            printf("%d + ", xnumeros[cont]);
            printf("%d = ", ynumeros[cont]);
        }

        soma += xnumeros[cont];
        soma += ynumeros[cont];
    }

    printf("%d\n", soma);
    
    system("pause");
    return 0;
}
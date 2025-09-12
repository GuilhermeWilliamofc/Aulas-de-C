/* 1. Implemente um programa para imprimir valores entre 3 até 12 em ordem
decrescente */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont;

    for (cont = 12; cont >= 3; cont --){
        printf("%d ", cont);
    }

    printf("\n");
    system("pause");
    return 0;
}
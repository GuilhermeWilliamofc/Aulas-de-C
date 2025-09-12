/* 5. Faça um programa que some todos os números naturais abaixo de 100
que são múltiplos de 3 ou 5. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont;
    int soma = 0;

    for (cont = 0; cont < 100; cont ++){
        if (cont % 3 == 0 || cont % 5 == 0){
            soma += cont;
        }
    }

    printf("A soma de todos os numeros naturais abaixo de 100 e que sao multiplos de 3 ou 5 eh igual a %d\n", soma);

    system("pause");
    return 0;
}
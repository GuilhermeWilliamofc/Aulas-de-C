/* Faça uma função que recebe um valor inteiro e verifica se o valor é
par. A função deve retornar 1 se o número for par e 0 se for ímpar. */

#include <stdio.h>
#include <stdlib.h>

int num_impar_ou_par(int num){
    if(num % 2 == 0){ // se for par
        return 1;
    }
    else{ // se for impar
        return 0;
    }
}

int main(){
    int numero;
    int resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = num_impar_ou_par(numero);

    if(resultado == 1){ // se for par
        printf("O numero %d eh par", numero);
    }
    else{ // se for impar
        printf("O numero %d eh impar", numero);
    }

    printf("\n");
    system("pause");
    return 0;
}
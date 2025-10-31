/* Faça uma função que recebe um valor inteiro e verifica se o valor é
par. A função deve retornar 1 se o número for par e 0 se for ímpar. */

#include <stdio.h>
#include <stdlib.h>

int valor_eh_par(int numero){
    if (numero % 2 == 0){ // se o valor é par
        return 1;
    }
    else{ // se for impar
        return 0;
    }

}

int main(){
    int num, resultado;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    resultado = valor_eh_par(num);

    if (resultado == 1){ // se for par
        printf("O valor %d eh par", num);
    }
    else{ // se for impar
        printf("O valor %d eh impar", num);
    }

    printf("\n");
    system("pause");
    return 0;
}
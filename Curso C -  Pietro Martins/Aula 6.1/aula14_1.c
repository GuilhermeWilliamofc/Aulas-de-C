#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5] = {10, 20, 30, 40, 50}; // usa chaves para declarar os valores do array
    int cont;
    float soma = 0;

    for(cont = 0; cont < 5; cont++){
        soma += numeros[cont];
    }

    printf("Resultado: %.2f\n", soma/5);

    system("pause");
    return 0;
}
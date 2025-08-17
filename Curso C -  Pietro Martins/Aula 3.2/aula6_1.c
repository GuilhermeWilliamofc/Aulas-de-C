#include <stdio.h>
#include <stdlib.h>

int main(){
    int dado = 10;
    printf("-----------------------------------------\n");
    printf("Dado antes do incremento: %d.\n", dado);

    dado++; // ++ acrescenta 1 unidade a variavel
    printf("Depois do incremento: %d.\n", dado);

    dado--; // -- diminui 1 unidade a variavel
    printf("Depois do decremento: %d.\n", dado);

    dado += 3; // += é a variavel + unidade
    printf("Depois do incremento em 3 unidades: %d.\n", dado);

    dado -= 2; // -= é a variavel - unidade
    printf("Depois do decremento em 2 unidades: %d.\n", dado);

    dado *= 10; // *= é a variavel * unidade
    printf("Depois de multiplicar por 10: %d.\n", dado);

    printf("-----------------------------------------\n");
    system("pause");
    return 0;
}
/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação. */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro = 22;
    float real = 3.14;
    char caractere = 'a';

    int *ponteiro_inteiro;
    float *ponteiro_real;
    char *ponteiro_caractere;

    printf("Antes:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    ponteiro_inteiro = &inteiro;
    ponteiro_real = &real;
    ponteiro_caractere = &caractere;

    *ponteiro_inteiro = 69;
    *ponteiro_real = 2.71;
    *ponteiro_caractere = 'b';

    printf("\nDepois:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c", caractere);

    printf("\n");
    system("pause");
    return 0;
}
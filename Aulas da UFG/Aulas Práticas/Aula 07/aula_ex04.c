/* Escreva um programa que leia duas strings e as imprima na tela. Imprima também a
segunda letra de cada string. Por fim, compare se as duas strings são iguais */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string1[20];
    char string2[20];
    int ok;

    printf("Digite a Primeira String: ");
    fgets(string1, 20, stdin);
    fflush(stdin);

    printf("Digite a Segunda String: ");
    fgets(string2, 20, stdin);
    fflush(stdin);

    printf("A primeira string digitada foi: %s\nA segunda string digitada foi: %s\n", string1, string2);
    printf("A segunda letra da primeira string foi: %c\nA segunda letra da segunda string foi: %c\n", string1[1], string2[1]);

    ok = strcmp(string1, string2);

    if (ok == 0){
        printf("As strings sao iguais\n");
    }
    else{
        printf("As strings sao diferentes\n");
    }
    
    system("pause");
    return 0;
}
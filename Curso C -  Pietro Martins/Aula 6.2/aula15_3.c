#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
    setlocale(LC_ALL, "Portuguese");

    char string1[N] = {"Lógica de "};
    char string2[N] = {"Programação!"};

    printf("-------------------------------\n");
    printf("Antes do strcat:\n");
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    printf("-------------------------------\n");
    strcat(string1, string2); // serve para fazer concatenação (o processo de unir duas ou mais cadeias de caracteres (strings) para formar uma nova cadeia de caracteres mais longa), a string 1 vai ficar concatenada e a string 2 não vai sofrer alterações

    printf("Depois do strcat:\n");
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    printf("-------------------------------\n");
    system("pause");
    return 0;
}
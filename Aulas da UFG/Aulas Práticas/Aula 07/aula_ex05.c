/* Escreva um programa que leia uma string e imprima as letras dos índices pares da
string. Informe, também, o tamanho da string fornecida pelo usuário e copie essa string
em uma segunda string */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[20];
    char stringcopia[20];
    int cont;
    int tamanho_string;

    printf("Digite uma string: ");
    fgets(string, 20, stdin);
    fflush(stdin);

    tamanho_string = strlen(string);

    for (cont = 0; cont < tamanho_string - 1; cont++){
        if (cont < tamanho_string - 3){
            printf("%c, ", string[cont]);
        }
        else{
            printf("%c\n", string[cont]);
        }
        cont += 1;
    }

    printf("O tamanho da string fornecida eh igual a: %d\n", tamanho_string - 1);

    strcpy(stringcopia, string);

    printf("A string copiada eh: %s\n", stringcopia);
    
    system("pause");
    return 0;
}
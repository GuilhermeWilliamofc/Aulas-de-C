#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 50

int main(){
    setlocale(LC_ALL, "Portuguese");

    char string[N];
    size_t cont_string; // o tipo size_t serve para representar tamanhos e contagens de objetos em memória, ele é um inteiro sem sinal, ele é retornado por funções como strlen e sizeof, usar esse tipo evita avisos de comparação entre tipos diferentes (signed/unsigned). O int pode ser usado para esses casos, mas vai gerar um aviso de comparação e caso o valor do int seja negativo vai gerar erros semanticos no código

    printf("-------------------------------\n");
    printf("Digite um texto: ");
    fgets(string, 50, stdin); // sobre o terceiro parametro: "Para indicar que a leitura será feita a partir do buffer do teclado (entrada padrão do computador) basta fazer uso de uma constante já definida na linguagem C para esta finalidade, chamada stdin"
    fflush(stdin);
    cont_string = strlen(string); // strlen serve como uma espécie de len do python, ele retorna o tamanho da string
    printf("Tamanho do texto: %d caracteres\n", cont_string);

    printf("-------------------------------\n");
    printf("Impressão de posição a posição:\n");
    for(cont_string = 0; cont_string < strlen(string); cont_string++){
        if (cont_string < strlen(string) - 2){ // é -2 pq vai ignorar o \0 e também pq o 1ª caractere começa no zero e o último termina em N - 1, contando com o \0 o último caractere fica N - 2, sendo N o tamanho da string
            if (string[cont_string] != ' '){ // Em C, para comparar caracteres, deve usar aspas simples ao invés de aspas duplas, caso contrário a comparação não vai funcionar como esperado
                printf("%c,", string[cont_string]); // lembrando que a variável string é um vetor de char
            }
        }
        if (cont_string == strlen(string) - 2){ // se for o último caractere
            if (string[cont_string] != ' '){
                printf("%c", string[cont_string]);
            }
        }
    }

    printf("\n");
    printf("-------------------------------\n");
    system("pause");
    return 0;
}
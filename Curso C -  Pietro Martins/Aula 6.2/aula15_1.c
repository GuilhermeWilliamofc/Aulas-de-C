#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char string[10];

    printf("Digite algo (leitura pelo gets): ");
    gets(string);
    /* 
    gets():
        * Lê uma linha inteira de texto do teclado até o Enter.
        * NÃO é segura: não limita o número de caracteres lidos, podendo causar estouro de buffer (problema de segurança).
        * Não deve ser usada em novos programas (foi removida do padrão C11).
    */
    fflush(stdin);

    puts("Resultado: ");
    /* 
    puts():
        * Imprime uma string na tela, seguida de uma quebra de linha (\n).
        * Mais simples que printf para mostrar textos.
    */
    puts(string);
    puts("");

    printf("Digite algo (leitura pelo fgets): ");
    fgets(string, 10, stdin);
    /* 
    fgets():
        * Lê uma linha de texto do teclado, mas limita o número de caracteres lidos (evita estouro de buffer), não precisa se preocupar com o tamanho_da_string - 1, o fgets se vira.
        * Sintaxe: fgets(variavel, tamanho, origem);
        * O tamanho inclui o caractere \0 (fim de string).
        Pode incluir o \n (Enter) no final da string.
    */
    fflush(stdin);

    puts("Resultado: ");
    puts(string);

    system("pause");
    return 0;
}
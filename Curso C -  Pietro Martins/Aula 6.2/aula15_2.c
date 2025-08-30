#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 20 // aqui foi declarado uma constante, lembrando que constante não precisa do igual "=" e do ponto e virgula ";"

int main(){
    setlocale(LC_ALL, "Portuguese");

    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("-------------------------------\n");
    printf("Antes do strcpy:\n");
    printf("Origem: ");
    puts(origem);
    printf("Destino: ");
    puts(destino);

    printf("-------------------------------\n");
    strcpy(destino, origem); // para fazer uma atribuição de uma string é usado o strcpy, em outras palavras é usado para alterar o conteúdo de uma string, não pode usar o igual "=", aqui está adicionando o texto "Olá, mundo!" da variável origem na variável destino

    printf("Depois do strcpy:\n");
    printf("Origem: ");
    puts(origem);
    printf("Destino: ");
    puts(destino);

    printf("-------------------------------\n");
    system("pause");
    return 0;
}
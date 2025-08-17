#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saida de dados." // #define para atribuir uma constante (como const em js, não precisa do sinal de recebe "=" para ser declarada)

/* 
    Uso do & no scanf():
        Tipos primitivos (int, float, double, etc.): usa "&"
        Strings (char array): NÃO usa "&"
*/

int main(){
    printf("-----------------------------------------\n");
    printf("%s\n", texto);
    printf("-----------------------------------------\n");

    int idade = 0;
    float altura = 0.0;
    char nome[50] = ""; // char é um tipo primitivo para textos, entre colchetes "[]" você adiciona quantos caracteres essa variável cabe, caso não coloque nada ele vai aceitar somente 1 caractere

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("-----------------------------------------\n");
    printf("Dados Informados\n");
    printf("-----------------------------------------\n");

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2fm\n", altura);
    printf("Nome: %s\n", nome);
    printf("-----------------------------------------\n");

    system("pause");
    return 0;
}
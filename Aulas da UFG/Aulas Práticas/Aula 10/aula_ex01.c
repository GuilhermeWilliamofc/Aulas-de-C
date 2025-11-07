/* Implemente um programa que leia o nome, a idade e o peso de uma pessoa e armazene os
dados em uma estrutura (struct) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    float peso;
} Pessoa;

int main(){
    Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 50, stdin);
    fflush(stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o peso: ");
    scanf("%f", &pessoa.peso);

    printf("Os dados digitados foram:\n");
    printf("Nome: ");
    puts(pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Peso: %.2f", pessoa.peso);

    printf("\n");
    system("pause");
    return 0;
}
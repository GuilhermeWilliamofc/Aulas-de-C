#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

#define tamanho 50 // constante

struct tipo_pessoa{ // struct parece com classes em python, você pode declarar dentro dele variaveis, vetores e etc, mas não tem como criar metodos, o struct só serve para armazenar dados
    int idade;
    float peso;
    char nome[tamanho];
};

typedef struct tipo_pessoa tipo_pessoa; // O typedef serve para criar um apelido (nome alternativo) para um tipo de dado em C.

// Isso faz com que, ao invés de declarar variáveis assim: "struct tipo_pessoa pessoa;"
// você possa simplesmente escrever: "tipo_pessoa pessoa;", no caso da linha 23

int main(){
    setlocale(LC_ALL, "Portuguese");

    // Criando e Inicializando o struct
    tipo_pessoa pessoa = {0, 0.0, "Teste"}; // aqui você declara uma variavel do tipo "tipo_pessoa" que tem o nome "pessoa" e os dados exigidos pelo struct (idade, peso, nome)

    printf("-------------------------------\n");
    printf("Início:\n");
    printf("pessoa.idade: %d\n", pessoa.idade);
    printf("pessoa.peso: %.2f\n", pessoa.peso);
    printf("pessoa.nome: %s\n", pessoa.nome);
    printf("-------------------------------\n");

    // Atribuindo valores aos campos
    pessoa.idade = 10;
    pessoa.peso = 99.99;
    strcpy(pessoa.nome, "Texto");

    printf("Alterando os campos via código:\n");
    printf("pessoa.idade: %d\n", pessoa.idade);
    printf("pessoa.peso: %.2f\n", pessoa.peso);
    printf("pessoa.nome: %s\n", pessoa.nome);
    printf("-------------------------------\n");

    // Solicitando inserções via teclado
    printf("Entrada de dados:\n");
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    fflush(stdin);

    printf("Digite seu peso: ");
    scanf("%f", &pessoa.peso);
    fflush(stdin);

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 50, stdin);
    fflush(stdin);

    printf("-------------------------------\n");
    printf("Alterando com dados do usuário:\n");
    printf("pessoa.idade: %d\n", pessoa.idade);
    printf("pessoa.peso: %.2f\n", pessoa.peso);
    printf("pessoa.nome: %s", pessoa.nome);

    printf("-------------------------------\n");
    system("pause");
    return 0;
}
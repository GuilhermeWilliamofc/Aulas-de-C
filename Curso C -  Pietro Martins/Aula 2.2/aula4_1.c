#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("-----------------------------------------\n");
    printf("Verificador de Idade e Ano\n");
    printf("-----------------------------------------\n");

    int idade = 0; // a variável idade aqui, precisa especificar o tipo da variável antes de escrever o nome, acredito que aqui o nome dos tipos são semelhantes ao python (int, float, string)
    int ano = 1950;

    printf("Valor inicial da idade: %d.\n", idade); // precisa escrever o especificador relacionado a variável, no caso da variável idade utiliza o %d que serve para números inteiros em base decimal
    printf("Valor inicial do ano: %d.\n", ano);
    printf("-----------------------------------------\n");

    printf("Digite a idade e o ano:\n");
    scanf("%d %d", &idade, &ano); // você informa a variável usando um "&" ("e" comercial) antes do nome, é possível usar mais de uma variável em um mesmo scanf mas não é recomendado, assim como o printf o scanf também usa especificadores de formato/formatação, a variável vai deixar de ser 0 e vai ser o que o usuário informar, diferente do input() em python, o scanf() não tem como digitar o texto para informar o usuário sobre o que deve ser digitado

    printf("-----------------------------------------\n");
    printf("Idade informada: %d.\n", idade);
    printf("Ano informado: %d.\n", ano);
    printf("-----------------------------------------\n");

    system("pause");
    return 0;
}
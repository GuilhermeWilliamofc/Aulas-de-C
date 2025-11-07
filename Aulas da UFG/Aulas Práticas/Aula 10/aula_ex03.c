/* Crie um programa que permita armazenar o nome, a altura e a data de nascimento de até 10
pessoas. Cada pessoa deve ser representada por uma struct dentro de um vetor. A data de
nascimento também deve ser uma struct. O nome, a altura e a data de nascimento de cada
pessoa devem ser informados pelo teclado. O programa deve, na tela de abertura, apresentar
opções para:
a) Cadastrar uma pessoa;
b) Listar todos os nomes e respectivas alturas;
c) Listar os nomes das pessoas que nasceram antes de uma certa data fornecida. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data_De_Nascimento;

typedef struct{
    char nome[50];
    float altura;
    Data_De_Nascimento data_de_nascimento;
} Pessoa;

int main(){
    int opcao = 0;
    int cadastrados = 0;
    int cont;
    Pessoa pessoas[10];
    Data_De_Nascimento data_fornecida;

    do {
        printf("\n[ 1 ] - Cadastrar uma pessoa\n");
        printf("[ 2 ] - Listar todos os nomes e respectivas alturas\n");
        printf("[ 3 ] - Listar os nomes das pessoas que nasceram antes de uma certa data fornecida\n");
        printf("[ 4 ] - Sair do programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        if (opcao == 1 && cadastrados < 10){ // se a opcao for 1 e tiver menos de 10 pessoas cadastradas
                printf("Digite o nome: ");
                fgets(pessoas[cadastrados].nome, 50, stdin);
                fflush(stdin);

                printf("Digite a altura: ");
                scanf("%f", &pessoas[cadastrados].altura);
                fflush(stdin);

                printf("Digite o dia de nascimento: ");
                scanf("%d", &pessoas[cadastrados].data_de_nascimento.dia);
                fflush(stdin);

                printf("Digite o mes de nascimento: ");
                scanf("%d", &pessoas[cadastrados].data_de_nascimento.mes);
                fflush(stdin);

                printf("Digite o ano de nascimento: ");
                scanf("%d", &pessoas[cadastrados].data_de_nascimento.ano);
                fflush(stdin);

                cadastrados++;
        }
        else if (opcao == 2){
            for (cont = 0; cont < cadastrados; cont++){
                printf("\nOs dados digitados da %d Pessoa foram:\n", cont + 1);
                printf("Nome: %s", pessoas[cont].nome);
                printf("Altura: %.2f\n", pessoas[cont].altura);
                printf("Data de nascimento: %d/%d/%d\n", pessoas[cont].data_de_nascimento.dia, pessoas[cont].data_de_nascimento.mes, pessoas[cont].data_de_nascimento.ano);
            }
        }
        else if (opcao == 3){
            printf("Digite o dia de nascimento: ");
            scanf("%d", &data_fornecida.dia);
            fflush(stdin);

            printf("Digite o mes de nascimento: ");
            scanf("%d", &data_fornecida.mes);
            fflush(stdin);

            printf("Digite o ano de nascimento: ");
            scanf("%d", &data_fornecida.ano);
            fflush(stdin);
        }
        else if (opcao < 1 || opcao > 4){
            printf("\033[31mErro! Escolha uma opcao valida!\033[m\n");
        }
    } while (opcao != 4);
    
    system("pause");
    return 0;
}
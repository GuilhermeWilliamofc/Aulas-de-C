/* Construa uma estrutura (struct) Aluno com nome, número de matrícula, curso e idade. Leia do
usuário a informação de até 3 alunos, armazene-as em um vetor dessa estrutura e imprima os
dados na tela. */
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int num_matricula;
    char curso[50];
    int idade;
} Aluno;

int main(){
    Aluno aluno[3];
    int cont;
    int limite = 0;
    char resposta[3];
    int resposta_errada = 0;

    for (cont = 0; cont < 3; cont++){
        limite++;

        printf("Digite o nome do %d aluno: ", cont + 1);
        fgets(aluno[cont].nome, 50, stdin);
        fflush(stdin);

        printf("Digite o numero de matricula: ");
        scanf("%d", &aluno[cont].num_matricula);
        fflush(stdin);

        printf("Digite o curso do aluno: ");
        fgets(aluno[cont].curso, 50, stdin);
        fflush(stdin);

        printf("Digite a idade do aluno: ");
        scanf("%d", &aluno[cont].idade);
        fflush(stdin);

        do {
            if (resposta_errada > 0) {
                printf("\033[31mErro! Responda somente com S ou N!\033[m\n");
            }

            printf("Deseja continuar? [s/n]: ");
            fgets(resposta, sizeof(resposta), stdin);
            resposta[strcspn(resposta, "\n")] = '\0';

            if (resposta[0] != 's' && resposta[0] != 'S' && resposta[0] != 'n' && resposta[0] != 'N') {
                resposta_errada++;
            }
        } while (resposta[0] != 's' && resposta[0] != 'S' && resposta[0] != 'n' && resposta[0] != 'N');

        if (resposta[0] == 'n' || resposta[0] == 'N') {
            break;
        }
    }

    for (cont = 0; cont < limite; cont++){
        printf("\nOs dados digitados do %d Aluno foram:\n", cont + 1);
        printf("Nome: %s", aluno[cont].nome);
        printf("Numero de matricula: %d\n", aluno[cont].num_matricula);
        printf("Curso do aluno: %s", aluno[cont].curso);
        printf("Idade: %d\n", aluno[cont].idade);
    }

    printf("\n");
    system("pause");
    return 0;
}
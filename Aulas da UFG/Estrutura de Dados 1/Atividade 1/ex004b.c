/*
4. Vetores de registros. Crie uma estrutura para representar um aluno contendo matrícula, nome, nota 1 e
nota 2. Leia os dados de N alunos e utilize funções para:
• calcular a média de um aluno;
• localizar um aluno pela matrícula;
• identificar o aluno com a maior média;
• imprimir matrícula, nome e média de todos os alunos.
*/

#include <stdio.h>

#define MAX_ALUNOS 40

struct Aluno{
    int Matricula;
    char Nome[50];
    float Nota1;
    float Nota2;
};

float mediaAluno(struct Aluno aluno){
    return (aluno.Nota1 + aluno.Nota2) / 2;
}

int localizarAluno(struct Aluno vetor[], int quantidade, int matricula){
    for (int cont = 0; cont < quantidade; cont++){
        if (vetor[cont].Matricula == matricula){
            return cont;
        }
    }
    return -1;
}

int maiorMedia(struct Aluno vetor[], int quantidade){
    int posicao = 0;
    for (int cont = 1; cont < quantidade; cont++){
        if (mediaAluno(vetor[cont]) > mediaAluno(vetor[posicao])){
            posicao = cont;
        }
    }
    return posicao;
}

void imprimirAlunos(struct Aluno vetor[], int quantidade){
    for (int cont = 0; cont < quantidade; cont++){
        printf("Matricula: %d\n", vetor[cont].Matricula);
        printf("Nome: %s\n", vetor[cont].Nome);
        printf("Media: %.2f\n", mediaAluno(vetor[cont]));
        printf("\n");
    }
}

int main(){
    struct Aluno vetor[MAX_ALUNOS];
    int quantidade;
    int matricula;
    int posicao;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);
    printf("\n");

    for (int cont = 0; cont < quantidade; cont++){
        printf("Digite a matricula do aluno %d: ", cont + 1);
        scanf("%d", &vetor[cont].Matricula);

        printf("Digite o nome do aluno %d: ", cont + 1);
        scanf(" %[^\n]", vetor[cont].Nome);

        printf("Digite a nota 1 do aluno %d: ", cont + 1);
        scanf("%f", &vetor[cont].Nota1);

        printf("Digite a nota 2 do aluno %d: ", cont + 1);
        scanf("%f", &vetor[cont].Nota2);

        printf("\n");
    }

    printf("Alunos cadastrados:\n\n");

    imprimirAlunos(vetor, quantidade);

    printf("Digite a matricula que deseja localizar: ");
    scanf("%d", &matricula);

    posicao = localizarAluno(vetor, quantidade, matricula);

    if (posicao != -1){
        printf("Aluno encontrado: %s\n", vetor[posicao].Nome);
    }
    else{
        printf("Aluno nao encontrado.\n");
    }

    printf("\n");

    posicao = maiorMedia(vetor, quantidade);

    printf("Aluno com maior media:\n");
    printf("Matricula: %d\n", vetor[posicao].Matricula);
    printf("Nome: %s\n", vetor[posicao].Nome);
    printf("Media: %.2f\n", mediaAluno(vetor[posicao]));

    return 0;
}
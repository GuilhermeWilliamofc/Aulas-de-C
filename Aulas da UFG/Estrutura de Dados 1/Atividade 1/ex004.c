/*
4. Defina um registro (struct) Aluno contendo matrícula, nome e duas notas. Em seguida, declare um vetor
capaz de armazenar 40 alunos.
*/

#include <stdio.h>
#define MAX_ALUNOS 40

struct Aluno{
    int Matricula;
    char Nome[50];
    float Nota1;
    float Nota2;
};

int main(){
    struct Aluno vetor[MAX_ALUNOS];
    return 0;
}
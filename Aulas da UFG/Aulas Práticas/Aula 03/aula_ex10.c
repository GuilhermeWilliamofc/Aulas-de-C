/* 
* nota final de um estudante é calculado a partir de 3 notas atribuidas respectivamente a um trabalho de lab, a uma
avaliação semestral e a um exame final. a média das 3 notas obedece os pesos: 2, 3, 5. de acordo com o resultado
mostre na tela se o aluno está reprovado (média de 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.
Faça todas as verificações necessarias
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float trab_lab, aval_semes, exam_final;

    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &trab_lab);

    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &aval_semes);

    printf("Digite a nota do exame final: ");
    scanf("%f", &exam_final);

    float media = ((trab_lab * 2) + (aval_semes * 3) + (exam_final * 5)) / (2 + 3 + 5);

    printf("Sua media: %.2f\nSituacao: ", media);

    if (media < 2.91){
        printf("Reprovado\n");
    }
    else if (media < 4.91){
        printf("Recuperacao\n");
    }
    else{
        printf("Aprovado\n");
    }

    system("pause");
    return 0;
}
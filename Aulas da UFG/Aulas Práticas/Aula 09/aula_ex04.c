/* Escreva uma função que receba 3 notas de um aluno e uma letra.
Se a letra for A, a função retorna a média aritmética das notas do
aluno e se for P, a sua média ponderada (pesos: 5, 3 e 2). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media_aluno(float nota1, float nota2, float nota3, char tipo_de_media){
    float media;
    int peso1 = 5;
    int peso2 = 3;
    int peso3 = 2;

    if(tipo_de_media == 'A' || tipo_de_media == 'a'){ // se for escolhida media aritmetica
        media = ((nota1 + nota2 + nota3)/ 3);
        return media;
    }
    if(tipo_de_media == 'P' || tipo_de_media == 'p'){ // se for escolhida media ponderada
        media = (((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3));
        return media;
    }
}

int main(){
    int cont;
    float notas[3];
    char tipo;
    float media_resultado;

    for(cont = 0; cont < 3; cont++){
        do{
            printf("Digite a %d nota: ", cont + 1);
            scanf("%f", &notas[cont]);
            if(notas[cont] > 10 || notas[cont] < 0){
                printf("\033[31mErro! Digite uma nota valida! (entre 0 e 10)\n\033[m");
            }
        } while(notas[cont] > 10 || notas[cont] < 0);
    }

    do{
        printf("\nDigite o tipo de media\nA - Aritmetica\nP - Ponderada\nTipo: ");
        scanf(" %c", &tipo);
        if(tipo != 'A' && tipo != 'a' && tipo != 'P' && tipo != 'p'){
            printf("\033[31mErro! Digite um tipo de media valido!\033[m");
        }
    } while(tipo != 'A' && tipo != 'a' && tipo != 'P' && tipo != 'p');

    media_resultado = media_aluno(notas[0], notas[1], notas[2], tipo);

    printf("\nA media do aluno eh igual a: %.2f\n", media_resultado);

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int dia_digitado;

    printf("Insira um valor de 1 a 7: ");
    scanf("%d", &dia_digitado);

    printf("\033[0;35mVocê digitou o dia da semana: \033[1;32m");

    switch (dia_digitado){
    case 1:
        printf("Domingo");
        break; // obrigatório, caso contrário os outros cases abaixo vão ser executados mesmo não sendo verdadeiros
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terça-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 7:
        printf("Sabádo");
        break;
    default: // não é obrigatório mas é uma espécie de else, só é executado caso nenhum dos outros casos sejam verdadeiros
        printf("\033[1;31mDia da semana inválido");
        break;
    }

    printf("\033[0m\n");
    system("pause");
    return 0;
}
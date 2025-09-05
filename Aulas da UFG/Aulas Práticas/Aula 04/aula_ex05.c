/* 

Considere o problema de transformar o mês de uma representação
numérica de uma data em sua representação textual. Isto é,
transformar, por exemplo, 23/03/2021 em “23 de marco de 2021”.
Escreva um programa em C que resolva esse problema.
○ Faça o programa da seguinte forma:
○ “Qual e o dia?”
○ 23
○ Qual e o mes?
○ 03
○ Qual e o ano?
○ 2021

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia_digitado, mes_digitado, ano_digitado;

    printf("Qual e o dia?: ");
    scanf("%d", &dia_digitado);

    printf("Qual e o mes?: ");
    scanf("%d", &mes_digitado);

    printf("Qual e o ano?: ");
    scanf("%d", &ano_digitado);

    if (mes_digitado > 0 && mes_digitado <= 12){
        printf("%d de ", dia_digitado);
    }

    switch (mes_digitado)
    {
    case 1:
        if (dia_digitado > 0 && dia_digitado <= 31 && dia_digitado > 0 && dia_digitado < 32){
        printf("Janeiro");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 2:
        if (dia_digitado > 0 && dia_digitado <= 28){
        printf("Fevereiro");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 3:
        if (dia_digitado > 0 && dia_digitado <= 31){
        printf("Marco");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 4:
        if (dia_digitado > 0 && dia_digitado <= 30){
        printf("Abril");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 5:
        if (dia_digitado > 0 && dia_digitado <= 31){
        printf("Maio");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 6:
        if (dia_digitado > 0 && dia_digitado <= 30){
        printf("Junho");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 7:
        if (dia_digitado > 0 && dia_digitado <= 31){
        printf("Julho");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 8:
        if (dia_digitado > 0 && dia_digitado <= 31){
        printf("Agosto");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 9:
        if (dia_digitado > 0 && dia_digitado <= 30){
        printf("Setembro");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 10:
        if (dia_digitado > 0 && dia_digitado <= 31){
        printf("Outubro");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 11:
        if (dia_digitado > 0 && dia_digitado <= 30){
        printf("Novembro");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    case 12:
        if (dia_digitado > 0 && dia_digitado <= 31){
        printf("Dezembro");
        }
        else{
            printf("Voce digitou um dia invalido");
        }
        break;
    default:
        printf("Voce digitou um mes invalido");
        break;
    }

    if (mes_digitado > 0 && mes_digitado <= 12 && dia_digitado > 0 && dia_digitado < 32){
        printf(" de %d", ano_digitado);
    }

    printf("\n");
    system("pause");
    return 0;
}
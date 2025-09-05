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

    if (ano_digitado > 0 && ano_digitado <= 2025){
        switch (mes_digitado)
        {
        case 1:
            if (dia_digitado > 0 && dia_digitado <= 31){
                printf("%d de ", dia_digitado);
                printf("Janeiro");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 2:
            if(ano_digitado % 400 == 0 && ano_digitado % 100 != 0 || ano_digitado % 4 == 0 && ano_digitado % 100 != 0){ // se for bissexto
                if (dia_digitado > 0 && dia_digitado <= 29){
                    printf("%d de ", dia_digitado);
                    printf("Fevereiro");
                    printf(" de %d", ano_digitado);
                }
                else{
                    printf("Voce digitou um dia invalido");
                }
            }
            else{ // se n�o for bissexto
                if (dia_digitado > 0 && dia_digitado <= 28){
                    printf("%d de ", dia_digitado);
                    printf("Fevereiro");
                    printf(" de %d", ano_digitado);
                }
                else{
                    printf("Voce digitou um dia invalido e o ano de %d nao eh bissexto", ano_digitado);
                }
            }
            break;
        case 3:
            if (dia_digitado > 0 && dia_digitado <= 31){
                printf("%d de ", dia_digitado);
                printf("Marco");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 4:
            if (dia_digitado > 0 && dia_digitado <= 30){
                printf("%d de ", dia_digitado);
                printf("Abril");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 5:
            if (dia_digitado > 0 && dia_digitado <= 31){
                printf("%d de ", dia_digitado);
                printf("Maio");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 6:
            if (dia_digitado > 0 && dia_digitado <= 30){
                printf("%d de ", dia_digitado);
                printf("Junho");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 7:
            if (dia_digitado > 0 && dia_digitado <= 31){
                printf("%d de ", dia_digitado);
                printf("Julho");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 8:
            if (dia_digitado > 0 && dia_digitado <= 31){
                printf("%d de ", dia_digitado);
                printf("Agosto");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 9:
            if (dia_digitado > 0 && dia_digitado <= 30){
                printf("%d de ", dia_digitado);
                printf("Setembro");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 10:
            if (dia_digitado > 0 && dia_digitado <= 31){
                printf("%d de ", dia_digitado);
                printf("Outubro");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 11:
            if (dia_digitado > 0 && dia_digitado <= 30){
                printf("%d de ", dia_digitado);
                printf("Novembro");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        case 12:
            if (dia_digitado > 0 && dia_digitado <= 31){
                printf("%d de ", dia_digitado);
                printf("Dezembro");
                printf(" de %d", ano_digitado);
            }
            else{
                printf("Voce digitou um dia invalido");
            }
            break;
        default:
            printf("Voce digitou um mes invalido");
            break;
        }
    }
    else{
        printf("Voce digitou um ano invalido");
    }

    printf("\n");
    system("pause");
    return 0;
}
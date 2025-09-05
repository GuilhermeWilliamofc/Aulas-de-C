/* Receba o código do tipo de financiamento e o valor a ser financiado. E
informe a taxa de juros do financiamento e o valor final a ser pago.
Código: Tipo de financiamento: Taxa de juros:
1       básico                 30%
2       intermediário          32%
3       avançado               35%
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo_digitado;
    float valor_financiado;

    printf("Digite o codigo de financiamento: ");
    scanf("%d", &codigo_digitado);

    printf("Digite o valor a ser financiado: ");
    scanf("%f", &valor_financiado);

    printf("Com a taxa de juros de");

    switch (codigo_digitado)
    {
    case 1: // basico 30% de juros
        printf(" 30%% (basico) voce ira pagar R$%.2f", (valor_financiado * 0.30) + valor_financiado);
        break;
    case 2: // intermediario 32% de juros
        printf(" 32%% (intermediario) voce ira pagar R$%.2f", (valor_financiado * 0.32) + valor_financiado);
        break;
    case 3: // avancado 35% de juros
        printf(" 35%% (avancado) voce ira pagar R$%.2f", (valor_financiado * 0.35) + valor_financiado);
        break;
    default: // valor invalido
        printf("...\nVoce digitou um codigo de financiamento invalido!");
        break;
    }

    printf("\n");
    system("pause");
    return 0;
}
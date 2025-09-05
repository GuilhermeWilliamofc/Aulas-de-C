/* Faça um programa que calcule o preço de um pedido
considerando que o usuário informará a quantidade, e o
código do produto e será retornado o valor final da compra.
Considerando que ele só pode escolher um produto.
Código:     Produto:    Preço:
100         pizza       R$ 12,90
101         café        R$ 2,00
102         sanduíche   R$ 14,30
103         suco        R$ 4,00
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo_digitado, quantidade_digitada;

    printf("Menu:\n");
    printf("100 - Pizza - R$ 12,90\n101 - Cafe - R$ 2,00\n102 - Sanduiche - R$ 14,30\n103 - Suco - R$ 4,00\n");
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo_digitado);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade_digitada);

    switch (codigo_digitado)
    {
    case 100: // pizza
        printf("Pagando por %d pizza(s)\n", quantidade_digitada);
        printf("Valor final da compra: R$%.2f", quantidade_digitada * 12.90);
        break;
    case 101: // café
        printf("Pagando por %d cafe(s)\n", quantidade_digitada);
        printf("Valor final da compra: R$%.2f", quantidade_digitada * 2.00);
        break;
    case 102: // sanduiche
        printf("Pagando por %d sanduiche(s)\n", quantidade_digitada);
        printf("Valor final da compra: R$%.2f", quantidade_digitada * 14.30);
        break;
    case 103: // suco
        printf("Pagando por %d suco(s)\n", quantidade_digitada);
        printf("Valor final da compra: R$%.2f", quantidade_digitada * 4.00);
        break;
    default: // codigo invalido
        printf("Voce digitou um codigo de produto invalido!");
        break;
    }

    printf("\n");
    system("pause");
    return 0;
}
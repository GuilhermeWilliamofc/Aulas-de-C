/* Uma loja fornece 20% de desconto para funcionários e 10% de desconto para
clientes vips e 5% para clientes comuns. Faça um programa que calcule o
valor total a ser pago por uma pessoa. O programa deverá ler o valor total da
compra efetuada e um código que identifique se o comprador é um cliente
comum (1), funcionário (2) ou vip (3). */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo_comprador;
    float valor_compra;

    printf("Digite o total da compra efetuada: ");
    scanf("%f", &valor_compra);

    printf("Digite seu codigo de identificacao: ");
    scanf("%d", &codigo_comprador);

    printf("Sua compra de R$%.2f com um desconto de ", valor_compra);

    switch (codigo_comprador)
    {
    case 1: // caso seja cliente comum (desconto de 5% para clientes comuns)
        printf("5%% eh igual a R$%.2f (cliente comum)", valor_compra - (valor_compra * 0.05));
        break;
    case 2: // caso seja funcionario (desconto de 20% para funcionários)
        printf("20%% eh igual a R$%.2f (funcionario)", valor_compra - (valor_compra * 0.20));
        break;
    case 3: // caso seja cliente vip (desconto de 10% para clientes vips)
        printf("10%% eh igual a R$%.2f (cliente vip)", valor_compra - (valor_compra * 0.10));
        break;
    default:
        printf("Voce digitou um codigo invalido!");
        break;
    }

    printf("\n");
    system("pause");
    return 0;
}
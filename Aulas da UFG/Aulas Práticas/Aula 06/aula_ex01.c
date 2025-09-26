/* 1. Uma nova legislação determina que certos produtos nacionais, ao serem exportados,
estão sujeitos a uma taxação de 50% sobre seu valor original. O critério é o seguinte:
Apenas os produtos de ID ímpar receberão a taxação adicional de 50% sobre o valor
informado.

Os produtos com ID par não serão taxados.

Considere que a empresa trabalha apenas com os seguintes produtos, identificados por
um número de 0 a 5:
ID do Produto   Nome do Produto
0               Placa-mãe
1               Processador
2               Memória RAM
3               HD/SSD
4               Placa de Vídeo
5               Fonte de Alimentação

Crie um programa que receba o produto, a quantidade e o valor do produto e calcule o
valor final da venda. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int id, quant;
    float valor = 0;
    int cont = 0;

    do
    {
        if (cont != 0){
            printf("\033[31mErro! Digite um ID entre 0 a 5\033[0m\n");
        }
        cont = 0;

        printf("Digite o ID do produto: ");
        scanf("%d", &id);
        cont++;
    } while (id < 0 || id > 5);
    
    cont = 0;

    do
    {
        if (cont != 0){
            printf("\033[31mErro! Digite uma quantidade valida!\033[0m\n");
        }
        cont = 0;

        printf("Digite a quantidade: ");
        scanf("%d", &quant);

        cont++;
    } while (quant <= 0);

    cont = 0;

    do
    {
        if (cont != 0){
            printf("\033[31mErro! Digite um valor valido!\033[0m\n");
        }
        cont = 0;

        printf("Digite o Valor do produto: R$ ");
        scanf("%f", &valor);
        cont++;
    } while (valor <= 0);
    
    

    printf("O valor d");

    switch (id)
    {
    case 0:
        printf("a placa-mae eh ");
        break;
    case 1:
        printf("o processador eh ");
        break;
    case 2:
        printf("a memoria RAM eh ");
        break;
    case 3:
        printf("o HD/SSD eh ");
        break;
    case 4:
        printf("a Placa de video eh ");
        break;
    case 5:
        printf("a Fonte de alimentacao eh ");
        break;
    default:
        break;
    }

    if (id % 2 != 0){ // se for impar
        printf("igual a R$ %.2f (Com taxacao de 50%%)\n", ((valor * quant) * 0.50) + (valor * quant));
    }
    else{ // se for par
        printf("igual a R$ %.2f (Livre de taxacao)\n", (valor * quant));
    }

    system("pause");
    return 0;
}
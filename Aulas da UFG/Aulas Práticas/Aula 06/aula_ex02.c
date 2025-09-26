/* 2. O governo de um determinado pais implementou uma nova política de
taxação de 50% sobre o valor de certos produtos brasileiros, quando
exportados. A taxação é aplicada somente aos produtos de ID múltiplos de 2.
Considere uma empresa que deseja calcular os valores finais de vários
produtos (5 tipos de produtos no total), fornecidos por um operador. Cada
produto é identificado por um número de 0 a 5, conforme a tabela abaixo:

ID do Produto   Nome do Produto
1               Placa-mãe
2               Processador
3               Memória RAM
4               HD/SSD
5               Placa de Vídeo
6               Fonte de Alimentação

Crie um programa que receba os produtos, suas quantidades e o valor dos
produtos e calcule o valor final da venda. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont2 = 0;
    int cont = 0;
    int limite;
    int id, quant;
    float valor = 0;
    float valor_final = 0;
    int tot_de_prod_taxad = 0;
    int tot_de_prod_not_taxad = 0;

    do{
        if (cont != 0){
                printf("\033[31mErro! Digite uma quantidade entre 1 a 6\033[0m\n");
            }
            cont = 0;

        printf("Digite quantos valores vao ser inseridos: ");
        scanf("%d", &limite);
        cont++;
    } while (limite <= 0 || limite > 6);

    for (cont2 = 1; cont2 <= limite; cont2++)
    {
        id, quant = 0;
        valor = 0;
        cont = 0;

        do
        {
            if (cont != 0){
                printf("\033[31mErro! Digite um ID entre 0 a 5\033[0m\n");
            }
            cont = 0;

            printf("Digite o ID do produto %d: ", cont2);
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

            printf("Digite a quantidade do produto %d: ", cont2);
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

            printf("Digite o Valor do produto %d: R$ ", cont2);
            scanf("%f", &valor);
            cont++;
        } while (valor <= 0);

        if (id % 2 == 0){ // multiplo de 2
            valor_final += ((valor * quant) * 0.50) + (valor * quant);
            tot_de_prod_taxad += 1;
        }
        else{ // se nao for
            valor_final += (valor * quant);
            tot_de_prod_not_taxad += 1;
        }
    }

    printf("O valor final de vendas eh igual a R$ %.2f\n(%d produtos foram taxados e %d produtos nao foram taxados)\n", valor_final, tot_de_prod_taxad, tot_de_prod_not_taxad);
    system("pause");
    return 0;
}
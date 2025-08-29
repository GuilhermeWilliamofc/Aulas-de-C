/* 
* Receber o salário de um trabalhador e o valor da prestação de um emprestimo, se a prestação
for maior que 20% do salário imprima: emprestimo não concedido, caso contrário imprima: emprestimo concedido
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, prestacao;

    printf("Insira o salario do trabalhador: ");
    scanf("%f", &salario);

    printf("Insira o valor da prestacao: ");
    scanf("%f", &prestacao);

    if (prestacao > (salario * 0.20)){
        printf("emprestimo nao concedido\n");
    }
    else{
        printf("emprestimo concedido\n");
    }

    system("pause");
    return 0;
}
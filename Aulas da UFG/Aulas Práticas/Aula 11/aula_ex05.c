/* Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que
retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na
própria variável A e o dobro de B na própria variável B. Escreva o conteúdo das 2 variáveis na tela. */
#include <stdio.h>
#include <stdlib.h>

int soma_do_dobro(int *valor1, int *valor2){
    *valor1 = *valor1 * 2;
    *valor2 = *valor2 * 2;

    return *valor1 + *valor2;
}

int main(){
    int valor1, valor2, resultado;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    resultado = soma_do_dobro(&valor1, &valor2);

    printf("O valor da soma entre A e B eh igual a: %d\n", resultado);
    printf("O valor de A eh: %d\nO valor de B eh: %d", valor1, valor2);

    printf("\n");
    system("pause");
    return 0;
}
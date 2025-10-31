/* Escreva uma função que receba dois números reais e retorne o
menor número */

#include <stdio.h>
#include <stdlib.h>

int menor_num(float num1, float num2){
    if (num1 < num2){ // se num1 for o maior
        return num1;
    }
    else if (num2 < num1){ // se num2 for o maior
        return num2;
    }
}

int main(){
    float valor1, valor2, menor;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    if (valor1 != valor2){
        menor = menor_num(valor1, valor2);
        printf("O menor numero eh %.2f", menor);
    }
    else{
        printf("Os valores sao iguais!");
    }

    printf("\n");
    system("pause");
    return 0;
}
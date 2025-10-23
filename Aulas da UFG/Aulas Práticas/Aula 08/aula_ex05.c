/* Escreva uma função que receba dois números reais e retorne o
menor número. */

#include <stdio.h>
#include <stdlib.h>

float menor_num(float num1, float num2){ // função que retorna o menor numero
    if(num1 < num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    float num1, num2, menor;
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    menor = menor_num(num1, num2);

    printf("O menor valor eh: %.2f\n", menor);

    system("pause");
    return 0;
}
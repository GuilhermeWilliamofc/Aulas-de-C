/* Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e
troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por
exemplo e, após a execução da função, A conterá o valor de B e B conterá o valor de A (use
ponteiros).*/
#include <stdio.h>
#include <stdlib.h>

void trocar_valores(int *valor1, int *valor2){ // cria ponteiros "*" para os endereços de memoria que vão ser passados
    int temp_valor1 = *valor1; // sem o "*" o valor passado seria o endereço de memoria, não o valor de A
    *valor1 = *valor2; // A = B
    *valor2 = temp_valor1; // B = A
}

int main(){
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    trocar_valores(&valor1, &valor2); // pega os endereços de memoria do valor 1 e 2 "&", está passando para função os endereços de memoria, não o conteudo dos valores em si, assim dá para modificar os valores na função

    printf("O valor de A eh igual a: %d\nO valor de B eh igual a: %d", valor1, valor2);

    printf("\n");
    system("pause");
    return 0;
}
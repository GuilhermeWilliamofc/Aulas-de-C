/* 8. Escreva um algoritmo que leia um número inteiro entre 100 e 999 e
imprima na saída cada um dos algarismos que compõem o número. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, num_clone, cont, soma, centena, dezena, unidade = 0;

    printf("Digite um numero entre 100 e 999: ");
    scanf("%d", &num);

    num_clone = num;

    if (num < 100 || num > 999){
        printf("Voce digitou um numero invalido\n");
    }
    else{
        for (cont = 0; cont < 3; cont ++){
            soma = num % 10; // guarda na variavel soma o resto da divisao do numero por 10
            num = num / 10; // atualiza a variavel num pela divisao do num por 10

            switch (cont)
            {
            case 0:
                unidade = soma;
                break;
            case 1:
                dezena = soma;
                break;
            case 2:
                centena = soma;
                break;
            default:
                break;
            }
        }

    printf("Numero %d:\n", num_clone);
    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);
    }

    system("pause");
    return 0;
}
/* 7. Faça um programa que receba dois números. Calcule e mostre:
a) a soma dos números pares desse intervalo de números, incluindo
os números digitados;
b) a multiplicação dos números ímpares desse intervalo, incluindo
os digitados.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int inicial, final, cont, soma = 0;
    int multiplicacao = 1;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicial);

    printf("Digite o valor final: ");
    scanf("%d", &final);

    if (inicial < final){
        for (cont = inicial; cont <= final; cont ++){
            if (cont % 2 == 0){
                soma += cont;
            }
            else{
                multiplicacao *= cont;
            }
        }
    }
    else{
        for (cont = final; cont <= inicial; cont ++){
            if (cont % 2 == 0){
                soma += cont;
            }
            else{
                multiplicacao *= cont;
            }
        }
    }

    printf("A soma dos numeros pares desse intervalo de numeros (do %d ao %d) eh igual a %d\n", inicial, final, soma);
    printf("A multiplicacao dos numeros impares desse intervalo (do %d ao %d) eh igual a %d\n", inicial, final, multiplicacao);

    system("pause");
    return 0;
}
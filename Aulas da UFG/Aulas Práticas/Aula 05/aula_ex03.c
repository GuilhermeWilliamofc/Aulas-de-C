/* 3. Escreva um programa para calcular a média aritmética de 𝑁 números. O
valor de 𝑁 é dado pelo usuário. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont = 0;
    int limite = 0;
    int num = 0;
    int soma = 0;

    printf("Digite quantos valores vao ser calculados para a media: ");
    scanf("%d", &limite);

    for (cont = 0; cont < limite; cont ++){
        printf("Digite o %d valor da media: ", cont + 1);
        scanf("%d", &num);

        soma += num;
    }

    printf("A media dos %d valores digitados eh igual a %d\n", limite, soma/limite);

    system("pause");
    return 0;
}
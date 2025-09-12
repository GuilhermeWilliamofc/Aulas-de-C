/* 2. Implemente um programa para ler 5 números e mostrar o resultado da
soma desses números. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0;
    int cont;
    int soma = 0;

    for (cont = 0; cont < 5; cont ++){
        printf("Digite o %d valor: ", cont+1);
        scanf("%d", &num);

        soma += num;
    }

    printf("A Soma dos 5 valores digitados eh igual a %d\n", soma);

    system("pause");
    return 0;
}
/* Ler 6 números, armazenando-os no vetor 𝑋[6]. Calcular a soma dos números ímpares e
mostrá-la na tela. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[6];
    int cont;
    int soma = 0;

    for (cont = 0; cont < 6; cont++){
        printf("Digite o %d Numero: ", cont + 1);
        scanf("%d", &numeros[cont]);
    }

    for (cont = 0; cont < 6; cont++){
        if (numeros[cont] % 2 != 0){ // se for impar
            soma += numeros[cont];
        }
    }
    
    printf("A soma de todos os numeros impares digitados eh igual a %d\n", soma);

    system("pause");
    return 0;
}
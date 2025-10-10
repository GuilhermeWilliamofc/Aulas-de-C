/* Ler 5 números, armazenando-os no vetor 𝑋[5]. Copiar este vetor, de trás para frente (na
ordem inversa de leitura), em um segundo vetor 𝑌[5]. Imprima o vetor 𝑌. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int xnumeros[5];
    int ynumeros[5];
    int cont;
    int cont2 = 0;

    for (cont = 0; cont < 5; cont++){
        printf("Digite o %d Valor: ", cont + 1);
        scanf("%d", &xnumeros[cont]);
    }
    
    for (cont = 4; cont >= 0; cont--){ // para o xnumeros
        ynumeros[cont2] = xnumeros[cont]; // para o ynumeros
        cont2++;
    }

    printf("O vetor Y = [");

    for (cont = 0; cont < 5; cont++){
        if (cont < 4){
            printf("%d, ", ynumeros[cont]);
        }
        else{
            printf("%d]\n", ynumeros[cont]);
        }
    }
    
    system("pause");
    return 0;
}
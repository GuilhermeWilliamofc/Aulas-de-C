/*
2. Declare um vetor de 10 inteiros, inicialize seus elementos e escreva um trecho de código que percorra
todo o vetor.
*/

#include <stdio.h>
#define MAX 10

int main(){
    int vetor[MAX];
    
    for (int cont = 0; cont < MAX; cont++){
        vetor[cont] = cont + 1;
        printf("vetor[%d]: ", cont);
        printf("%d\n",vetor[cont]);
    }

    return 0;
}
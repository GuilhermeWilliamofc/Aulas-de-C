#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Não extrapole o limite do array, caso você extrapole o limite não dará erro, mas dará problemas no programa, como os valores printados serem completamente diferentes do que o esperado

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numeros[5];
    int indice;

    for(indice = 0; indice < 5; indice++){
        printf("Insira o %dº número inteiro: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    printf("Dados inseridos: ");

    for(indice = 0; indice < 5; indice++){
        if(indice < 4){
            printf("%d, ", numeros[indice]);
        }
        else{
            printf("%d", numeros[indice]);
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
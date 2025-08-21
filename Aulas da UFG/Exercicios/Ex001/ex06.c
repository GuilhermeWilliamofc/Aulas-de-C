#include <stdio.h>

int main(){
    int num_digitado;
    printf("Digite um número inteiro: ");
    scanf("%d", &num_digitado);

    printf("Sucessor: %d\n", num_digitado + 1);
    printf("Antecessor: %d", num_digitado - 1);

    return 0;
}
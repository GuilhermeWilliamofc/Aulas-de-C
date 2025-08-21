#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num_digitado;
    printf("Digite um número inteiro: ");
    scanf("%d", &num_digitado);

    printf("Sucessor: %d\n", num_digitado + 1);
    printf("Antecessor: %d\n", num_digitado - 1);

    system("pause");
    return 0;
}
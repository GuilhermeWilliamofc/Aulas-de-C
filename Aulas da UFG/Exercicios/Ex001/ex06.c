#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num_digitado;
    printf("Digite um número inteiro: ");
    scanf("%d", &num_digitado);

    printf("Sucessor: %d\n", num_digitado + 1);
    printf("Antecessor: %d", num_digitado - 1);

    return 0;
}
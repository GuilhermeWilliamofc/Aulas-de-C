#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero_digitado;
    printf("Digite um número: ");
    scanf("%d", &numero_digitado);

    printf("Você digitou o número: %d\n", numero_digitado);
    system("pause");
    return 0;
}
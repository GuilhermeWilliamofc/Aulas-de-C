#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, soma, subtracao, multiplicacao, divisao; // assim como o python tem como declarar mais de uma variável na mesma linha (no python é assim "A = B = soma..."), também não precisa declarar algum valor a variável

    printf("-----------------------------------------\n");
    printf("Minicalculadora\n");
    printf("-----------------------------------------\n");

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    printf("Digite o segundo valor: ");
    scanf("%d", &B);

    // Modificando as variáveis já declaradas anteriormente
    soma = A + B;
    subtracao = A - B;
    multiplicacao = A * B;
    divisao = A / B;

    printf("-----------------------------------------\n");
    printf("Resultados\n");
    printf("-----------------------------------------\n");

    printf("Soma: %d + %d = %d\n", A, B, soma);
    printf("Subtracao: %d - %d = %d\n", A, B, subtracao);
    printf("Multiplicacao: %d * %d = %d\n", A, B, multiplicacao);
    printf("Divisao: %d / %d = %d\n", A, B, divisao);

    printf("-----------------------------------------\n");
    system("pause");
    return 0;
}
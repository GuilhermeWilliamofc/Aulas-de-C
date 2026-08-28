/*
2. Estatísticas sobre o vetor dinâmico
Amplie o programa anterior para encontrar o maior e o menor valor, calcular a média e contar quantos
elementos são estritamente maiores que a média. Apresente os resultados, exibindo a média com duas
casas decimais. Teste também um vetor com apenas um elemento e outro com valores iguais.
*/

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(){
    int quantidade;

    printf("Digite o numero de Notas: ");
    scanf("%d", &quantidade);

    int *vetor = gerar_vetor((size_t) quantidade);

    preencher_vetor(quantidade, vetor);
    printf("\n");
    printar_vetor(quantidade, vetor);

    printf("\nResultados:\n");
    maior(quantidade, vetor);
    menor(quantidade, vetor);
    printf("\n");
    media(quantidade, vetor);

    free(vetor);
    system("pause");
    return 0;
}
/*
3. Redimensionamento com realloc
Leia N, aloque um vetor e preencha seus N elementos. Depois, leia um novo tamanho M e utilize realloc
para redimensioná-lo. Se M > N, leia os elementos adicionais; se M < N, mantenha apenas os M primeiros
elementos; se M = N, mantenha o conteúdo. Imprima o vetor resultante e libere a memória.
Utilize um ponteiro temporário para verificar o retorno de realloc antes de atualizar o ponteiro original. Em
caso de falha, informe o erro e libere o bloco original antes de encerrar. Teste aumento, redução e
manutenção do tamanho.
*/

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(){
    int quantidade;
    int nova_quantidade;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &quantidade);

    int *vetor = gerar_vetor((size_t) quantidade);

    preencher_vetor(quantidade, vetor);
    printf("\n");
    printar_vetor(quantidade, vetor);

    printf("Digite o novo tamanho do vetor: ");
    scanf("%d", &nova_quantidade);

    vetor = realocar_vetor(nova_quantidade);

    preencher_vetor(nova_quantidade, vetor);
    printf("\n");
    printar_vetor(nova_quantidade, vetor);

    free(vetor);
    system("pause");
    return 0;
}
/*
5. Conexão de três nós
Utilizando a mesma estrutura, aloque separadamente três nós com os valores 10, 20 e 30. Conecte o
primeiro ao segundo e o segundo ao terceiro; o campo proximo do terceiro deve receber NULL.
Imprima os três valores acessando-os a partir do ponteiro primeiro, por meio dos campos proximo. Não é
necessário utilizar laço de percurso nem implementar operações de lista. Libere os três nós sem acessar
campos de nós já liberados. Se alguma alocação falhar, libere os nós que já tiverem sido alocados.
*/

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(){
    No *primeiro_no = malloc(sizeof(No));

    if (primeiro_no == NULL) {
        return 1;
    }

    No *segundo_no = malloc(sizeof(No));

    if (segundo_no == NULL) {
        free(primeiro_no);
        return 1;
    }


    No *terceiro_no = malloc(sizeof(No));

    if (terceiro_no == NULL) {
        free(segundo_no);
        free(primeiro_no);
        return 1;
    }

    primeiro_no->valor = 10;
    segundo_no->valor = 20;
    terceiro_no->valor = 30;

    primeiro_no->proximo = segundo_no;
    segundo_no->proximo = terceiro_no;
    terceiro_no->proximo = NULL;

    printf("Primeiro No: %d\n", primeiro_no->valor);
    printf("Segundo No: %d\n", primeiro_no->proximo->valor);
    printf("Terceiro No: %d\n", primeiro_no->proximo->proximo->valor);
    
    free(terceiro_no);
    free(segundo_no);
    free(primeiro_no);

    return 0;
}
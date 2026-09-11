#include <stdio.h>
#include <stdlib.h>

#include "registro_veiculos.c"

static void imprimir(ControleEntrada controle) {
    No *atual = controle.primeiro;

    while (atual != NULL) {
        printf(
            "Veiculo %d na vaga [%d][%d]\n",
            atual->codigo,
            atual->linha,
            atual->coluna
        );
        atual = atual->proximo;
    }
}

static void liberarNos(ControleEntrada *controle) {
    No *atual = controle->primeiro;

    while (atual != NULL) {
        No *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    controle->primeiro = NULL;
    controle->quantidade = 0;
}

int main(void) {
    ControleEntrada controle;

    inicializarControle(&controle);

    registrarEntrada(&controle, 101, 0, 0);
    registrarEntrada(&controle, 205, 1, 2);
    registrarEntrada(&controle, 310, 3, 4);

    imprimir(controle);

    No *encontrado = buscarVeiculo(controle, 205);

    if (encontrado != NULL) {
        printf(
            "Encontrado: %d em [%d][%d]\n",
            encontrado->codigo,
            encontrado->linha,
            encontrado->coluna
        );
    }

    printf("Quantidade: %d\n", controle.quantidade);

    liberarNos(&controle);
    return 0;
}


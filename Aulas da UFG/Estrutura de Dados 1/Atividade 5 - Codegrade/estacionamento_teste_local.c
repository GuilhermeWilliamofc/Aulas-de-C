#include <stdio.h>

#include "estacionamento.c"

int main(void) {
    Estacionamento estacionamento;
    int linha;
    int coluna;

    inicializar(&estacionamento);

    estacionamento.vagas[0][0] = 101;
    estacionamento.vagas[0][1] = 205;
    estacionamento.vagas[0][2] = 310;
    estacionamento.quantidade = 3;

    if (localizarVagaLivre(estacionamento, &linha, &coluna)) {
        printf("Primeira vaga livre: [%d][%d]\n", linha, coluna);
    } else {
        printf("Estacionamento lotado.\n");
    }

    printf(
        "Quantidade de vagas livres: %d\n",
        contarVagasLivres(estacionamento)
    );

    return 0;
}


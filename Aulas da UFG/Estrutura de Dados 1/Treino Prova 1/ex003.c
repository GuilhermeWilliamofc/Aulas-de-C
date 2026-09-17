#include <stdio.h>
#include <stdlib.h>

typedef struct Acao {
    int codigoAcao;
    struct Acao *proximo;
} Acao;

typedef struct {
    Acao *topo;
    int quantidade;
} PilhaAcoes;

void inicializarPilha(PilhaAcoes *pilha) {
    pilha->topo = NULL;
    pilha->quantidade = 0;
}

int empilhar(PilhaAcoes *pilha, int codigoAcao) {
    /* TODO: insere no topo (inicio) */
    if (codigoAcao <= 0){
        return 0;
    }

    Acao *nova_acao = malloc(sizeof *nova_acao);

    if (nova_acao == NULL){
        return 0;
    }

    nova_acao->codigoAcao = codigoAcao;
    nova_acao->proximo = pilha->topo;

    pilha->topo = nova_acao;
    pilha->quantidade++;

    return 1;
}

int desempilhar(PilhaAcoes *pilha, int *codigoAcao) {
    /* TODO: remove do topo e devolve o valor removido */
    if (pilha == NULL || pilha->topo == NULL){
        return 0;
    }

    Acao *atual = pilha->topo;

    pilha->topo = atual->proximo;
    *codigoAcao = atual->codigoAcao;
    free(atual);

    return 1;
}

int consultarTopo(PilhaAcoes pilha, int *codigoAcao) {
    /* TODO: le o topo SEM remover -- repare que "pilha" nao e ponteiro aqui */
    if (pilha.topo == NULL){
        return 0;
    }

    *codigoAcao = pilha.topo->codigoAcao;
    return 1;
}
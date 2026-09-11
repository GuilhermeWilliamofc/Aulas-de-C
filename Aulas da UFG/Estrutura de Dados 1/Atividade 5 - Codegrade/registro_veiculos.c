#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 5

typedef struct No {
    int codigo;
    int linha;
    int coluna;
    struct No *proximo;
} No;

typedef struct {
    No *primeiro;
    int quantidade;
} ControleEntrada;

void inicializarControle(ControleEntrada *controle) {
    controle->primeiro = NULL;
    controle->quantidade = 0;
}

No *buscarVeiculo(ControleEntrada controle, int codigo) {
    No *atual = controle.primeiro;
    while(atual != NULL){
        if(atual->codigo == codigo){
            return atual;
        }
        atual = atual->proximo;
    }
    return NULL;
}

int registrarEntrada(
    ControleEntrada *controle,
    int codigo,
    int linha,
    int coluna
) {
    if(codigo <= 0 || buscarVeiculo(*controle, codigo) != NULL){
        return 0;
    }

    if(linha < 0 || linha > LINHAS - 1){
        return 0;
    }

    if(coluna < 0 || coluna > COLUNAS - 1){
        return 0;
    }

    No *novo_no = malloc(sizeof *novo_no);

    if(novo_no == NULL){
        return 0;
    }

    novo_no->codigo = codigo;
    novo_no->linha = linha;
    novo_no->coluna = coluna;
    novo_no->proximo = NULL;

    if(controle->primeiro == NULL){
        controle->primeiro = novo_no;
    } else {
        No *atual = controle->primeiro;
        while(atual->proximo != NULL){
            atual = atual->proximo;
        }
        atual->proximo = novo_no;
    }

    controle->quantidade++;
    return 1;
}
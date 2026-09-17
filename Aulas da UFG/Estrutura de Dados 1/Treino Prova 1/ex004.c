#include <stdio.h>
#include <stdlib.h>

typedef struct Atendimento {
    int senha;
    int prioridade;
    struct Atendimento *proximo;
} Atendimento;

typedef struct {
    Atendimento *inicio;
    int total;
} FilaAtendimento;

void inicializar(FilaAtendimento *fila) {
    fila->inicio = NULL;
    fila->total = 0;
}

int inserirAtendimento(FilaAtendimento *fila, int senha, int prioridade) {
    if (senha <= 0 || prioridade < 1 || prioridade > 2){
        return 0;
    }

    Atendimento *novo_atendimento = malloc(sizeof *novo_atendimento);

    if (novo_atendimento == NULL){
        return 0;
    }

    novo_atendimento->senha = senha;
    novo_atendimento->prioridade = prioridade;
    novo_atendimento->proximo = NULL;

    if (fila->inicio == NULL){
        fila->inicio = novo_atendimento;
        fila->total++;
        return 1;
    }

    Atendimento *atual = fila->inicio;

    while (atual->proximo != NULL){
        atual = atual->proximo;
    }

    atual->proximo = novo_atendimento;
    fila->total++;
    return 1;
}

int chamarProximo(FilaAtendimento *fila, int *senha, int *prioridade) {
    if (fila == NULL || fila->inicio == NULL){
        return 0;
    }

    Atendimento *valor_removido = fila->inicio;

    fila->inicio = valor_removido->proximo;
    *senha = valor_removido->senha;
    *prioridade = valor_removido->prioridade;

    free(valor_removido);
    fila->total--;
    return 1;
}

int buscarPorSenha(FilaAtendimento fila, int senha, int *prioridade) {
    Atendimento *atual = fila.inicio;

    while (atual != NULL){
        if (atual->senha == senha){
            *prioridade = atual->prioridade;
            return 1;
        }
        atual = atual->proximo;
    }

    return 0;
}

int cancelarAtendimento(FilaAtendimento *fila, int senha) {
    if (fila == NULL){
        return 0;
    }

    Atendimento *anterior = NULL;
    Atendimento *atual = fila->inicio;

    if (atual == NULL){
        return 0;
    }

    if (atual->senha == senha){
        fila->inicio = atual->proximo;
        free(atual);
        fila->total--;
        return 1;
    }

    anterior = atual;
    atual = atual->proximo;

    while (atual != NULL){
        if (atual->senha == senha){
            anterior->proximo = atual->proximo;
            free(atual);
            fila->total--;
            return 1;
        }
        anterior = atual;
        atual = atual->proximo;
    }

    return 0;
}
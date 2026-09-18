#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct No {
    int codigo;
    struct No *proximo;
} No;

typedef struct {
    No *primeiro;
    int quantidade;
} ListaRobos;

void inicializar(ListaRobos *lista){
    lista->primeiro = NULL;
    lista->quantidade = 0;
}

No *buscar(ListaRobos lista, int codigo){
    if (lista.primeiro == NULL || codigo <= 0){
        return NULL;
    }

    No *atual = lista.primeiro;

    while (atual != NULL){
        if (atual->codigo == codigo){
            return atual;
        }
        atual = atual->proximo;
    }

    return NULL;
}

int inserirInicio(ListaRobos *lista, int codigo){
    if (lista == NULL || codigo <= 0 || buscar(*lista, codigo)){
        return 0;
    }

    No *novo_no = malloc(sizeof *novo_no);

    if (novo_no == NULL){
        return 0;
    }

    novo_no->codigo = codigo;
    novo_no->proximo = lista->primeiro;

    lista->primeiro = novo_no;
    lista->quantidade++;
    return 1;
}

int inserirFinal(ListaRobos *lista, int codigo){
    if (lista == NULL || codigo <= 0 || buscar(*lista, codigo)){
        return 0;
    }

    No *novo_no = malloc(sizeof *novo_no);

    if (novo_no == NULL){
        return 0;
    }

    novo_no->codigo = codigo;
    novo_no->proximo = NULL;

    No *atual = lista->primeiro;

    if (atual == NULL){
        lista->primeiro = novo_no;
        lista->quantidade++;
        return 1;
    }

    while (atual->proximo != NULL){
        atual = atual->proximo;
    }

    atual->proximo = novo_no;
    lista->quantidade++;
    return 1;
}

int remover(ListaRobos *lista, int codigo){
    if (lista == NULL || lista->primeiro == NULL || codigo <= 0){
        return 0;
    }

    No *atual = lista->primeiro;

    if (atual->codigo == codigo){
        lista->primeiro = atual->proximo;
        free(atual);
        lista->quantidade--;
        return 1;
    }

    No *anterior = atual;
    atual = atual->proximo;

    while (atual != NULL){
        if (atual->codigo == codigo){
            anterior->proximo = atual->proximo;
            free(atual);
            lista->quantidade--;
            return 1;
        }
        anterior = atual;
        atual = atual->proximo;
    }

    return 0;
}

void imprimir(ListaRobos lista){
    if (lista.primeiro == NULL){
        printf("LISTA VAZIA\n");
        return;
    }

    No *atual = lista.primeiro;

    while (atual != NULL){
        if (atual->proximo == NULL){
            printf("%d\n", atual->codigo);
            atual = atual->proximo;
            break;
        }

        printf("%d ", atual->codigo);
        atual = atual->proximo;
    }
}

int contar(ListaRobos lista){
    int quantidade = 0;

    No *atual = lista.primeiro;

    while (atual != NULL){
        quantidade++;
        atual = atual->proximo;
    }

    return quantidade;
}

void liberar(ListaRobos *lista){
    if (lista == NULL || lista->primeiro == NULL){
        return;
    }

    No *atual = lista->primeiro;

    while (atual != NULL){
        No *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    lista->primeiro = NULL;
    lista->quantidade = 0;
}

int main(){
    ListaRobos lista;
    int comando = -1;
    int codigo;
    int quantidade;

    inicializar(&lista);

    while (comando != 0){
        scanf("%d", &comando);

        switch (comando){
        case 0:
            break;
        case 1:
            scanf("%d", &codigo);
            if (inserirInicio(&lista, codigo)){
                printf("INSERIDO\n");
            } else {
                printf("NAO INSERIDO\n");
            }
            break;
        case 2:
            scanf("%d", &codigo);
            if (inserirFinal(&lista, codigo)){
                printf("INSERIDO\n");
            } else {
                printf("NAO INSERIDO\n");
            }
            break;
        case 3:
            scanf("%d", &codigo);
            if (remover(&lista, codigo)){
                printf("REMOVIDO\n");
            } else {
                printf("NAO ENCONTRADO\n");
            }
            break;
        case 4:
            scanf("%d", &codigo);
            if (buscar(lista, codigo)){
                printf("ENCONTRADO\n");
            } else {
                printf("NAO ENCONTRADO\n");
            }
            break;
        case 5:
            imprimir(lista);
            break;
        case 6:
            quantidade = contar(lista);
            printf("QUANTIDADE: %d\n", quantidade);
            break;
        
        default:
            break;
        }
    }

    liberar(&lista);
    return 0;
}
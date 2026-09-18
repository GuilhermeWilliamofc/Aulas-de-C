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
} ListaPassageiros;

void inicializar(ListaPassageiros *lista){
    lista->primeiro = NULL;
    lista->quantidade = 0;
}

No *buscar(ListaPassageiros lista, int codigo){
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

int inserirInicio(ListaPassageiros *lista, int codigo){
    if (lista == NULL || codigo <= 0 || buscar(*lista, codigo)){
        return 0;
    }

    No *novo_no = malloc(sizeof *novo_no);

    if (novo_no == NULL){
        return 0;
    }

    No *primeiro_no = lista->primeiro;

    novo_no->codigo = codigo;
    novo_no->proximo = primeiro_no;

    lista->primeiro = novo_no;
    lista->quantidade++;

    return 1;
}

int inserirFinal(ListaPassageiros *lista, int codigo){
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

int remover(ListaPassageiros *lista, int codigo){
    if (lista == NULL || codigo <= 0 || lista->primeiro == NULL){
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

void imprimir(ListaPassageiros lista){
    if (lista.primeiro == NULL){
        printf("LISTA VAZIA\n");
        return;
    }

    No *atual = lista.primeiro;

    while (atual != NULL){
        if (atual->proximo == NULL){
            printf("%d\n", atual->codigo);
            break;
        }

        printf("%d ", atual->codigo);
        atual = atual->proximo;
    }
}

void liberar(ListaPassageiros *lista){
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

int contar(ListaPassageiros lista){
    int contador = 0;
    No *atual = lista.primeiro;

    while (atual != NULL){
        contador++;
        atual = atual->proximo;
    }

    return contador;
}

int main(){
    ListaPassageiros lista;
    inicializar(&lista);
    
    int comando = -1;
    int codigo = 0;
    int quantidade = 0;

    while (comando != 0){
        scanf("%d", &comando);

        switch (comando){
        case 0:
            break;
        case 1:
            scanf("%d", &codigo);
            // se for verdadeiro
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
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int codigo;
    struct No *proximo;
} No;

typedef struct {
    No *primeiro;
    int quantidade;
} ListaChamados;

void inicializar(ListaChamados *lista) {
    lista->primeiro = NULL;
    lista->quantidade = 0;
}

No *buscar(ListaChamados lista, int codigo) {
    No *atual = lista.primeiro;

    while (atual != NULL){
        if (atual->codigo == codigo){
            return atual;
        }

        atual = atual->proximo;
    }

    return NULL;
}

int contar(ListaChamados lista) {
    int total = 0;
    No *atual = lista.primeiro;

    while (atual != NULL){
        atual = atual->proximo;
        total++;
    }

    return total;
}

int inserirInicio(ListaChamados *lista, int codigo) {
    if (buscar(*lista, codigo) != NULL){
        return 0;
    }

    if (codigo <= 0){
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

int inserirFinal(ListaChamados *lista, int codigo) {
    if (buscar(*lista, codigo) != NULL){
        return 0;
    }

    if (codigo <= 0){
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

int remover(ListaChamados *lista, int codigo) {
    No *anterior = NULL;
    No *atual = lista->primeiro;

    // se tiver vazia
    if (atual == NULL){
        return 0;
    }

    // se for o primeiro elemento
    if (atual->codigo == codigo){
        lista->primeiro = atual->proximo;
        free(atual);
        lista->quantidade--;
        return 1;
    }

    // se tiver no meio ou final
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

void imprimir(ListaChamados lista) {
    No *atual = lista.primeiro;

    if (atual == NULL){
        printf("LISTA VAZIA\n");
    }

    while (atual != NULL){
        if (atual->proximo == NULL){
            printf("%d\n", atual->codigo);
            break;
        }

        printf("%d ", atual->codigo);
        atual = atual->proximo;
    }
}

void liberar(ListaChamados *lista) {
    No *atual = lista->primeiro;
    
    while (atual != NULL){
        No *proximo_no = atual->proximo;
        free(atual);
        atual = proximo_no;
    }

    lista->primeiro = NULL;
    lista->quantidade = 0;
}

int main(void) {
    ListaChamados lista;
    inicializar(&lista);

    int comando = -1;
    int codigo = 0;

    while (comando != 0){
        scanf("%d", &comando);

        switch (comando){
        case 0:
            break;
        case 1:
            scanf("%d", &codigo);
            int inserir1 = inserirInicio(&lista, codigo);

            if (inserir1 == 0){
                printf("NAO INSERIDO\n");
            }
            else{
                printf("INSERIDO\n");
            }
            break;
        case 2:
            scanf("%d", &codigo);
            int inserir2 = inserirFinal(&lista, codigo);

            if (inserir2 == 0){
                printf("NAO INSERIDO\n");
            }
            else{
                printf("INSERIDO\n");
            }
            break;
        case 3:
            scanf("%d", &codigo);
            int remover_elem = remover(&lista, codigo);

            if (remover_elem == 0){
                printf("NAO ENCONTRADO\n");
            }
            else{
                printf("REMOVIDO\n");
            }
            break;
        case 4:
            scanf("%d", &codigo);
            No *result_busca = buscar(lista, codigo);

            if (result_busca == NULL){
                printf("NAO ENCONTRADO\n");
            }
            else{
                printf("ENCONTRADO\n");
            }
            break;
        case 5:
            imprimir(lista);
            break;
        case 6:
            printf("QUANTIDADE: %d\n", contar(lista));
            break;
        default:
            break;
        }
    }

    liberar(&lista);
    return 0;
}
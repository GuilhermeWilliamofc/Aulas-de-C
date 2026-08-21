/*
1. TAD Lista Sequencial. Utilizando uma estrutura contendo um vetor e a quantidade de elementos
atualmente armazenados, implemente funções para:
● inicializar a lista;
● verificar se está vazia e se está cheia;
● informar a quantidade de elementos armazenados;
● imprimir todos os elementos válidos da lista.
*/

#include <stdio.h>
#define MAX_ELEMENTOS 10

typedef struct {
    int vetor[MAX_ELEMENTOS];
    int quantidade_elementos;
} Lista;

int iniciar_lista(Lista *lista){
    lista->quantidade_elementos = 0;
    return 1;
}

int esta_vazia(Lista *lista){
    if (lista->quantidade_elementos == 0){
        printf("A lista esta vazia\n");
        return 1; // se esta vazia
    }
    printf("A lista tem %d elementos\n", lista->quantidade_elementos);
    return 0; // se nao esta vazia
}

int esta_cheia(Lista *lista){
    if (lista->quantidade_elementos == MAX_ELEMENTOS){
        printf("A lista esta cheia\n");
        return 1;
    }
    printf("A lista ainda nao esta cheia\n");
    return 0;
}

int get_quantidade_elementos(Lista *lista){
    return lista->quantidade_elementos;
}

int imprimir_elementos(Lista *lista){
    if (lista->quantidade_elementos == 0){
        return 0;
    }
    for(int i = 0; i < get_quantidade_elementos(lista); i++){
        printf("Vetor[%d]: %d\n", i, lista->vetor[i]);
    }
    return 1;
}

int ocupar_lista(Lista *lista, int quantidade_elementos){
    // se a quantidade de elementos for maior que o limite
    if (quantidade_elementos > MAX_ELEMENTOS){
        quantidade_elementos = MAX_ELEMENTOS;
    }

    for(int i = 0; i < quantidade_elementos; i++){
        lista->vetor[i] = i+1;
        lista->quantidade_elementos++;
    }
    return 1;
}

int main(){
    Lista lista;
    iniciar_lista(&lista);
    esta_vazia(&lista);
    esta_cheia(&lista);

    ocupar_lista(&lista, 5);
    imprimir_elementos(&lista);
    esta_vazia(&lista);
    esta_cheia(&lista);

    return 0;
}

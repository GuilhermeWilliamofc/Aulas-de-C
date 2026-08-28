/*
3. Remoção. Implemente uma função que remova o elemento de uma posição informada da Lista
Sequencial. Os elementos posteriores deverão ser deslocados para ocupar o espaço liberado e a
quantidade de elementos deverá ser atualizada.
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
        return 1;
    }

    printf("A lista tem %d elementos\n", lista->quantidade_elementos);
    return 0;
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

    for (int cont = 0; cont < get_quantidade_elementos(lista); cont++){
        printf("Vetor[%d]: %d\n", cont, lista->vetor[cont]);
    }

    return 1;
}

int busca_elemento(Lista *lista, int valor_procurado){
    for (int cont = 0; cont < lista->quantidade_elementos; cont++){
        if (lista->vetor[cont] == valor_procurado){
            printf("O valor '%d' foi encontrado na posicao %d\n", valor_procurado, cont);
            return cont;
        }
    }

    printf("O valor '%d' nao foi encontrado na lista\n", valor_procurado);
    return -1;
}

int inserir_elemento(Lista *lista, int novo_elemento){
    if (esta_cheia(lista)){
        return 0;
    }

    lista->vetor[get_quantidade_elementos(lista)] = novo_elemento;
    lista->quantidade_elementos++;
    return 1;
}

int inserir_elemento_posicao(Lista *lista, int posicao, int novo_elemento){
    if (esta_cheia(lista) || posicao < 0 || posicao > lista->quantidade_elementos){
        return 0;
    }

    lista->quantidade_elementos++;
    for (int cont = lista->quantidade_elementos - 1; cont > posicao; cont--){
        lista->vetor[cont] = lista->vetor[cont - 1];
    }

    lista->vetor[posicao] = novo_elemento;
    return 1;
}

int remover_elemento_posicao(Lista *lista, int posicao){
    if (posicao < 0 || posicao >= lista->quantidade_elementos){
        return 0;
    }

    for (int cont = posicao; cont < lista->quantidade_elementos - 1; cont++){
        lista->vetor[cont] = lista->vetor[cont + 1];
    }

    lista->quantidade_elementos--;
    return 1;
}

int ocupar_lista(Lista *lista, int quantidade_elementos){
    if (quantidade_elementos > MAX_ELEMENTOS){
        quantidade_elementos = MAX_ELEMENTOS;
    }

    for (int cont = 0; cont < quantidade_elementos; cont++){
        lista->vetor[cont] = cont + 1;
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

    printf("\n");

    imprimir_elementos(&lista);

    printf("\n");

    esta_vazia(&lista);
    esta_cheia(&lista);

    printf("\n");

    busca_elemento(&lista, 69);

    printf("\n");

    inserir_elemento(&lista, 69);
    imprimir_elementos(&lista);

    printf("\n");

    busca_elemento(&lista, 69);

    printf("\n");

    inserir_elemento_posicao(&lista, 2, 86);
    imprimir_elementos(&lista);

    printf("\n");

    remover_elemento_posicao(&lista, 2);
    imprimir_elementos(&lista);

    return 0;
}
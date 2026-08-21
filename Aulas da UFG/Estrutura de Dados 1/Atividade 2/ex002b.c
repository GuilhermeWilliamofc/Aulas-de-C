/*
2. Inserção e busca. Amplie o TAD Lista Sequencial implementando funções para:
● inserir um elemento no final da lista;
● buscar um valor e retornar sua posição, ou -1 caso não seja encontrado;
● inserir um elemento em uma posição informada, deslocando os elementos necessários.
Observação: a operação de inserção deve verificar se existe espaço disponível e se a posição
informada é válida.
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

int busca_elemento(Lista *lista, int valor_procurado){
    for (int i = 0; i < lista->quantidade_elementos; i++){
        if (lista->vetor[i] == valor_procurado){
            printf("O valor '%d' foi encontrado na posicao %d\n", valor_procurado, i);
            return i;
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
}

int inserir_elemento_posicao(Lista *lista, int posicao, int novo_elemento){
    if (esta_cheia(lista) || posicao > lista->quantidade_elementos){
        return 0;
    }

    lista->quantidade_elementos++;

    for (int i = lista->quantidade_elementos - 1; i > posicao; i--){
        lista->vetor[i] = lista-> vetor[i - 1];
    }

    lista->vetor[posicao] = novo_elemento;
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

    busca_elemento(&lista, 69);

    inserir_elemento(&lista, 69);

    imprimir_elementos(&lista);

    busca_elemento(&lista, 69);

    inserir_elemento_posicao(&lista, 2, 86);

    imprimir_elementos(&lista);

    return 0;
}

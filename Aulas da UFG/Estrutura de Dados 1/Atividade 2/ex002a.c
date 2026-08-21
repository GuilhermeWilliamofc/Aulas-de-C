/*
2. Considere a seguinte representação para uma Lista Sequencial. Escreva as assinaturas das funções
necessárias para inicializar a lista, verificar se ela está vazia, verificar se ela está cheia e imprimir seus
elementos.
#define CAPACIDADE 100
typedef struct {
int dados[CAPACIDADE];
int quantidade;
} Lista;
*/

#include <stdio.h>
#define MAX_ELEMENTOS 10

typedef struct {
    int vetor[MAX_ELEMENTOS];
    int quantidade_elementos;
} Lista;

int iniciar_lista(Lista *lista);
int esta_vazia(Lista *lista);
int esta_cheia(Lista *lista);
int imprimir_elementos(Lista *lista);

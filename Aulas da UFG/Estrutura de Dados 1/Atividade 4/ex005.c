/*
5. Liberação e teste integrado
Implemente liberar para desalocar todos os nós e restaurar o estado vazio. Em main, construa 10 → 20 → 30 →
40, imprima a lista, consulte 30 e 99, realize remoções que exercitem início, meio, fim e valor ausente, e confira
quantidade após cada operação. Ao final, libere a estrutura e confirme que ela está vazia.
void liberar(Lista *lista);
Invariantes a preservar: lista vazia implica inicio == NULL e quantidade == 0; o último nó aponta para NULL;
quantidade corresponde ao número de nós alcançáveis a partir de inicio.
*/

#include <stdio.h>
#include <stdlib.h>

#include "util.h"


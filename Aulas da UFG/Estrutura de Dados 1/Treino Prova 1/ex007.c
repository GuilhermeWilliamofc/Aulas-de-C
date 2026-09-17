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
} Playlist;

void inicializar(Playlist *playlist){
    playlist->primeiro = NULL;
    playlist->quantidade = 0;
}

int buscar(Playlist playlist, int codigo){
    if (playlist.primeiro == NULL){
        return 0;
    }

    No *atual = playlist.primeiro;

    while (atual != NULL){
        if (atual->codigo == codigo){
            return 1;
        }
        atual = atual->proximo;
    }

    return 0;
}

int inserirInicio(Playlist *playlist, int codigo){
    if (playlist == NULL || codigo <= 0 || buscar(*playlist, codigo)){
        return 0;
    }

    No *nova_musica = malloc(sizeof *nova_musica);

    if (nova_musica == NULL){
        return 0;
    }

    nova_musica->codigo = codigo;
    nova_musica->proximo = playlist->primeiro;

    playlist->primeiro = nova_musica;
    playlist->quantidade++;
    return 1;
}

int inserirFinal(Playlist *playlist, int codigo){
    if (playlist == NULL || codigo <= 0 || buscar(*playlist, codigo)){
        return 0;
    }

    No *nova_musica = malloc(sizeof *nova_musica);

    if (nova_musica == NULL){
        return 0;
    }

    nova_musica->codigo = codigo;
    nova_musica->proximo = NULL;

    No *atual = playlist->primeiro;

    if (atual == NULL){
        playlist->primeiro = nova_musica;
        playlist->quantidade++;
        return 1;
    }

    while (atual->proximo != NULL){
        atual = atual->proximo;
    }

    atual->proximo = nova_musica;
    playlist->quantidade++;
    return 1;
}

int remover(Playlist *playlist, int codigo){
    if (playlist == NULL || playlist->primeiro == NULL){
        return 0;
    }

    No *anterior = NULL;
    No *atual = playlist->primeiro;

    if (atual->codigo == codigo){
        playlist->primeiro = atual->proximo;
        free(atual);
        playlist->quantidade--;
        return 1;
    }

    anterior = atual;
    atual = atual->proximo;

    while (atual != NULL){
        if (atual->codigo == codigo){
            anterior->proximo = atual->proximo;
            free(atual);
            playlist->quantidade--;
            return 1;
        }
        anterior = atual;
        atual = atual->proximo;
    }

    return 0;
}

void imprimir(Playlist playlist){
    if (playlist.primeiro == NULL){
        printf("Playlist vazia\n");
        return;
    }

    No *atual = playlist.primeiro;

    printf("Playlist: ");

    while (atual != NULL){
        printf("%d ", atual->codigo);
        atual = atual->proximo;
    }

    printf("\n");
}

void liberar(Playlist *playlist){
    if (playlist == NULL || playlist->primeiro == NULL){
        return;
    }

    No *atual = playlist->primeiro;

    while (atual != NULL){
        No *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    playlist->primeiro = NULL;
    playlist->quantidade = 0;
}
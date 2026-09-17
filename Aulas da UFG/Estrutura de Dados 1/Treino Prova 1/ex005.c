#include <stdio.h>
#include <stdlib.h>

typedef struct Musica {
    int id;
    int duracao;
    struct Musica *proximo;
} Musica;

typedef struct {
    Musica *inicio;
    int total;
} Playlist;

void inicializar(Playlist *playlist) {
    playlist->inicio = NULL;
    playlist->total = 0;
}

int adicionarMusica(Playlist *playlist, int id, int duracao) {
    if (playlist == NULL){
        return 0;
    }

    if (id <= 0 || duracao <= 0){
        return 0;
    }

    Musica *nova_musica = malloc(sizeof *nova_musica);

    if (nova_musica == NULL){
        return 0;
    }

    nova_musica->duracao = duracao;
    nova_musica->id = id;
    nova_musica->proximo = NULL;

    if (playlist->inicio == NULL){
        playlist->inicio = nova_musica;
        playlist->total++;
        return 1;
    }

    Musica *atual = playlist->inicio;

    while (atual->proximo != NULL){
        atual = atual->proximo;
    }

    atual->proximo = nova_musica;
    playlist->total++;
    return 1;
}

int tocarProxima(Playlist *playlist, int *id, int *duracao) {
    if (playlist == NULL || playlist->inicio == NULL){
        return 0;
    }

    Musica *musica_removida = playlist->inicio;
    playlist->inicio = musica_removida->proximo;
    *id = musica_removida->id;
    *duracao = musica_removida->duracao;
    free(musica_removida);
    playlist->total--;

    return 1;
}

int buscarPorId(Playlist playlist, int id, int *duracao) {
    if (playlist.inicio == NULL){
        return 0;
    }

    Musica *atual = playlist.inicio;

    while (atual != NULL){
        if (atual->id == id){
            *duracao = atual->duracao;
            return 1;
        }
        atual = atual->proximo;
    }

    return 0;
}

int removerMusica(Playlist *playlist, int id) {
    if (playlist == NULL){
        return 0;
    }

    Musica *atual = playlist->inicio;

    if (atual == NULL){
        return 0;
    }
    
    if (atual->id == id){
        playlist->inicio = atual->proximo;
        free(atual);
        playlist->total--;
        return 1;
    }

    Musica *anterior = atual;
    atual = atual->proximo;

    while (atual != NULL){
        if (atual->id == id){
            anterior->proximo = atual->proximo;
            free(atual);
            playlist->total--;
            return 1;
        }
        anterior = atual;
        atual = atual->proximo;
    }

    return 0;
}
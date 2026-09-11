#define LINHAS 4
#define COLUNAS 5

typedef struct {
    int vagas[LINHAS][COLUNAS];
    int quantidade;
} Estacionamento;

void inicializar(Estacionamento *estacionamento) {
    for(int linhas = 0; linhas < LINHAS; linhas++){
        for(int colunas = 0; colunas < COLUNAS; colunas++){
            estacionamento->vagas[linhas][colunas] = 0;
        }
    }
    estacionamento->quantidade = 0;
}

int localizarVagaLivre(
    Estacionamento estacionamento,
    int *linha,
    int *coluna
) {
    for (int linhas = 0; linhas < LINHAS; linhas++){
        for (int colunas = 0; colunas < COLUNAS; colunas++){
            if(estacionamento.vagas[linhas][colunas] == 0){
                *linha = linhas;
                *coluna = colunas;
                return 1;
            }
        }
    }
    return 0;
}

int contarVagasLivres(Estacionamento estacionamento) {
    int vagas_livres = 0;
    for (int linhas = 0; linhas < LINHAS; linhas++){
        for (int colunas = 0; colunas < COLUNAS; colunas++){
            if(estacionamento.vagas[linhas][colunas] == 0){
                vagas_livres++;
            }
        }
    }
    return vagas_livres;
}
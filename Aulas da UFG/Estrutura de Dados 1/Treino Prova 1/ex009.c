#define LINHAS 4
#define COLUNAS 5

typedef struct {
    int vagas[LINHAS][COLUNAS];
    int quantidade;
} Estacionamento;

void inicializar(Estacionamento *estacionamento){
    for (int linha_cont = 0; linha_cont < LINHAS; linha_cont++){
        for (int coluna_cont = 0; coluna_cont < COLUNAS; coluna_cont++){
            estacionamento->vagas[linha_cont][coluna_cont] = 0;
        }
    }

    estacionamento->quantidade = 0;
}

int primeiraVagaLivre(Estacionamento estacionamento, int *linha, int *coluna){
    for (int linha_cont = 0; linha_cont < LINHAS; linha_cont++){
        for (int coluna_cont = 0; coluna_cont < COLUNAS; coluna_cont++){
            if (estacionamento.vagas[linha_cont][coluna_cont] == 0){
                *linha = linha_cont;
                *coluna = coluna_cont;
                return 1;
            }
        }
    }

    return 0;
}

int contarVagasLivres(Estacionamento estacionamento){
    int contador = 0;

    for (int linha_cont = 0; linha_cont < LINHAS; linha_cont++){
        for (int coluna_cont = 0; coluna_cont < COLUNAS; coluna_cont++){
            if (estacionamento.vagas[linha_cont][coluna_cont] == 0){
                contador++;
            }
        }
    }

    return contador;
}
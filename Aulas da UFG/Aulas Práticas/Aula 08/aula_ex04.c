/* Forneça um vetor de 5 números inteiros sem nenhum número
repetido e uma matriz 2x2, informe quantos números existentes no
vetor também existem na matriz */

#include <stdio.h>
#include <stdlib.h>

int vetornum[5]; // criei esse vetor globalmente pra poder usar na função "checarvetor()", n sei se tem um jeito melhor
int matriznum[2][2];

int checarvetor(int numdigitado, int limite){
    /* para checar se o valor digitado pelo usuario no vetor já existe no vetor "vetornum"*/
    int contvetor;
    for(contvetor = 0; contvetor < limite; contvetor++){
        if(vetornum[contvetor] == numdigitado){
            return 1; // retorna verdadeiro
        }
    }
    return 0; // retorna falso
}

int checarvaloresiguais(){
    int contmatriz1, contmatriz2, contvetor2;
    int quant_valores_iguais = 0;

    for(contvetor2 = 0; contvetor2 < 5; contvetor2++){ // contador do vetor
        for(contmatriz1 = 0; contmatriz1 < 2; contmatriz1++){ // contador da matriz (linhas)
            for(contmatriz2 = 0; contmatriz2 < 2; contmatriz2++){ // contador da matriz (colunas)
                if(vetornum[contvetor2] == matriznum[contmatriz1][contmatriz2]){ // se tiver um valor no vetor que tbm existe na matriz
                    quant_valores_iguais += 1;
                }
            }
        }
    }
    return quant_valores_iguais;
}

int main(){
    int cont, cont1, cont2;
    int valorexiste = 1;
    int valortemporario;
    int valores_iguais;

    for(cont = 0; cont < 5; cont++){
        do{
            printf("Digite um numero inteiro para o indice [%d] do vetor: ", cont);
            scanf("%d", &valortemporario);

            valorexiste = checarvetor(valortemporario, cont);

            if(valorexiste == 1){ // se o valor existe
                printf("\033[31mErro! O valor %d ja existe no vetor digite outro valor...\033[m\n", valortemporario);
            }
            else{ // se o valor nao existe no vetor
                vetornum[cont] = valortemporario; // salva o valor no vetor
            }
        } while(valorexiste != 0); // se o usuario digitar um valor que ja existe no vetor retorna 1 vulgo true
}

    for(cont1 = 0; cont1 < 2; cont1++){ // para cada linha
        for(cont2 = 0; cont2 < 2; cont2++){ // para cada coluna
            printf("Digite um numero para o indice [%d][%d]: ", cont1, cont2);
            scanf("%d", &matriznum[cont1][cont2]);
        }
    }

    valores_iguais = checarvaloresiguais();

    printf("A quantidade de valores iguais no vetor e na matriz eh igual a: %d\n", valores_iguais);

    system("pause");
    return 0;
}


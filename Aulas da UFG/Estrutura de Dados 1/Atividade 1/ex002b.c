/*
2. Operações sobre vetores. Leia um número inteiro N representando a quantidade de elementos do vetor.
Em seguida, leia os N números inteiros e armazene-os em um vetor. Implemente funções para:
• buscar um valor e retornar sua posição, ou -1 caso ele não exista;
• inserir um novo elemento em uma posição informada, deslocando os elementos necessários;
• remover o elemento de uma posição informada, reorganizando o vetor;
• imprimir os elementos atualmente armazenados no vetor.
Observação: mantenha separadamente a capacidade do vetor e a quantidade de posições
efetivamente ocupadas.
*/

#include <stdio.h>

#define CAPACIDADE 100

int buscar(int vetor[], int quantidade, int valor){
    for (int cont = 0; cont < quantidade; cont++){
        if (vetor[cont] == valor){
            return cont;
        }
    }

    return -1;
}

void inserir(int vetor[], int *quantidade, int capacidade, int valor, int posicao){
    if (*quantidade >= capacidade){
        printf("Vetor cheio.\n");
        return;
    }

    if (posicao < 0 || posicao > *quantidade){
        printf("Posicao invalida.\n");
        return;
    }

    for (int cont = *quantidade; cont > posicao; cont--){
        vetor[cont] = vetor[cont - 1];
    }

    vetor[posicao] = valor;
    (*quantidade)++;
}

void remover(int vetor[], int *quantidade, int posicao){
    if (posicao < 0 || posicao >= *quantidade){
        printf("Posicao invalida.\n");
        return;
    }

    for (int cont = posicao; cont < *quantidade - 1; cont++){
        vetor[cont] = vetor[cont + 1];
    }

    (*quantidade)--;
}

void imprimir(int vetor[], int quantidade){
    for (int cont = 0; cont < quantidade; cont++){
        printf("%d ", vetor[cont]);
    }

    printf("\n");
}

int main(){
    int capacidade = CAPACIDADE;
    int quantidade;
    int vetor[CAPACIDADE];
    int valor;
    int posicao;
    int resultado;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &quantidade);

    for (int cont = 0; cont < quantidade; cont++){
        printf("Digite o elemento %d: ", cont + 1);
        scanf("%d", &vetor[cont]);
    }

    printf("\n");

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &valor);

    resultado = buscar(vetor, quantidade, valor);

    printf("Posicao do valor: %d\n", resultado);

    printf("\n");

    printf("Digite o valor que deseja inserir: ");
    scanf("%d", &valor);

    printf("Digite a posicao onde deseja inserir: ");
    scanf("%d", &posicao);

    inserir(vetor, &quantidade, capacidade, valor, posicao);

    printf("Vetor apos a insercao: ");
    imprimir(vetor, quantidade);

    printf("\n");

    printf("Digite a posicao que deseja remover: ");
    scanf("%d", &posicao);

    remover(vetor, &quantidade, posicao);

    printf("Vetor apos a remocao: ");
    imprimir(vetor, quantidade);

    return 0;
}
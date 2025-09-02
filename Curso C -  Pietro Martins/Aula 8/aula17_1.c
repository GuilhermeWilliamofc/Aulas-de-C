#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define tamanho 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    tipo_pessoa lista[tamanho]; // vai criar uma lista com 3 structs do tipo pessoa
    int cont;

    for(cont = 0; cont < tamanho; cont++){
        printf("-------------------------------\n");
        printf("Insira os dados da %dº Pessoa:\n", cont+1);
        printf("Nome: ");
        fgets(lista[cont].nome, 50, stdin); // scanf("%50[^\n]s", &lista[cont].nome);
        fflush(stdin);

        printf("Idade: ");
        scanf("%d", &lista[cont].idade); // lista[posição_da_lista].dado
        fflush(stdin);

        printf("Peso: ");
        scanf("%f", &lista[cont].peso);
        fflush(stdin);
    }
    system("cls"); /* serve para limpar a tela do console no Windows. Quando ele é executado, todo o texto exibido anteriormente no terminal é apagado */

    printf("------------------------------------------\n");
    puts("Seus dados:");
    for (cont = 0; cont < tamanho; cont++){
        printf("--------------- %dº Pessoa ----------------\n", cont + 1);
        printf("Nome: %s", lista[cont].nome);
        printf("Idade: %d Anos\n", lista[cont].idade);
        printf("Peso: %.2fKg\n", lista[cont].peso);
    }

    printf("------------------------------------------\n");
    system("pause");
    return 0;
}
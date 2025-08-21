#include <stdio.h>
#include <stdlib.h>

int main(){
    // entrada de dados
    int ano;
    printf("\nDigite o ano atual: ");
    scanf("%d", &ano);

    // mostrando a mensagem
    printf("\nSeja bem-vindo a UFG neste ano de %d!\n", ano);

    // pausando o programa
    system("pause");

    // explicitando retorno
    return 0;
}

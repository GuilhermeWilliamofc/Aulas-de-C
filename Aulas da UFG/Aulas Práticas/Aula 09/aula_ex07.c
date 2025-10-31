/* Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e
retorna essa idade expressa em dias (desconsidere anos bissextos). */

#include <stdio.h>
#include <stdlib.h>

int idade_em_dias(int anos, int meses, int dias){
    return ((anos * 365) + (meses * 30) + dias); // desconsidera meses com 31 dias ou 28 e anos bissextos
}

int main(){
    int anos, meses, dias, resultados = 0;
    printf("Digite sua idade em:\nAnos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    resultados = idade_em_dias(anos, meses, dias);

    printf("Sua idade em dias eh igual a: %d", resultados);

    printf("\n");
    system("pause");
    return 0;
}
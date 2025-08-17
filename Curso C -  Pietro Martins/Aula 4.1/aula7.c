#include <stdio.h>
#include <stdlib.h>

int main(){
    float media;

    printf("Insira sua media: ");
    scanf("%f", &media);

    printf("Sua media: %.2f\n", media);

    if(media >= 6.0){
        printf("Situacao: Aprovado(a)!\n");
    }
    else{
        printf("Situacao: Reprovado(a)!\n");
    }

    system("pause");
    return 0;
}
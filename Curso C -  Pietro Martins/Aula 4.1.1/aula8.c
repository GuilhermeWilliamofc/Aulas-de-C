#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float media;

    printf("Insira sua média: ");
    scanf("%f", &media);

    printf("Sua média: %.2f\n", media);
    printf("Situação: ");

    if(media >= 7.0){ // a estrutura if não tem ";" no final pois ele define um novo bloco de comandos (como o int main())
        printf("Aprovado(a)!\n");
    }
    else if (media >= 4.0 && media < 7.0){ // C tem os mesmos operadores lógicos do javascript
        printf("Recuperação! Tem direito a exame!\n");
    }
    
    else{
        printf("Reprovado(a)!\n");
    }

    system("pause");
    return 0;
}
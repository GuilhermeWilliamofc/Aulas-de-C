#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float prova1, prova2, prova3, soma_das_notas, soma_dos_pesos;

    printf("Digite a primeira nota: ");
    scanf("%f", &prova1);

    printf("Digite a segunda nota: ");
    scanf("%f", &prova2);

    printf("Digite a terceira nota: ");
    scanf("%f", &prova3);

    soma_das_notas = prova1 + prova2 + prova3;
    soma_dos_pesos = 0.10 + 0.30 + 0.60;

    printf("a média ponderada das três provas é igual a %.2f\n", soma_das_notas/soma_dos_pesos);
    
    system("pause");
    return 0;
}
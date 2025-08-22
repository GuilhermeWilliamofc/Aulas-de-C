#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano = 2025;
    int ano_nasc;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nasc);

    printf("Sua idade é: %d\n", ano - ano_nasc);
    
    system("pause");
    return 0;
}
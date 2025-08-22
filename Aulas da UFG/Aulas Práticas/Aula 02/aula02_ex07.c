#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float pi = 3.14;
    float raio_base, altura, volume;

    printf("Informe o raio da base do cilindro: ");
    scanf("%f", &raio_base);

    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);

    volume = pi * (raio_base*raio_base) * altura;

    printf("O volume de um cilindro com raio %.2f e altura %.2f é igual a %.2f\n", raio_base, altura, volume);
    
    system("pause");
    return 0;
}
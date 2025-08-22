#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float pi = 3.14;
    float altura, raio;

    printf("Informe a altura do cone: ");
    scanf("%f", &altura);

    printf("Informe o raio do cone: ");
    scanf("%f", &raio);

    printf("O volume do seu cone de altura = %.2f e raio = %.2f é igual a %.2fcm3\n", altura, raio, (pi*(raio*raio)*altura)/3);
    
    system("pause");
    return 0;
}
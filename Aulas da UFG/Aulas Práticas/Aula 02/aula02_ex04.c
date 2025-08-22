#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int horas;
    float valor, imposto;

    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &valor);

    printf("Informe as horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Informe o valor do imposto: ");
    scanf("%f", &imposto);

    printf("Baseado nas informações apresentadas seu salário é igual a R$%.2f\n", (valor * horas) - imposto);
    
    system("pause");
    return 0;
}
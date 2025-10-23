/* Escreva uma função que calcule e retorne a distância entre dois
pontos (??1, ??1) e (??2 e ??2). Todos os números e valores de retorno
devem ser do tipo float. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia_de_dois_pontos(float x1, float y1, float x2, float y2){
    float distancia;
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distancia;
}

int main(){
    float x1, y1, x2, y2;
    float resultado;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);

    printf("Digite o valor de y1: ");
    scanf("%f", &y1);

    printf("Digite o valor de x2: ");
    scanf("%f", &x2);

    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

    resultado = distancia_de_dois_pontos(x1, y1, x2, y2);

    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh igual a: %.2f\n", x1, y1, x2, y2, resultado);

    system("pause");
    return 0;
}
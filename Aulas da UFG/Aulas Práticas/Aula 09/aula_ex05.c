/* Faça uma função que recebe por parâmetro o raio de uma esfera e
calcula o seu volume (v = 4/3.P .R3). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volume_da_esfera(float raio_da_esfera){
    const float pi = 3.14159f;
    return ((4.0f/3.0f) * pi * powf(raio_da_esfera, 3.0f));
}

int main(){
    float raio_da_esfera, resultado;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio_da_esfera);

    resultado = volume_da_esfera(raio_da_esfera);

    printf("O volume da esfera de raio %.2f eh igual a %.2f cm3", raio_da_esfera, resultado);

    printf("\n");
    system("pause");
    return 0;
}
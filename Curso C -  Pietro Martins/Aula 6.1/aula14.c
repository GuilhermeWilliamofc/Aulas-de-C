#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5]; // aqui tem um array, é uma espécie de lista em python, mas sem todos os metódos disponiveis (append, remove...), o tamanho do array é fixo e o tipo deve ser o mesmo para todos os valores, nesse caso, array de tamanho 5 não significa que os vetores vão de 1 a 5, eles vão na vdd de 0 a 4

    float media;

    numeros[0] = 50;
    numeros[1] = 40;
    numeros[2] = 30;
    numeros[3] = 20;
    numeros[4] = 10;

    media = (numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4]) / 5;

    printf("Resultado: %.2f\n", media);

    system("pause");
    return 0;
}
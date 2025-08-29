/* 
leia e número e faça: 
* caso seja positivo, calcule e mostre o valor da raiz quadrada desse número 
* caso seja negativo, mostre o valor do número digitado ao quadrado
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0){
        printf("O valor da raiz quadrada de %d eh %.2f\n", num, sqrt(num));
    }
    else{
        printf("O valor de %d ao quadrado eh %.2f\n", num, pow(num, 2)); // pow(base, expoente)
    }

    system("pause");
    return 0;
}
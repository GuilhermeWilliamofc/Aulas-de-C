/* receba um numero e retorne se ele é multiplo de 2, 3 ou de 5 */

#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O numero %d eh multiplo de ", num);

    if (num % 2 == 0){
        printf("2\n");
    }
    else if (num % 3 == 0){
        printf("3\n");
    }
    else if (num % 5 == 0){
        printf("5\n");
    }

    system("pause");
    return 0;
}
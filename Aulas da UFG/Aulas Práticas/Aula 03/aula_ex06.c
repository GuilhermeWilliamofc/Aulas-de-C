/* 
* determine se um determinado ano é bissexto, sendo que um ano bissexto se for divisivel 
por 400 ou se for divisivel por 4 e não for divisivel por 100. 

* por exemplo: 1988, 1992, 1996

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano;

    printf("Digite um ano valido: ");
    scanf("%d", &ano);

    if(ano % 400 == 0 && ano % 100 != 0 || ano % 4 == 0 && ano % 100 != 0){
        printf("O ano %d eh bissexto\n", ano);
    }
    else{
        printf("O ano %d nao eh bissexto\n", ano);
    }

    system("pause");
    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int main(){
    int cont;

    for(cont = 0; cont <= 10; cont++){
        if(cont == 5){
            continue; // O continue funciona parecido com o break, mas em vez de parar o loop inteiro, ele só 'pula' o que vem depois dele naquela volta. Ou seja, o loop continua rodando normalmente, só que aquela iteração é ignorada. Nesse caso, quando chegar no número 5, o programa vai pular a impressão dele e seguir para o próximo número."
        }

        printf("%d\n", cont);
    }

    return 0;
}
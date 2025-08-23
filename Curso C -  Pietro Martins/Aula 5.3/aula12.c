#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont; // no "for" não precisa declarar o conteúdo da variável aqui, você declara lá no "for"

    for(cont = 0; cont <= 10; cont++){ // a ordem é valor inicial, condição e incremento/decremento
        printf("%d\n", cont);
    }

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont = 0;

    do{
        printf("%d\n", cont);
        cont++;
    } while (cont <= 10); // diferente do "while" o "do while" faz a verificação depois da execução, então pelo menos 1 vez o bloco "do" vai ser executado

    system("pause");
    return 0;
}
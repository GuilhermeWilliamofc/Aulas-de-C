#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // tem a função sleep() diferente do python o sleep tem como parâmetro milissegundos, só funciona em sistemas operacionais windows

int main(){
    int num = 0; // é preciso declarar o valor da variável, caso contrário vai dar problema no while

    while (num <= 10){ // tem como fazer um loop infinito usando "while(1)" ou "while(true)" e dá pra quebrar usando "break;"
        printf("%d\n", num);
        Sleep(1000); // equivalente a 1seg
        num++; // "++" é semelhante a "+=1"
    }
    
    system("pause");
    return 0;
}
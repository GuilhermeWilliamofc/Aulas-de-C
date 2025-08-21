#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int soma = 28 + 48;
    printf("%d\n", soma);
    system("pause");
    return 0;
}
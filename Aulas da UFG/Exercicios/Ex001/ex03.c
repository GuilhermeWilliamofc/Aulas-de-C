#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int soma = 28 + 48;
    printf("%d", soma);
    return 0;
}
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float media = (8 + 9 + 7) / 3;
    printf("%.2f\n", media);
    system("pause");
    return 0;
}
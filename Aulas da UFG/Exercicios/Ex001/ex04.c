#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float media = (8 + 9 + 7) / 3;
    printf("%.2f", media);
    return 0;
}
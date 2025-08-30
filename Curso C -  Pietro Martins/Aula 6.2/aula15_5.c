#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 50

int main(){
    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto: ");
    gets(senha_usr);
    fflush(stdin);

    ok = strcmp(hardText, senha_usr); // serve para comparar se duas strings são iguais, retorna 0 caso seja verdade, cuidado caso use fgets() pois "quando você digita /exit e aperta Enter, a variável senha_usr fica assim: "/exit\n"" resultando que o strcmp sempre vai ser falso

    if (ok == 0){
        printf("Os textos são iguais.\n");
    }
    else{
        printf("Os textos são diferentes.\n");
    }

    system("pause");
    return 0;
}
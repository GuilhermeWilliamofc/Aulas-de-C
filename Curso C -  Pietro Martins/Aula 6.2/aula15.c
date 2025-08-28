#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char string[10]; // você dá o nome e digita o tamanho da string, lembrando que começa do 0 e termina no 9 (nesse exemplo...), o último digito serve para o \0, que serve para declarar que a string acabou

    printf("Digite algo (scanf convencional): ");
    scanf("%s", string); // %s para declarar o tipo string, não precisa de "&" para string
    fflush(stdin); // É recomendável chamar essa função após um scanf(). Trata-se de uma boa prática para evitar problemas quando há múltiplos scanf() consecutivos. Sem isso, o próximo scanf() pode ser ignorado ou ler dados residuais da entrada, que são valores indesejados provenientes da memória.

    printf("Resultado: %s\n", string);

    printf("Digite algo (scanf aprimorado): ");
    scanf("%9[^\n]s", string); // a estrutura aqui é %(tamanho_da_string - 1)[^\n]s, isso serve para o scanf aceitar espaços, caso contrário o programa vai ignorar tudo que tiver depois do espaço, obs: o \0 é adicionado automaticamente
    fflush(stdin);

    printf("Resultado: %s\n", string);

    system("pause");
    return 0;
}
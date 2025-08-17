#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("-----------------------------------------\n");
    printf("Oi, tudo bem? Tenho 18 anos e programo.\n");
    printf("-----------------------------------------\n");

    /* Todos os "%" são especificadores de formato/formatação */

    printf("Valor inteiro: %d.\n", 10); // "%d" ou "%i" - Números inteiros em base decimal
    printf("Valor real: %f.\n", 3.14159265); // "%f" - Números em ponto flutuante (com casas decimais) vulgo float
    printf("Valor real com apenas duas casas: %.2f\n", 3.14159265); // "%.(num)" - especifica quantos digitos serão impressos após a vírgula (semelhante ao :.(num)f do python)
    printf("-----------------------------------------\n");
    printf("Dado de texto: %c.\n", 'a'); // "%c" - Caracteres alfanuméricos (texto), tem suporte somente para 1 caractere, nesse caso é usado aspas simples, mas na linguagem C aspas simples somente serão usadas para dados de 1 caractere
    printf("Dado de texto: %s.\n", "testando..."); // "%s" - Sequência de caracteres alfanuméricos (texto), tem suporte para palavras e frases completas
    printf("-----------------------------------------\n");

    system("pause");
    return 0;
}
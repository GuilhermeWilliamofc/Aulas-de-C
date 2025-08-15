#include <stdio.h> /* a biblioteca stdio.h serve para entrada e saída de dados */
#include <locale.h> // para arrumar o idioma e não ter caracteres "bugados"
#include <stdlib.h> // a lib para a função system()

int main() /* precisa criar uma função main, aparentemente precisa explicitar o tipo primitivo que vai ser retornado */
{ /* pode abrir chaves tanto quebrando linha quanto do lado dos parênteses */
    setlocale(LC_ALL,"portuguese"); /* o idioma */
    printf("\nOlá, Mundo!\n");
    /* aspas simples ('') no printf dá erro */
    /* "f" significa formatado, acho que deve ser semelhante as f-strings */
    /* "/n" significa break row */

    system("pause"); // Espera você apertar uma tecla, para caso abrir um exe e ele não abrir e fechar rápidamente, vai aparecer uma mensagem para apertar uma tecla para continuar

    return 0; /* precisa ser explicitado o que vai ser retornado */
}
#include <stdio.h> /* a biblioteca stdio.h serve para entrada e sa�da de dados */
#include <locale.h> // para arrumar o idioma e n�o ter caracteres "bugados"
#include <stdlib.h> // a lib para a fun��o system()

int main() /* precisa criar uma fun��o main, aparentemente precisa explicitar o tipo primitivo que vai ser retornado */
{ /* pode abrir chaves tanto quebrando linha quanto do lado dos par�nteses */
    setlocale(LC_ALL,"portuguese"); /* o idioma */
    printf("\nOl�, Mundo!\n");
    /* aspas simples ('') no printf d� erro */
    /* "f" significa formatado, acho que deve ser semelhante as f-strings */
    /* "/n" significa break row */

    system("pause"); // Espera voc� apertar uma tecla, para caso abrir um exe e ele n�o abrir e fechar r�pidamente, vai aparecer uma mensagem para apertar uma tecla para continuar

    return 0; /* precisa ser explicitado o que vai ser retornado */
}
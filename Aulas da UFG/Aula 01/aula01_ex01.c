#include <locale.h> // para arrumar o idioma
#include <stdio.h>
/* a biblioteca stdio.h serve para entrada e sa�da de dados */

int main() /* precisa criar uma fun��o main, aparentemente precisa explicitar o tipo primitivo que vai ser retornado */
{ /* pode abrir chaves tanto quebrando linha quanto do lado dos par�nteses */
    setlocale(LC_ALL,"portuguese");
    printf("\nSejam bem-vindos � Universidade Federal de Goi�s!\n");
    printf("Iniciaremos a nossa disciplina Introdu��o � Programa��o");
    /* aspas simples ('') no printf d� erro */
    /* "f" significa formatado, acho que deve ser semelhante as f-strings */
    /* "/n" significa break row */

    return 0; /* precisa ser explicitado o que vai ser retornado */
}
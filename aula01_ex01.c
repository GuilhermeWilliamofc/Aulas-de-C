#include <stdio.h>
/* a biblioteca stdio.h serve para entrada e saída de dados */

int main() /* precisa criar uma função main, aparentemente precisa explicitar o tipo primitivo que vai ser retornado */
{ /* pode abrir chaves tanto quebrando linha quanto do lado dos parênteses */
    printf("\nSejam bem-vindos à Universidade Federal de Goiás!\n");
    printf("Iniciaremos a nossa disciplina Introdução à Programação");
    /* aspas simples ('') no printf dá erro */
    /* "f" significa formatado, acho que deve ser semelhante as f-strings */
    /* "/n" significa break row */

    return 0; /* precisa ser explicitado o que vai ser retornado */
}
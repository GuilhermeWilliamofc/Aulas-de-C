#include <stdio.h> // Necessária para funções como printf()
#include <time.h> // Biblioteca com comandos de data e hora, Importa a biblioteca que contém funções para manipular data e hora no C, como time() e localtime()

int main(){ // O ponto de entrada do programa. Toda execução em C começa por aqui.
    time_t segundos = time(NULL); /* time_t acho que seria uma classe da lib */
    struct tm* tempo_atual=localtime(&segundos);
    /* struct tm: estrutura de dados que armazena valores referentes a data e hora, assim, contendo nove (9) variáveis declaradas dentro deste struct para tal. */

    printf("\nSeja bem-vindo a UFG neste ano de %d", (tempo_atual->tm_year + 1900)); /* %d significa inteiro decimal, parece que tem que fazer um ponteiro para o ano */
    printf("!"); /* uma pequena concatenação */
    return 0;
}
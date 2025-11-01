/* Faça uma função que recebe por parâmetro o tempo de duração de uma
fábrica expressa em segundos e retorna também por parâmetro esse tempo
em horas, minutos e segundos. */

#include <stdio.h>
#include <stdlib.h>

void tempo_em_hms(int segundosdigitado, int *horas, int *minutos, int *segundos){
    if (segundosdigitado < 0) segundosdigitado = 0;

    *horas = segundosdigitado / 3600;
    *minutos = (segundosdigitado % 3600) / 60;
    *segundos = segundosdigitado % 60;
}

int main(){
    int segundos;
    int h, m, s;

    printf("Digite o tempo de duracao em segundos: ");
    scanf("%d", &segundos);

    tempo_em_hms(segundos, &h, &m, &s);

    printf("O valor de %d segundos em horas, minutos e segundos eh igual a:\n", segundos);
    printf("%d Horas, %d Minutos e %d Segundos\n", h, m, s);

    system("pause");
    return 0;
}
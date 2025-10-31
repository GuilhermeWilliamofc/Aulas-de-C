/* Faça uma função que recebe por parâmetro o tempo de duração de uma
fábrica expressa em segundos e retorna também por parâmetro esse tempo
em horas, minutos e segundos. */

#include <stdio.h>
#include <stdlib.h>

void tempo_em_hms(int segundosdigitado){
    int horas, minutos, segundos;

    horas = segundosdigitado / 3600;

    if (segundosdigitado % 3600 != 0){
        minutos = (segundosdigitado % 3600) / 60;
    }
    else{
        minutos = 0;
    }

    if (segundosdigitado % 60 != 0){
        segundos = segundosdigitado % 60;
    }
    else{
        segundos = 0;
    }

    printf("O valor de %d segundos em horas, minutos e segundos eh igual a:\n", segundosdigitado);
    printf("%d Horas, %d Minutos e %d Segundos", horas, minutos, segundos);
}

int main(){
    int segundos;
    printf("Digite o tempo de duracao em segundos: ");
    scanf("%d", &segundos);

    tempo_em_hms(segundos);

    printf("\n");
    system("pause");
    return 0;
}
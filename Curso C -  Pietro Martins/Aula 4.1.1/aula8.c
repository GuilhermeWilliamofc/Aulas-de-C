#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
Tem como colocar cores no terminal como em python:
    \033[ ? início do código de escape ANSI.
    1;31m ? estilo + cor (1 = negrito, 31 = vermelho).
    0m ? reset (volta ao normal).
Exemplos:
    printf("\033[1;31mTexto em vermelho\033[0m\n");
    printf("\033[1;32mTexto em verde\033[0m\n");
    printf("\033[1;34mTexto em azul\033[0m\n");
Lista de cores:
    30 = preto
    31 = vermelho
    32 = verde
    33 = amarelo
    34 = azul
    35 = magenta
    36 = ciano
    37 = branco (cinza claro)
Lista de estilos:
    0 ? Reset (volta ao normal)
    1 ? Negrito ou ?bright? (depende do terminal)
    2 ? Escurecido / fraco (nem sempre suportado)
    3 ? Itálico (raramente suportado em Windows)
    4 ? Sublinhado
    5 ? Pisca lento (nem todo terminal suporta)
    6 ? Pisca rápido (quase nunca suportado)
    7 ? Inversão (troca cor de fundo e texto)
    8 ? Oculto (invisível, útil para senhas)
    9 ? Tachado (strikethrough)
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("-----------------------------------------\n");
    printf("\033[1;35mVerificador de Médias\033[0m\n");
    printf("-----------------------------------------\n");
    float media;

    printf("\033[0;36mInsira sua média: \033[0m");
    scanf("%f", &media);

    printf("\033[0;36mSua média:\033[1;0m %.2f\n", media);
    printf("\033[0;36mSituação: \033[0m");

    if(media >= 7.0){ // a estrutura if não tem ";" no final pois ele define um novo bloco de comandos (como o int main())
        printf("\033[1;32mAprovado(a)!\033[0m\n");
    }
    else if (media >= 4.0 && media < 7.0){ // C tem os mesmos operadores lógicos do javascript
        printf("\033[1;33mRecuperação! Tem direito a exame!\033[0m\n");
    }
    
    else{
        printf("\033[1;31mReprovado(a)!\033[0m\n");
    }

    system("pause");
    return 0;
}
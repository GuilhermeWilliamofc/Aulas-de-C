/* 
* ler o ano de nascimento da pessoa e o ano atual, retorne a idade da pessoa 
* se a pessoa for maior de idade imprima a mensagem: "Você pode ir no Inter"
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano_nasc, ano_atual;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nasc);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    if (ano_atual - ano_nasc >= 18){
        printf("Com %d anos, Voce pode ir no Inter\n", ano_atual - ano_nasc);
    }

    system("pause");
    return 0;
}
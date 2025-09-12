/* 
4. Dados um número inteiro 𝑛 > 0, e uma sequência com 𝑛 números inteiros,
determinar o maior inteiro da sequência. Por exemplo, para a sequência
                            6, −2, 7, 0, 8, 4
o seu programa deve escrever o número 8 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int maior, limite, num, cont = 0;

    printf("Digite quantos valores voce quer digitar: ");
    scanf("%d", &limite);
    
    for (cont = 0; cont < limite; cont ++){
        printf("Digite o %d valor: ", cont + 1);
        scanf("%d", &num);

        if (cont == 0){
            maior = num;
        }

        if (num > maior){
            maior = num;
        }
    }

    printf("Dos %d valores digitados, o numero %d foi o maior\n", limite, maior);

    system("pause");
    return 0;
}
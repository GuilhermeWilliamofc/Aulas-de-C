/* Faça uma função que recebe a idade de um nadador por parâmetro e retorna ,
também por parâmetro, a categoria desse nadador de acordo com a tabela: */

#include <stdio.h>
#include <stdlib.h>

int categoria_nadador(int idade){
    if (idade > 4 && idade < 8){
        return 0;
    }
    else if (idade > 7 && idade < 11){
        return 1;
    }
    else if (idade > 10 && idade < 14){
        return 2;
    }
    else if (idade > 13 && idade < 18){
        return 3;
    }
    else if (idade > 17){
        return 4;
    }
    else{
        return 5;
    }
}

int main(){
    int idade, resultado;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    resultado = categoria_nadador(idade);

    printf("Com a idade de %d anos, a categoria do nadador eh: ", idade);
    switch (resultado)
    {
    case 0:
        printf("Infantil A");
        break;
    case 1:
        printf("Infantil B");
        break;
    case 2:
        printf("Juvenil A");
        break;
    case 3:
        printf("Juvenil B");
        break;
    case 4:
        printf("Adulto");
        break;
    case 5:
        printf("Idade Invalida");
        break;
    default:
        break;
    }

    printf("\n");
    system("pause");
    return 0;
}
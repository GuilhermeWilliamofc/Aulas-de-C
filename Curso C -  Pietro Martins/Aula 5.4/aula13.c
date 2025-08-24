#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont;

    for(cont = 0; cont <= 10; cont++){
        printf("%d\n", cont);

        if(cont == 5){
            break;
        }
    }

    system("pause");
    return 0;
}
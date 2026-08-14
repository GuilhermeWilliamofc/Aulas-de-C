#include "ex005_lib.h"

int maior(int num1, int num2){
    if (num1 > num2){
        return num1;
    }

    return num2;
}

int menor(int num1, int num2){
    if (num1 < num2){
        return num1;
    }

    return num2;
}

float media(int num1, int num2, int num3){
    return (num1 + num2 + num3) / 3;
}
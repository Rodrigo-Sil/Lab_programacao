// Faça um programa em C que imprima a média aritmética entre os números 5, 8, 12:


#include <stdio.h>

int main(){
    int num1 = 5;
    int num2 = 8;
    int num3 = 12;
    float media = (num1  + num2 + num3) / 3.0;

    printf("%.2f\n", media);

    return 0;

}
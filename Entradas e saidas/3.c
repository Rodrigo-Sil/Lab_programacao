// Faça um programa em C que leia dois números reais e os imprima:


#include <stdio.h>

int main(){
    float numb1, numb2;

    printf("Digite um numero real: ");
    scanf("%f", &numb1);
    printf("Digite um numero real: ");
    scanf("%f", &numb2);

    printf("Os números digitados foram %.2f e %.2f", numb1, numb2);

    return 0;
}
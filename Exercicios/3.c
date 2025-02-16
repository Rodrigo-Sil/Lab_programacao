//Escreva um programa que leia um valor x e retorne o resultado de sua aplicação na função f(x) = 3x²- 6x + 5:


#include <stdio.h>


int main(){

    float x, calculo;

    printf("Digite um valor: ");
    scanf("%f", &x);

    calculo = 3 * (x * x) - (6 * x) + 5;

    printf("O resultado é %.2f", calculo);

    return 0;
}

// Escreva um programa que calcule a média aritmética de 3 valores inteiros e imprima o resultado:


#include <stdio.h>

int main(){

    int num1, num2, num3;
    float media;

    printf("Digite o primeironumero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("A média aritmética é: %.2f\n", media);
     

    return 0;
}

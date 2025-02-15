// Escreva um programa que peça ao usuário para digitar um número inteiro e verifique se o número é positivo, negativo ou zero:


#include <stdio.h>

int main(){


    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero é positivo: %d\n", numero > 0);
    printf("O numero é negativo: %d\n", numero < 0);
    printf("O numero é zero: %d\n", numero == 0);


    return 0;
}

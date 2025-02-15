// Escreva um programa que peça ao usuário para digitar dois números inteiros e imprima se o primeiro número é maior que o segundo número:



#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("O primeirdo numero é maior que o segundo: %d\n", num1 > num2);

    return 0;

}
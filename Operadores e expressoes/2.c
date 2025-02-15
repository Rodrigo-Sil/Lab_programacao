// Escreva um programa que peça ao usuário para digitar um número inteiro e imprima se o número é par ou ímpar:


#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numeor é par: %d\n", numero % 2 == 0);
    printf("O numero é ímapar: %d\n", numero % 2 != 0);

    
    return 0;
}

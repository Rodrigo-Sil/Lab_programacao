// Faça um programa em C que leia e imprima um número inteiro:


#include <stdio.h>


int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("O numero digitado foi %d\n", numero);

    return 0; 
}
// Escreva um programa que calcule e exiba a soma dos quadrados dos 100 primeiros 
// números inteiros

#include <stdio.h>

int main(){
    int i, soma = 0;

    for(i = 0; i <= 100; i++){
        soma += i * i;
    }

    printf("A soma dos quadrados dos três primeiros numeros inteiros é: %d\n", soma);

    return 0;
}
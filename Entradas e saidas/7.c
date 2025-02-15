// Escreva um programa que recebe 2 valores a e b, e troque esses valores, de modo que, no fim da execução, b possua o valor de a e vice-versa:


#include <stdio.h>

int main(){
    float a, b, aux;

    printf("Digite um numero: ");
    scanf("%f", &a);
    printf(" Digite outro numero: ");
    scanf("%f", &b);

    printf("Valor inicial de a: %.2f\nValor inicial de b: %.2f\n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("Valor final de a: %.2f\nValor final de b: %.2f\n", a, b);

    return 0;
}
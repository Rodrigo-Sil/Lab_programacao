// Escreva um programa que recebe os valores de altura e largura para calcula a área de um retângulo:

#include <stdio.h>

int main(){
    float base, altura, area;

    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A area do retangulo é: %.2f", area);

    return 0;

}
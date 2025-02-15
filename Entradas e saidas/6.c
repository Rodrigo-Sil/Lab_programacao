//  Escreva um programa em C que declare e inicialize as seguintes variáveis: idade, altura, letra:


#include <stdio.h>

int main(){
    int idade;
    float altura;
    char letra[1];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite a primeira letra do seu nome: ");
    scanf("%s", letra);

    printf("A primeira letra do seu nome é: %s, sua idade é: %d anos, sua altura é: %.2f", letra, idade, altura);

    return 0;
}
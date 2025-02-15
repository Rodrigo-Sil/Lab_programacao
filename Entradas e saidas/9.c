// Faça um programa em C que leia dois números reais e calcule as quatro operações básicas entre estes dois números, adição, subtração, multiplicação e divisão:
// Ao final, o programa deve imprimir os resultados dos cálculos:

#include <stdio.h>

int main(){
    float num1, num2, adicao, subtracao, multiplicacao, divisao;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite um numero: ");
    scanf("%f", &num2);

    adicao = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("A soma do dois numeros é igual a: %.2f\nA diferença entre os dois numero é igual a: %.2f\n", adicao, subtracao);
    printf("O produto dos dois numeros é igual a: %.2f\nA divisao de %.2f por %.2f reulta em %.2f", multiplicacao, num1, num2, divisao);

    return 0;

}
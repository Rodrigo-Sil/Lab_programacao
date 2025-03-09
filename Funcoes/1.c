// Escreva um programa que solicite dois números ao usuário e apresente na tela o resultado da soma 
// do módulo desses números. Esse programa deve possuir uma função para calcular o módulo


#include <stdio.h>

float modulo(float num){
    float mod;
    if (num < 0){
        mod = num * (-1);
        return mod;
    }else{
        return num;
    }
}


int main()
{
    float num1, num2, soma;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = modulo(num1) + modulo(num2);
    printf("A soma dos modulos é %.2f\n", soma);

    return 0;
}

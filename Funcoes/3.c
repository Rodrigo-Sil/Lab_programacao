// Escreva um programa que solicite dois números inteiros ao usuário e que apresente na tela como 
// resultado o dobro desses números que devem ser somados e o resultado da soma devem ser 
// triplicados. Esse programa deve possuir uma função para dobrar o valor de um número, outra para 
// somar dois números e uma terceira para triplicar um número

#include <stdio.h>

int dobroNumero(int num);
int somarNumeros(int x, int y);
int triplicarValor(int soma);


int main()
{
    int num1, num2, dobro1, dobro2, soma, triplo;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    dobro1 = dobroNumero(num1);
    dobro2 = dobroNumero(num2);

    soma = somarNumeros(dobro1, dobro2);

    triplo = triplicarValor(soma);

    printf("O resultado final é %d\n", triplo);


    return 0;
}

int dobroNumero(int num){
    num = 2 * num;
    return num;
}

int somarNumeros(int x, int y){
    int resultado = x + y;
    return resultado;
}

int triplicarValor(int soma){
    int resultado = 3 * soma;
    return resultado;
}
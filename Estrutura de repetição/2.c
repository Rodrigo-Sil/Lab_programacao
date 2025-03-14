/// Dado um número, crie um programa que escreva todos os números ímpares menores 
// e/ou iguais a esse número e maiores ou igual a 1.
// Considere que o número informado é positivo

#include <stdio.h>

int main()
{
    int i, num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
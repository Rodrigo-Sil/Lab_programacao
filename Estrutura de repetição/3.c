// Faça um programa em C que receba um número n, passado pelo usuário, e retorne
// o enésimo termo da sequência: 1 3 7 15 31 63 127...

#include <stdio.h>

int main()
{
    int numero, ac;
    unsigned long long sequencia;

    sequencia = 1;
    ac = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (ac < numero)
    {
        sequencia = (2 * sequencia) + 1;
        ac++;
    }

    printf("O %dº valor da sequencia é %llu.\n", numero, sequencia);
    

    return 0;
}


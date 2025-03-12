// Dada uma sequência de números inteiros diferente de zero, terminada por um zero,
// imprima o quadrado de cada número da sequência


#include <stdio.h>


int main()
{
	int numero, quadrado;

	do
	{
		printf("Digite um numero (0 para sair): ");
		scanf("%d", &numero);

		quadrado = numero * numero;

		printf("O quadrado de %d é: %d\n", numero, quadrado);

	} while (numero != 0);
	
	return 0;
}


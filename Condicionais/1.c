//Escreva um programa em C que leia 2 números inteiros e imprima o maior:


#include <stdio.h>

int main(){

	int num1, num2;

	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite outro numero: ");
	scanf("%d", &num2);

	if(num1 > num2){
		printf("O maior é: %d\n", num1);
	}
	else{
		printf("O maior é: %d\n", num2);
	}


	return 0;
}

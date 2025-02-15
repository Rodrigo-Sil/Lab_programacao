//Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz 
//quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
//número é invalido:


#include <stdio.h>
#include <math.h>


int main(){
	
	float num, raiz;

	printf("Digite um numero: ");
	scanf("%f", &num);

	if(num >= 0){
		raiz = num * num;
		printf("A raiz quadrada de %.2f é: %.2f\n", num, raiz);
	}
	else{
		printf("Número inválido\n");
	}


	return 0;

}

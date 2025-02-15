//Escreva um programa que mostre na tela um menu de pratos (pelo menos 5), cada um associado a um número. 
//Prato 1 – Miojo 
//Prato 2 – Ensopado
//Quando um número é selecionado, o programa deve exibir uma breve descrição do prato. Por exemplo, ao digitar 1, o programa mostra: “Macarrão instantâneo”:


#include <stdio.h>

int main(){
	int opcao;

	printf("Prato 1 - Macarronada	Prato 2 - Feijoada\nPrato 3 - Miojo		Prato 4 - Lasanha\nPrato 5 - Ensopado\n\n");

	printf("Escolha um Prato pela pela sua numeração: ");
	scanf("%d", &opcao);

	switch (opcao){
	case  1:
		printf("Macarrão cozido e servido com molho de tomate e outros ingredientes como carne, queijo e temperos.\n");
		break;
	case 2:
		printf("Combinação de feijão preto e uma variedade de carnes de porco, como linguiça, costelinha, bacon e carne seca.\n");
		break;
	case 3:
		printf("Macarrão instantâneo cozido e temperado com um mix de temperos em pó.\n");
		break;
	case 4:
		printf("Camadas de massa intercaladas com molho de carne, queijo e molho branco.\n");
		break;
	case 5:
		printf("Prato que envolve a cocção lenta de carnes, legumes e temperos em um líquido.\n");
		break;
	default:
		printf("Opção inválida.\n");
		break;
	}

	return 0;

}

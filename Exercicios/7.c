// Escrever um programa que leia o codigo do produto escolhido do cardápio de uma 
// lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. O
// cardápio da lanchonete segue o padrão abaixo:
//                ___________________________________
//               |__Especificação __|_Código_|_Preço_|
//               |__Cachorro_Quente_|__100___|__1.20_|
//               |__Bauru__Simples__|__101___|__1.30_|
//               |_Bauru__com__Ovo__|__102___|__1.50_|
//               |____Hamburguer____|__103___|__1.20_|
//               |__Cheeseburguer___|__104___|__1.70_|
//               |_______Suco_______|__105___|__2.20_|
//               |___Refrigerante___|__106___|__1.00_|


#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int code, quantidade;
    float valor;
    
    
    printf(" ___________________________________\n|__Especificação __|_Código_|_Preço_|\n|__Cachorro_Quente_|__100___|__1.20_|\n|__Bauru__Simples__|__101___|__1.30_|\n|_Bauru__com__Ovo__|__102___|__1.50_|\n|____Hamburguer____|__103___|__1.20_|\n|__Cheeseburguer___|__104___|__1.70_|\n|_______Suco_______|__105___|__2.20_|\n|___Refrigerante___|__106___|__1.00_|\n\n");
    printf("Digite o código do produto: ");

    while (scanf("%d", &code) != 1 || code < 100 || code > 106)
    {
        printf("Código inválido!\nDigite um código válido entre 100 e 106: ");
        while(getchar() != '\n');
    }


    printf("Digite a quantidade do produto: ");
    while (scanf("%d", &quantidade) != 1 || quantidade <= 0)
    {
        printf("Quantidade inválida!\nDigite um valor inteiro positivo: ");
        while(getchar() != '\n');
    }

    switch (code)
    {
    case 100:
        valor = 1.20 * quantidade;
        printf("O total a pagar é: %.2f\n", valor);
        break;
    case 101:
        valor = 1.30 * quantidade;
        printf("O total a pagar é: %.2f\n", valor);
        break;
    case 102:
        valor = 1.50 * quantidade;
        printf("O total a pagar é: %.2f\n", valor);
        break;
    case 103:
        valor = 1.20 * quantidade;
        printf("O total a pagar é: %.2f\n", valor);
        break;
    case 104:
        valor = 1.70 * quantidade;
        printf("O total a pagar é: %.2f\n", valor);
        break;
    case 105:
        valor = 2.20 * quantidade;
        printf("O total a pagar é: %.2f\n", valor);
        break;
    case 106:
        valor = 1.00 * quantidade;
        printf("O total a pagar é: %.2f\n", valor);
        break;
    }
    

    





    return 0;
}






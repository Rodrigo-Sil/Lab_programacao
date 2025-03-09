// Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo 
// desconto. Faça um programa que permita entrar com o valor de um produto e o percentual de 
// desconto e imprimir o novo valor com base no percentual informado. Para fazer o cálculo, 
// implemente uma função


#include <stdio.h>

float calcularDesconto(float x, int y);

int main()
{
    float valorProduto, valorFinal;
    int desconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o percentual de desconto: ");
    scanf("%d", &desconto);

    valorFinal = calcularDesconto(valorProduto, desconto);

    printf("O valor do produto com %d porcento de desconto é: %.2f\n", desconto, valorFinal);

    return 0;
}

float calcularDesconto(float x, int y){
    float valorDesconto, resultado;

    valorDesconto = x * (y / 100.0);

    resultado = x - valorDesconto;

    return resultado;

}

// Escreva um programa que leia o valor usado por um cliente no mês de março, o valor que ele 
// pagou dessa fatura, o valor usado por este cliente no mês de abril e retorne o valor da fatura do 
// mês de abril.
// Ex:
// Valor usado no mês de Março: 200
// Valor pago no mês de Março: 20
// Valor usado no mês de Abril: 150
// Fatura do mês de Abril: 150 + 180 + 180*(3,3%) = 335,94

#include <stdio.h>


int main()
{
    float valorUsado, valorPago, valorUsado2, valorFatura,taxaJuros,valorRemanescente;

    printf("Digite o valaor de credito usado no mes anterior: ");
    scanf("%f", &valorUsado);
    printf("Digite o valor pago na fatura anterior: ");
    scanf("%f", &valorPago);
    printf("Digite o valor de credito usado no mes atual: ");
    scanf("%f", &valorUsado2);
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxaJuros);

    valorRemanescente = valorUsado - valorPago;

    valorFatura = valorUsado2 + valorRemanescente + (valorRemanescente * (taxaJuros / 100));

    printf("O valor da fatura atual e: %.2f\n", valorFatura);


    return 0;
}


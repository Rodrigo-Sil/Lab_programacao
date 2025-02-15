// Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso, o 
// programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de 
// atraso. Ao final, o programa deve imprimir o valor da prestação atrasada, o período de 
// atraso, os juros que serão cobrados pelo período de atraso, o valor da prestação acrescido 
// dos juros. Considere juros simples:


#include <stdio.h>

int main(){

    double prestacaoVencida, taxaJuros, juros, prestacaoAtualizada;
    int tempoAtaso;


    printf("Digite o valor da prestação: ");
    scanf("%lf", &prestacaoVencida);
    printf("Digite a taxa de juros simples: ");
    scanf("%lf", &taxaJuros);
    printf("Digite o tempo de atraso: ");
    scanf("%d", &tempoAtaso);


    juros = prestacaoVencida * taxaJuros * tempoAtaso;

    prestacaoAtualizada = prestacaoVencida + juros;


    printf("O total de juros a pagar é de: %.4lf\n", juros);
    printf("O valor atualizado fica de: %.4lf\n", prestacaoAtualizada);

    
    return 0;
}

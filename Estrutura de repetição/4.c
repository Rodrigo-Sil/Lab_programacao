// A conversão de graus Fahrenheit para Celsius é obtida por Tc = (Tf-32) * 5/9, em que Tc
// é a temperatura em graus Celsius e Tf em Fahrenheit. Faça um programa C que calcule
// e que imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de
// 50 a 65, de 1 em 1

#include <stdio.h>

int main() {
    float Tc;
    int Tf = 50;

    printf("Tabela de Conversão de Fahrenheit para Celsius:\n");
    printf("___________________________\n");
    printf("| Fahrenheit |   Celsius  |\n");
    printf("|____________|____________|\n");
    
    while (Tf <= 65) {
        Tc = (Tf - 32) * 5.0 / 9.0;
        printf("|    %3d     |   %6.2f   |\n", Tf, Tc);
        Tf++;
    }
    
    printf("|____________|____________|\n");
    
    return 0;
}




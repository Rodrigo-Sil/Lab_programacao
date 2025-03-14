// Escreva um programa que leia um número inteiro n fornecido pelo usuário e gere um 
// quadrado de n linhas e n colunas que tenha caracteres x nas posições da diagonal principal e 
// caracteres + nas demais.
// Entrada: 4
// Saída:
// x+++
// +x++
// ++x+
// +++x


#include <stdio.h>

int main() {
    
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("x");
            } else {
                printf("+");
            }
        }
        printf("\n");
    }

    return 0;
}

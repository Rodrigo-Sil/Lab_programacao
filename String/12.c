// Faça um programa que leia duas strings e elimine, da segunda string, todas as 
// ocorrências dos caracteres da primeira string. Por fim, seu programa deve imprimir 
// a segunda string.
//
// Exemplo: 
// AMOR 
// MARESIA
// Saida: ESI


#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    char resultado[50];  // Para armazenar a string resultante
    int i, j, k = 0;
    int deveAdicionar;

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    for (i = 0; str2[i] != '\0'; i++) {
        deveAdicionar = 1;  // Assume que o caractere deve ser mantido

        for (j = 0; str1[j] != '\0'; j++) {
            if (str2[i] == str1[j]) {
                deveAdicionar = 0;  // Encontrou o caractere em str1, então deve remover
                break;
            }
        }

        if (deveAdicionar) {
            resultado[k++] = str2[i];
        }
    }

    resultado[k] = '\0';  // Finaliza a string resultado

    printf("Resultado: %s\n", resultado);

    return 0;
}


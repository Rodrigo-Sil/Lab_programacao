// Escreva um programa que leia uma string e um caractere retorna como 
// resultado o número de ocorrências desse caractere na string passada.


#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char letra;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    printf("Digite a letra que procura: ");
    scanf("%c", &letra); 

    char *resultado = strrchr(str, letra);

    if (resultado != NULL) {
        printf("A última ocorrência de '%c' em '%s' está na posição %ld\n", letra, str, resultado - str);
    } else {
        printf("'%c' não foi encontrado em '%s'\n", letra, str);
    }  

    return 0;
}

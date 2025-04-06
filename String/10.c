// Escreva um programa que leia uma string e, em seguida, imprima a inversa da 
// string lida

#include <stdio.h>
#include <string.h>

void inverterString(char str[], int tamanho);

int main()
{
    char str[50]; //inicializa o vetor de caracteres
    int tam;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); //ler input do usuário

    str[strcspn(str, "\n")] = 0; //remover a quebra de linha

    tam = strlen(str); //ler o tamanho da string

    inverterString(str, tam);

    return 0;
}

void inverterString(char str[], int tamanho){
    
    int i;

    printf("A string invertida fica: ");

    for (i = tamanho - 1; i >= 0; i--) { // ler a string de de tras pra frente
        putchar(str[i]); //print caracter onde o indice esta
    }
    
    printf("\n");
    
}


           


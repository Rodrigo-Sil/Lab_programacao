// Receba uma string e verifica se é maiúscula. Em caso afirmativo, retorne 1. Em 
// caso negativo, retorne 0

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verificarIgualdade(char string1[], char string2[]);

int main(){

    int i = 0, j = 0, resultado;
    char string1[50];
    char string2[50];

    printf("Digite uma string: ");
    scanf("%49s", string1);

    while (string1[i] != '\0')
    {
        string2[j++] = toupper(string1[i++]);
    }
    
    resultado = verificarIgualdade(string1, string2);

    if (resultado == 1){
        printf("A string é maiúscula!\n");
    }else{
        printf("A não é maiúscula!\n");
    }
    
    return 0;
}

int verificarIgualdade(char string1[], char string2[]){
    int i = 0;

    while (string1[i] != '\0')
    {
        if (string1[i] != string2[i]){
            return 0;
        }

        i++;
    }
    
    return 1;

}
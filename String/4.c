// Buscar caracter na string

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[] = "Hello, world!";
    char caractere = 'o';

    char *resultado = strrchr(str, caractere);


    if (resultado != NULL) {
        printf("A última ocorrência de '%c' em '%s' está na posição %ld\n", caractere, str, resultado - str);
    } else {
        printf("'%c' não foi encontrado em '%s'\n", caractere, str);
    }   

    return 0;

}

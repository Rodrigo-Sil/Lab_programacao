// Copiar vetor string para outro vetor

#include <stdio.h>
#include <string.h>

int main(){

    char origem[] = "Ola, mundo!";
    char destino[20];

    strcpy(destino, origem);

    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);
    
    return 0;

}
    
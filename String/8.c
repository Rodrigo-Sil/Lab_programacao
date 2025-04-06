// Ler string

#include <stdio.h>
#include <string.h>

int main(){
    char nome1[30] = "Dragon Ball";
    int tam;
    
    tam = strlen(nome1);

    printf("A string tem %d caracteres.\n", tam);

    return 0;

}
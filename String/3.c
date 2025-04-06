// Concatenar strings no final de outra

#include <stdio.h>
#include <string.h>


int main(){
    
    char str1[50] = "Olá, ";
    char str2[] = "mundo!";
    
    strcat(str1, str2);
    printf("String concatenada: %s\n", str1);

    return 0;

}

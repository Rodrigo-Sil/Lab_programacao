// Comparar strings usando o primeiro caracter usando os valores da tabela ASCII

#include <stdio.h>
#include <string.h>


int main(){

    char str1[] = "maçã";
    char str2[] = "banana";

    int resultado = strcmp(str1, str2);

    if (resultado < 0){
        printf("str1 vem antes de str2\n");
    } else if (resultado > 0){
        printf("str2 vem antes de str1\n");
    } else{
        printf("str1 e str2 são iguais\n");
    }

    return 0;

}



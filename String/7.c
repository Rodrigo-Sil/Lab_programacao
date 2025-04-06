// Divide uma string

#include <stdio.h>
#include <string.h>

int main(){

    char str1[80] = "Nome - Matricula - Nota";
    char str2[] = " - ";
    char *t;

    t = strtok(str1, str2);
    
    while(t != NULL){
        printf("%s\n", t);
        t = strtok(NULL, str2);
    }   

    return 0;

}
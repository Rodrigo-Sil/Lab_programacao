// Busca por uma substring

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char subtring[] = "world";

    char *resultado = strstr(str, subtring);

    if (resultado != NULL) {
        printf("A subtring '%s' foi encontrada em '%s' na posição %ld\n", subtring, str, resultado - str);
    } else {
        printf("A subtring '%s' não foi encontrada em '%s'\n", subtring, str);
    }

    return 0;

}

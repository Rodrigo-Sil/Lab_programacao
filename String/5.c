// Busca por um caractere em uma string que pertece a outra string

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Ola, mundo!";
    char conjunto[] = "aeiou";

    char *resultado = strpbrk(str, conjunto);

    if (resultado != NULL) {
        printf("O primeiro caractere encontrado em '%s' que pertence ao conjunto '%s' é '%c'\n", str, conjunto, *resultado);
    } else {
        printf("Nenhum caractere do conjunto foi encontrado em '%s'\n", str);
    }

    return 0;

}

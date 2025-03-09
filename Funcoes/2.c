// Construa um programa em C que leia um caractere (letra) e, por meio de uma função, retorne se 
// este caractere é uma consoante ou uma vogal. Ao final imprima o resultado


#include <stdio.h>
#include <ctype.h>

void verificarLetra(char letra);

int main()
{
    char letra, maiusculo;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    maiusculo = toupper(letra);

    verificarLetra(maiusculo);

    return 0;
}

void verificarLetra(char letra){
    if(letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U'){
        printf("o valor digitado não é vogal!\n");
    }else{
        printf("A valor digitado é uma vogal!\n");
    }
}

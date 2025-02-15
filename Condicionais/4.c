// Dada uma letra, escreva na tela se essa letra é ou não uma vogal 


#include <stdio.h>

int main()
{
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    
    if (letra == 'A'|| letra == 'a'){
        printf("A letra digitada é uma vogal!\n");
    }
    else if(letra == 'E' || letra == 'e'){
        printf("A letra digitada é uma vogal!\n");
    }
    else if(letra == 'I' || letra == 'i'){
        printf("A letra digitada é uma vogal!\n");
    }
    else if(letra == 'O' || letra == 'o'){
        printf("A letra digitada é uma vogal!\n");
    }
    else if(letra == 'U' || letra == 'o'){
        printf("A letra digitada é uma vogal!\n");
    }
    else{
        printf("A letra digitada não é uma vogal!\n");
    }
    
    return 0;
}

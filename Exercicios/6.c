// Uma universidade avalia seus cursos através de diversos fatores e atribui uma nota de 0 a 10 ao 
// final da avaliação. Para fins de divulgação, os cursos são classificados segundo uma classificação 
// descrita na tabela abaixo:
// [8, 10] = A
// [7, 8[ = B
// [6, 7[ = C
// [5, 6[ = D
// [0, 5[ = E
// Escreva um programa que converta a nota de um curso em seu conceito.


#include <stdio.h>
#include <stdbool.h>

int main()
{
    float nota;
    int valid_input;

    printf("Digite a nota do curso: ");

    while ((valid_input = scanf("%f", &nota)) != 1 || nota < 0 || nota > 10.00)
    {
        while(getchar() != '\n'); 
        printf("Nota inválida! Digite uma nota válida (de 0 a 10): ");
    }

    if (nota < 5.00)
    {
        printf("O conceito do curso é: E\n");
    }
    else if (nota >= 5.00 && nota < 6.00)
    {
        printf("O conceito do curso é: D\n");
    }
    else if (nota >= 6.00 && nota < 7.00)
    {
        printf("O conceito do curso é: C\n");
    }
    else if (nota >= 7.00 && nota < 8.00)
    {
        printf("O conceito do curso é: B\n");
    }
    else if (nota >= 8.00 && nota <= 10.00)
    {
        printf("O conceito do curso é: A\n");
    }

    return 0;
}

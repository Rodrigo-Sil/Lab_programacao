// Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
// da semana correspondente a este número. Isto e, domingo se 1, segunda-feira se 2, e
// assim por diante:

#include <stdio.h>


int main(){

    int num;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("O numero corresponde a Domingo, primeiro dia da semana.\n");
        break;
    case 2:
        printf("O numero corresponde a Segunda-feira, segundo dia da semana.\n");
        break;
    case 3:
        printf("O numero corresponde a Terça-feira, terceiro dia da semana.\n");
        break;
    case 4:
        printf("O numero corresponde a Quarta-feira, quarto dia da semana.\n");
        break;
    case 5:
        printf("O numero corresponde a Quinta-feira, quinto dia da semana.\n");
        break;
    case 6:
        printf("O numero corresponde a Sexta-feira, sexto dia da semana.\n");
        break;
    case 7:
        printf("O numero corresponde a Sábado, sétimo dia da semana.\n");
        break;
    default:
        printf("Cédula inválida!\n");
        break;
    }


    return 0;
}
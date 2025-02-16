// Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo das 
// variáveis. Por exemplo, supondo que x = 2 e y = 10 foram os valores lidos, o seu programa deve 
// fazer com que x = 10 e y = 2:

#include <stdio.h>

int main(){

    int x, y, aux;

    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    printf("Valor inicial:\nx = %d, y = %d\n", x, y);
    
    aux = x;
    x = y;
    y = aux;

    printf("Valor final:\nx = %d,  y = %d\n", x, y);


    return 0;
}

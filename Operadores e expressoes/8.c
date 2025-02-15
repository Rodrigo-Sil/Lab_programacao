// Leia o tamanho do lado de um quadrado e imprima como resultado a sua área:


#include <stdio.h>
#include <math.h>

int main(){


    float lado, area;

    printf("Digite o tamaho do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A área do quadrado é: %.2f\n", area);


    return 0;
}

// Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares:


#include <stdio.h>

int main(){

    float real, cotacaoDolar, dolar;
    

    printf("Digite o valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotação do dolar: ");
    scanf("%f", &cotacaoDolar);


    dolar = real / cotacaoDolar;

    printf("A valor em dolar correspondente é: %.2f\n", dolar);

    
    
    return 0;
}

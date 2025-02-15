// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A 
//fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura 
// em Kelvin:


#include <stdio.h>

int main(){

    float grausCelsius, kelvin;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &grausCelsius);


    kelvin = grausCelsius + 273.15;

    printf("%.2f graus Celsius são correspondentes a : %.2f Kelvin\n", grausCelsius, kelvin); 

    
    return 0;
}
// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
// fórmula de conversão é: F = (C∗ 9.0 / 5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a 
// temperatura em Celsius.



#include <stdio.h>

int main(){

    float grausCelsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &grausCelsius);


    fahrenheit = (grausCelsius * 9.0 / 5.0) + 32.0;

    printf("%.2f graus Celsius são correspondentes a : %.2f Fahrenheit\n", grausCelsius, fahrenheit); 

    
    return 0;
}

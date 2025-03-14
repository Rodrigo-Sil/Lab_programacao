// Faça um programa que leia um número inteiro positivo n e imprima n linhas com o 
// seguinte formato (exemplo para n = 6):
//                                       
//                           1           
//                            2          
//                             3         
//                              4        
//                               5       
//                                6      



#include <stdio.h>

int main()
{
    int i, numLinhas;

    printf("Digite um numero inteiro de linhas: ");
    scanf("%d", &numLinhas);

    for(i = 1; i <= numLinhas; i++){
        printf("%*d\n", i + 1, i);
    }

    return 0;
}

// Leia um número inteiro e imprima o seu antecessor e o seu sucessor:

#include <stdio.h>

int main(){
    
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("antecessor: %d\nSucessor: %d\n", num-1, num+1);

    return 0;
}

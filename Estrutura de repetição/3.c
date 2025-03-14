// Faça um programa C que leia dez números que representem as notas de dez alunos, e 
// que apresente:
// a) a soma dos números;
// b) a média dos números;
// c) o maior número;
// d) o menor número
// Considere que as notas são informadas corretamente no intervalo de 1 a 10


#include <stdio.h>
#define num 10

int main()
{
    int i, nota, maiorNum, menorNum, soma;
    float media;

    maiorNum = 0;
    menorNum = 0;
    soma = 0;

    for(i = 1; i <= num; i++){
        printf("Digite a nota: ");
        scanf("%d", &nota);
        if(nota >= maiorNum){
            maiorNum = nota;
        }else{
            menorNum = nota;
        }

        soma += nota;
    }

    media = soma / 10.0;

    printf("A soma das notas é: %d\n", soma);
    printf("A média das notas é: %.2f\n", media);
    printf("A maior nota é: %d, e a menor nota é: %d\n", maiorNum, menorNum);
    
    return 0;
}

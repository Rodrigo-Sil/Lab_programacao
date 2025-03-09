// Desenvolva um programa que recebe três notas de um aluno e uma letra. Se a letra for A, calcula a 
// média aritmética das notas do aluno, se for P, calcula a sua média ponderada (pesos: 5, 3 e 2)



#include <stdio.h>
#include <ctype.h>


float mediaAritmetica(float num1, float num2, float num3);
float mediaPonderada(float num1, float num2, float num3);


int main()
{
    float nota1, nota2, nota3, media;
    char escolha;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    printf("Digite A para média aritimética ou P para média ponderada: ");
    getchar();
    scanf("%c", &escolha);

    escolha = toupper(escolha);

    switch (escolha)
    {
    case 'A':

        media = mediaAritmetica(nota1, nota2, nota3);
        printf("A média aritmética das notas do aluno é: %.2f\n", media);

        break;

    case 'P':

        media = mediaPonderada(nota1, nota2, nota3);
        printf("A média ponderada das notas do aluno é: %.2f\n", media);
        
        break;

    default:
        printf("Opção inválida\n");
        break;
    }
    return 0;
}

float mediaAritmetica(float num1, float num2, float num3){
    
    float resultado = (num1 + num2 + num3) / 3.0;
    return resultado;

}

float mediaPonderada(float num1, float num2, float num3){

    float nota1, nota2, nota3, resultado;
    
    nota1 = num1 * 5;
    nota2 = num2 * 3;
    nota3 = num3 * 2;

    resultado = (nota1 + nota2 + nota3) / 10.0;

    return resultado;

}

// Suponha que uma pessoa possa se aposentar pelo INSS caso atenda alguma das situações abaixo:
// • É do sexo masculino, possui pelo menos 65 anos e pelo menos 10 anos de contribuição.
// • É do sexo masculino, possui pelo menos 63 anos e pelo menos 15 anos de contribuição.
// • É do sexo feminino, possui pelo menos 63 anos e pelo menos 10 anos de contribuição.
// • É do sexo feminino, possui pelo menos 61 anos e pelo menos 15 anos de contribuição.
// Crie um programa que leia um caractere (‘M’ ou ‘F’), que representa o sexo de um indivíduo, e 
// dois inteiros, que representam a idade e o tempo de contribuição. O programa deverá então 
// imprimir “Aposentável” se o indivíduo atenda uma das situações acima. Caso contrário, o 
// programa deverá imprimir “Não Aposentável”:



#include <stdio.h>
#include <stdbool.h>

int main(){
    int idade, anosCotribuicao;
    char genero;

    printf("Digite M para masculno ou F para feminino: ");
    scanf("%c", &genero);

    if(genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f')
    {
        while (true)
        {
            printf("Entrada invalida!\n");
            printf("Digite M para masculno ou F para feminino: ");
            scanf("%c", &genero);
            if (genero == 'M'|| genero == 'm' || genero == 'F' || genero == 'f')
            {
                break;
            }

        }
        
    }
    
    if (genero == 'F'|| genero == 'f')
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite os anos de contribuicao: ");
        scanf("%d", &anosCotribuicao);
        if(idade >= 63 && anosCotribuicao >= 10)
        {
            printf("Aposentavel\n");
        }
        else if(idade >= 61 && anosCotribuicao >= 15)
        {
            printf("Aposentavel\n");
        }
        else
        {
            printf("Nao Aposentavel\n");
        }
    }

    else
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite os anos de contribuicao: ");
        scanf("%d", &anosCotribuicao);
        if(idade >= 65 && anosCotribuicao >= 10)
        {
            printf("Aposentavel\n");
        }
        else if(idade >= 63 && anosCotribuicao >= 15)
        {
            printf("Aposentavel\n");
        }
        else
        {
            printf("Nao Aposentavel\n");
        }
    }

    return 0;
}

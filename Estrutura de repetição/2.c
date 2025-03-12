// Sabe-se que uma determinada espécie de Bactéria divide-se a cada segundo. Faça
// um programa em C que calcule o número de bactérias obtidas em n segundos. O
// número de segundos deve ser passado pelo usuário

#include <stdio.h>

int main()
{
    unsigned long long bacterias;
    int segundos, ac;

    ac = 0;
    bacterias = 1;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    while(ac < segundos){
        bacterias *= 2 ;
        ac ++;
    }
    
    printf("O número de bacterias depois de %d segundos é: %llu bacterias.\n", segundos, bacterias);
    
    return 0;
}

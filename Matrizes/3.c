// Soma dos elementos de cada uma das linhas da matriz 



#include <stdio.h>



int main(){

    int i, j;
    int soma;
    int x[3][3];

    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 3 ; j++){
            printf("Digite o valor da posicao [%d, %d%s", i, j, "]: ");
            scanf("%d", &x[i][j]);
        }
    }


//mostrar

    for(i = 0 ; i < 3 ; i++){
        soma = 0;
        for(j = 0 ; j < 3 ; j++){
            soma += x[i][j];
        }

        printf("\n");
        printf("Soma linha %d, %d ", i, soma);
    }

    return 0;

}

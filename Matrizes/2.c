// Preenchendo e acessando uma matriz, recebendo dados do usuário



#include <stdio.h>

int main(){

    int i, j;
    int x[3][4];

    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 4 ; j++){
            printf("Digite o valor da posicao [%d, %d%s", i, j, "]: ");
            scanf("%d", &x[i][j]);
        }

    }

//mostrar

    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 4 ; j++){
            printf("%d", x[i][j]);
        }
        printf("\n");
    }

    return 0;

}

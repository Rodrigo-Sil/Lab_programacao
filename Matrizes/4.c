// Procura um elemento na matriz




#include <stdio.h>



int main(){

    int i, j, valor, achou;
    int soma;
    int x[3][3];

    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 3 ; j++){
            printf("Digite um valor da posicao [%d, %d%s", i, j, "]: ");
            scanf("%d", &x[i][j]);
        }
    }

    printf("Digite o valor a ser buscado:", );
    scanf("%d", &valor);
    achou = 0;

//mostrar

    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 3 ; j++){
            if(x[i][j] == valor){
                achou =1;
            }
        }
    }

    if(achou){
        printf("O valor esta na matriz");
    }else{
        printf("O valor não esta na matriz");
    }

    return 0;

}


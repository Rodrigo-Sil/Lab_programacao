//Preenchendo e acessando uma matriz


#include <stdio.h>


int main(){

    int i, j;
    int x[3][4];

    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 4 ; j++){
            x[i][j] = 1;
            if(x[i][j] == x[j][i]){
                x[i][j] = 0;
            }
            
            printf(" %d ", x[i][j]);
        }
        
        printf("\n\n");
        
    }

    return 0;

}

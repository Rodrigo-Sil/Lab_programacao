// Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe
// esses números em pares e ímpares e os armazenem em dois outros vetores chamados
// vetpar e vetimpar. Em seguida, o programa dever apresentar os resultados na tela

#include <stdio.h>

void imprimir(int vetor[], int tamanho);

int main()
{
    int i, j, k, vet1[12];
    
    printf("Digite 12 numeros inteiros:\n");
    
    for(i = 0; i < 12; i++){
        scanf("%d", &vet1[i]);
    }
    
    int vetPar[12], vetImpar[12];
    j = k = 0;
    
    for(i = 0; i < 12; i++){
        if(vet1[i] % 2 != 0){
            vetImpar[j++] = vet1[i];
        }else{
            vetPar[k++] = vet1[i];
        }
    }
    
    
    printf("O vetor par é formado por:\n");
    imprimir(vetPar, k);

    printf("O vetor ímpar é formado por:\n");
    imprimir(vetImpar, j);

    return 0;

}

void imprimir(int vetor[], int tamanho){

    printf("{ ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("}\n");
}

// Escreva um programa para intercalar os valores de dois vetores inteiros crescentes
// de mesmo tamanho em um terceiro vetor, em ordem crescente.
// 
// v1 = [1, 3, 5, 5, 7, 9, 10]
// v2 = [2, 2, 4, 6, 6, 8, 10]
// v3 = [1, 2, 2, 3, 4, 5, 5, 6, 6, 7, 8, 9, 10, 10]

#include <stdio.h>

void ordenarVetor(int vetor[], int tamanho);
int* ordenarEVetor(int vetor[], int tamanho);
void imprimirVetor(int vetor[], int tamanho);

int main()
{
    int i, j, k, TAM_MAX, temp;

    printf("Defina o tamanho do vetor 1: ");
    scanf("%d", &TAM_MAX);
    
    int vet1[TAM_MAX];

    printf("Digite os valore do vetor 1:\n");
    for(i = 0; i < TAM_MAX; i++){
        scanf("%d", &vet1[i]);
    }
    ordenarVetor(vet1, TAM_MAX);

    temp = TAM_MAX;

    printf("Defina o tamanho do vetor 2: ");
    scanf("%d", &TAM_MAX);

    int vet2[TAM_MAX];
    
    printf("Digite os valore do vetor 2:\n");
    for(j = 0; j < TAM_MAX; j++){
        scanf("%d", &vet2[j]);
    }

    ordenarVetor(vet2, TAM_MAX);

    temp += TAM_MAX;

    i = j = k = 0;

    int vet3[temp];

    while(i < TAM_MAX || j < TAM_MAX)
    {
        if(vet1[i] <= vet2[j]){
            vet3[k++] = vet1[i++];
        }else{
            vet3[k++] = vet2[j++];
        }
    }

    while (i < TAM_MAX)
    {
        vet3[k++] = vet1[i++];
    }

    while (j < TAM_MAX)
    {
        vet3[k++] = vet2[j++];
    }


    imprimirVetor(vet3, temp);

    return 0;
}

void ordenarVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        int indiceMin = i;
        for(int j = i + 1; j < tamanho; j++){
            if(vetor[j] < vetor[indiceMin]){
                indiceMin = j;
            }
        }
        int temp = vetor[i];
        vetor[i] = vetor[indiceMin];
        vetor[indiceMin] = temp;
    }
}

int* ordenarEVetor(int vetor[], int tamanho){
    ordenarVetor(vetor, tamanho);
    return vetor;
}

void imprimirVetor(int vetor[], int tamanho){
    printf("vet3 = { ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("}\n");
}

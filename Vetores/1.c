#include <stdio.h>
#include <ctype.h>
#define TAM_MAX 10

int buscaLinear(int vetor[], int tamanho, int x);
void ordenarVetor(int vetor[], int tamanho);
int* ordenarEVetor(int vetor[], int tamanho);
int buscaBinaria(int vetor[], int tamanho, int x);
void imprimirVetor(int vetor[], int tamanho);

int main(){
    int i, vetor[TAM_MAX], x;
    char busca, maiusculo;

    printf("Digite os valores a serem adicionados ao vetor\n");
    for(i = 0; i < TAM_MAX; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &x);
    getchar(); 

    printf("Qual tipo de busca deseja realizar (L - linear ou B - binária): ");
    scanf("%c", &busca);

    maiusculo = toupper(busca); 

    switch (maiusculo){
        case 'L':
            int posLinear = buscaLinear(vetor, TAM_MAX, x);
            if (posLinear < 0)
                printf("O valor não está na lista!\n");
            else
                printf("O valor %d está na posição %d do vetor!\n", x, posLinear);
            break;
        
        case 'B':
            int posBinaria = buscaBinaria(vetor, TAM_MAX, x);
            if(posBinaria < 0)
                printf("O valor não está na lista!\n");
            else
                printf("O valor %d está na posição %d do vetor!\n", x, posBinaria);
            break;
        
        default:
            printf("Opção inválida!\n");
            break;
    }
    return 0;
}

int buscaLinear(int vetor[], int tamanho, int x){
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] == x)
            return i;
    }
    return -1;
}

void ordenarVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho - 1; i++){
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

int buscaBinaria(int vetor[], int tamanho, int chave){

    printf("Ordenando vetor para realizar a busca binária...\n");
    imprimirVetor(vetor, tamanho);
    ordenarVetor(vetor, tamanho);
    printf("imprimindo vetor ordenado...\n");
    imprimirVetor(vetor, tamanho);
    printf("Buscando valor no vetor...\n");

    int esquerda = 0, direita = tamanho - 1;

    while(esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if(vetor[meio] == chave){
            return meio;
        }

        if(vetor[meio] < chave){
            esquerda = meio + 1;
        }else{
            direita = meio - 1;
        }
    }
    return -1;
}

void imprimirVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

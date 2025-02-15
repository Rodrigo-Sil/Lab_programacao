// Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação 
// escolhida. Escreva uma mensagem de erro se a opção for invalida:

#include <stdio.h>
#include <stdbool.h>

int main(){

    float num1, num2, maior, menor;
    int opcao;


    printf("Escollha a opção:\n1 - Soma de dois numeros\n2 - Diferença de dois numeros (maior pelo menor)\n3 - Produto entre dois numeros\n4 - Divisão entre dois numeros (o denominador não ṕode ser 0)");
    printf("\nOpção: ");
    scanf("%d", &opcao);
    
    switch (opcao){
    case 1:
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        printf("A soma de %.2f com %.2f resullta em %.2f\n", num1, num2, num1 + num2);
        break;
    case 2:
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        if (num1  == num2){
        maior = num1;
        menor = num2;
        }
        else if(num1 > num2){
        maior = num1;
        menor = num2;
        }
        else{
        maior = num2;
        menor = num1;
        }

        printf("A diferença entre %.2f e %.2f resullta em %.2f\n", maior, menor, maior - menor);
        break;
    case 3:
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        printf("A produto de %.2f e %.2f resullta em %.2f\n", num1, num2, num1 * num2);
        break;
    case 4:
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        if(num2 == 0){
            while (true)
            {
                printf("Numero inválido!\n");
                printf("Digite um numero válido: ");
                scanf("%f", &num2);
                if (num2 != 0){
                    break;
                }
                continue;
            }
            
        }
        printf("A divisão de %.2f por %.2f resullta em %.2f\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    
    return 0;
}
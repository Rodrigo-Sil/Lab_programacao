// Faça um programa que leia dois conjuntos de dois valores, o primeiro
// representando o número do aluno e o segundo representando a sua altura em
// centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número do aluno
// mais alto, e o número do aluno mais baixo, juntamente com suas alturas


#include <stdio.h>


int main() {
    int numAluno, alunoMaisAlto, alunoMaisBaixo;
    float altura, alturaMaisAlta = 0, alturaMaisBaixa = 9999;
    int contador = 0;
    
    while (contador < 2) {
        printf("Digite o número do aluno: ");
        scanf("%d", &numAluno);
        printf("Digite a altura do aluno (em cm): ");
        scanf("%f", &altura);
        
        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            alunoMaisAlto = numAluno;
        }
        
        if (altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            alunoMaisBaixo = numAluno;
        }
        
        contador++;
    }
    
    printf("Aluno mais alto: %d com %.2f cm\n", alunoMaisAlto, alturaMaisAlta);
    printf("Aluno mais baixo: %d com %.2f cm\n", alunoMaisBaixo, alturaMaisBaixa);
    
    return 0;
}

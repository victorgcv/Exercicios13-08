#include <stdio.h>
#include <locale.h>

/*  Exercício 11
    11. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a
sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).
*/


    // pede as notas
    // realiza o calculo
    // printa a media ponderada
int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2, n3;
    float media, ponderada;
    
    printf("Insira suas três notas:");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    media = n1*1 + n2*2 + n3*3;
    ponderada = media / (1 + 2 + 3);
    
    
    printf("\nSua média ponderada é: %.2f.", ponderada);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale ( LC_ALL, "Portuguese");
    /*4. Faça um algoritmo que recebe dois valores representando as medidas da base e da
altura de um triângulo qualquer e exiba a área deste triângulo.*/

    // Fórmula = A = (base.altura) / 2
    // 01 - pedir ao usuário para informar a altura;
    // 02 - pedir ao usuario para informar a base ;
    // realizar o calculo com os valores obtidos;
    //retornar ao usuario a area do triangulo com base nas medidas fornecidas.

    
    float base;
    float altura;
    int area;
    printf("Digite a medida da altura do Triângulo:");
    scanf("%f", &altura);
    printf("Digite a medida da base do Triângulo:");
    scanf("%f", &base);

    area = (altura * base) / 2 ;
    printf("\nA Área do seu Triângulo é: %.2d", area);

}

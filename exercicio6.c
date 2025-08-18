#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale ( LC_ALL, "Portuguese");

    /* 6. Faça um algoritmo que solicite ao usuário o valor do salário do mesmo e a
porcentagem de aumento. Exiba o valor do aumento e o valor do salário acrescido do
aumento.    */

    // perguntar o valor do salario em R$;
    // perguntar a porcentagem do aumento;
    // realizer o calculo;
    // printar a variavel do salario, auemento e do total;

    float salario;
    float porcentagem;
    float aumento;
    float novosalario;

    printf(" Qual o valor do salário? ");
    scanf("%f", &salario);

    printf(" Qual o percentual de aumento? ");
    scanf("%f", &porcentagem);

    aumento = salario * porcentagem / 100.0;
    novosalario = salario + aumento;


    printf("\nSeu salário atual no valor de R$ %.2f passará a ser R$ %.2f com o aumento de %.2f%%.", salario, novosalario, porcentagem);
}

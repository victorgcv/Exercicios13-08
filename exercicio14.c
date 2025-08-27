#include <stdio.h>
#include <locale.h>

/*  14. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após
o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o
aumento e o salário final. */


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // solicitar o salario
    // aumenta em 15%
    // reduzir 8% do novo salario 
    // printar os salarios
    
    float salario, novosalario, salariototal;
    
    printf("Digite o salário atual: ");
    scanf("%f", &salario);
    
    novosalario = salario + salario * (15.0 / 100.0);
    
    salariototal = novosalario - (novosalario * 8.0 / 100.0);
    
    printf("\nSalário atual:R$ %.2f", salario);
    printf("\nSalário com aumento: R$ %.2f", novosalario);
    printf("\nSalário final com desconto dos impostos: R$ %.2f", salariototal);
    
}

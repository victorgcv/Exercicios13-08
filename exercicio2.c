#include <stdio.h>
#include <locale.h>

int main    ()
{
    /*2. Faça um algoritmo que solicite ao usuário um valor e exiba o dobro do valor.*/
    setlocale(  LC_ALL, "Portuguese");
    float numero, dobro; 
    printf("Digite um número para saber o seu dobro:");
    scanf("%f", &numero);
    dobro = (numero * 2);
    printf("\n");
    printf("\nO dobro do seu número é: %f", dobro);

}

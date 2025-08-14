#include <stdio.h>
#include <locale.h>

int main ()
{
  /*1. Faça um algoritmo que solicita ao usuário um número real e exibe na tela a metade do
número digitado.*/
    
    setlocale( LC_ALL, "Portuguese") ;
    float numero ;
    float metade ;
    printf("Digite um número para saber sua metade:") ;
    
    //diz que o numero real deve ser armazenado no numero, ou seja, o "float numero" deve ser um numero real/float/double
    scanf("%f", &numero) ;
    
    metade = (numero /2) ;
    
    printf( "\n A metade do seu número é: %f\n", metade ) ;
  
}

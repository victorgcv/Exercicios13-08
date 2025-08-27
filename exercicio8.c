#include <stdio.h>
#include <locale.h>

int main()
{
     setlocale( LC_ALL, "Portuguese") ;
     
     /*
        8. Faça um algoritmo para um terminal de auto-atendimento bancário que realiza
saques em dinheiro. O programa deve solicitar ao usuário qual o valor a ser retirado e
deve exibir na tela qual a quantidade de cada cédula será entregue ao usuário. O
programa sempre deve tentar utilizar o menor número possível de cédulas. A máquina
possui apenas cédulas de R$ 10, 5 e 1. Você deve exibir as variáveis que contem a
quantidade de cédulas na seguinte ordem: 10,5,1.
     */
     
     //solicita o saque
     //quantas notas de 10 (valor/10) notas de 5  (valor/5) notas de 1 (valor/sobra)
     //printar a quantidade de cada cedula 10, 5 e 1
     //
     
     int valor;
     int n10;
     int n5;
     int n1;
     
     printf("Digite o valor a ser sacado: ");
     scanf("%d", &valor);
     
     
     n10 = valor / 10;
     valor = valor % 10;
     
     n5 = valor / 5;
     valor = valor % 5;
     
     n1 = valor; //notas de 1
     
     printf("Seu saque será realizado com as seguintes notas:");
     printf("\n%d Notas de R$ 10,00", n10);
     printf("\n%d Notas de R$ 5,00", n5);
     printf("\n%d Notas de R$ 1,00", n1);
     
     
}

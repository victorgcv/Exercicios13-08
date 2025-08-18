#include <stdio.h>

int main()
{
    /* 7. Leia dois valores para as variáveis A e B, e efetue a troca dos valores de forma que a
variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da
variável A. Ao final, exiba os resultados. Obs.: deverão ser feitos dois algoritmos: no
primeiro poderá ser usada uma terceira variável. No segundo somente as variáveis A e
B. */
    
    // criar a variavel a
    // criar a variavel b
    // criar terceira variavel x 
    // pedir os valores
    // imprimir os valores trocados
    
    int a;
    int b;
    int x;
    
    printf("Digite o valor da variável A:");
    scanf("%d", &a);
    
    printf("Digite o valor da variável B:");
    scanf("%d", &b);
    
    x = a;
    a = b;
    b = x;
    
    printf("Dessa forma:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
     
}

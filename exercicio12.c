#include <stdio.h>
#include <locale.h>

/*  12. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma
sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o
usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a
uma venda, e a máquina informe quanto será o valor arrecadado.*/


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int p, m, g;
    float valortotal;
    
    printf("Insira a quantidade de camisetas Pequenas, Medias e Grandes:");
    scanf("%d %d %d", &p, &m, &g);
    
    p = p*10;
    m = m*12;
    g = g*15;
    
    valortotal = p + m + g;
    
    printf("Valor total da venda: R$ %.2f", valortotal);

}

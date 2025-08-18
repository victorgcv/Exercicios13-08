#include <stdio.h>
#include <locale.h>

int main()
{
    
    setlocale( LC_ALL, "Portuguese") ;
    
    /*
        10. A padaria AJB vende uma certa quantidade de pães franceses e uma quantidade de
broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o
dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto
deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado
para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as
quantidades de pães e de broas, e depois calcular os dados solicitados.
    */
    
    // paes = quantia de paes * 0,12
    // broas = quantia de broas * 1,50
    // quanto arrecadou = vendas dos paes + broas
    // deve guardar arrecadou * 10/100
    
    
    int paes;
    float totalpaes;
    int broas;
    float totalbroas;
    float arrecadou;
    float guardar;
    
    printf("Quantos pães foram vendidos?");
    scanf("%d", &paes);
    
    printf("Quantas broas foram vendidas?");
    scanf("%d", &broas);
    
    totalpaes = paes * 0.12;
    
    totalbroas = broas * 1.50;
    
    arrecadou = totalpaes + totalbroas;
    
    guardar = arrecadou * 10 / 100;
    
    printf("Você arrecadou R$ %.2f. O valor a ser guardado é R$ %.2f.", arrecadou, guardar);
    

}

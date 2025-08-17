#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale ( LC_ALL, "Portuguese");
    /*Faça um algoritmo que calcula os gastos com combustível em uma viagem. O
algoritmo deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do
carro em Km/litro e o preço do litro do combustível. Como resposta o programa deverá
informar qual o valor em R$ a ser gasto com combustível na viagem.*/

    // solicitar a distancia a ser percorrida em Km ao usuario
    // solicitar o consumo do veiculo em km/litro
    // solicitar o preco do combustivel

    // informar o valor a ser gasto (R$)
    // distancia/autonomia * litros reais


    float distancia;
    float autonomia;
    float preco;
    float litros;
    float valor;


    printf("Qual a distância da sua viagem? (Km)");
    scanf("%f", &distancia);

    printf("Qual a autonomia do seu veículo? (Km/l)");
    scanf("%f", &autonomia);

    printf("Qual o preço do litro do combustível? (R$)");
    scanf("%f", &preco);

    litros = distancia / autonomia;

    valor = litros * preco;

    printf("\nO valor gasto de combustível será: R$ %.2f", valor);

}

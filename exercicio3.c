#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale ( LC_ALL, "Portuguese");
    /*3. Faça um algoritmo que calcule a velocidade média de um trajeto com base na
distância percorrida e no tempo (em decimal) usado para isso.*/

    float distancia;
    float tempo;
    float velocidademedia;
    printf("Digite a distância do seu trajeto em Km:");
    // diz que a distancia é um numero decimal (%f) e está armazenada na variavel distancia
    scanf("%f", &distancia);
    printf("Digite o tempo do seu trajeto em horas decimais:");
    // diz que o tempo é um numero decimal (%f) e está armazenado na variavel tempo
    scanf("%f", &tempo);

    velocidademedia = ( distancia/tempo );
    printf("\nSua Velocidade Média foi de: %.2f Km/h durante o seu trajeto.\n", velocidademedia);

}


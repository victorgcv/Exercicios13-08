#include <stdio.h>
#include <locale.h>

int main()
{

  setlocale ( LC_ALL, "Portuguese");
  
    /*
        9. A imobiliária AJB vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno.
    */
    
    // soliitar a medida 1 do terreno
    // solicitar a medida 2 do terreno
    // realizar calculo da area do retangulo
    
    
    float base;
    float altura;
    float area;
    
    printf("Insira a medida da base do terreno:"); 
    scanf("%f", &base);
    
    printf("Insira a medida da altura do terreno:");
    scanf("%f", &altura);
    
    area = base * altura ;
    
    printf("\nA área do terreno é: %.2f m².",area );
}

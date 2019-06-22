De acordo com uma tabela médica, o peso ideal está relacionado com a altura e o sexo. Elabore um algoritmo que receba altura e 
sexo de uma pessoa e calcule e imprima o seu peso ideal, sabendo que:
Homens
(72.7 * altura) - 58
Mulheres
(62.1 * altura) - 47.7

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sexo;
    float altura, peso_ideal;

    printf("Informe seu genero:\n[1] - Masculino\n[2] - Femenino\n");
    scanf("%i", &sexo);
    printf("Informe sua altura em metros:");
    scanf("%f", &altura);

    if (sexo == 1)
    {
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2fKg.", peso_ideal);
    }
    else
    {
        peso_ideal = (62.1 * altura) - 47.7;
        printf("Seu peso ideal é %.2fKg.", peso_ideal);
    }

    return 0;
}

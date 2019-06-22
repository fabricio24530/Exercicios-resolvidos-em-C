Faça um programa que receba o código do estado de origem da carga de um caminhão, o peso da carga em toneladas e o código da 
carga. Calcule e apresente: o peso da carga em quilos, o preço da carga, o valor do imposto e o valor total da carga (preço da 
carga mais imposto).
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cod_est, cod_car;
    float peso_t, peso_q, imposto, valor_carga, nvalor_carga;

    printf("Informe o codigo do estado:\n[1] - Ceara\n[2] - Rn\n[3] - Pará\n[4] - Sergipe\n");
    scanf("%i", &cod_est);
    printf("Informe o peso da carga em tonelada:\n");
    scanf("%f", &peso_t);

    peso_q = peso_t * 1000;

    printf("Informe o codigo da carga:");
    scanf("%i", &cod_car);

    if ( cod_car >= 10 && cod_car <= 20)
    {
        valor_carga = peso_q * 180;
    }
    if ( cod_car >= 21 && cod_car <= 30)
    {
        valor_carga = peso_q * 120;
    }
    if ( cod_car >= 31 && cod_car <= 40)
    {
        valor_carga = peso_q * 230;
    }
    if ( cod_car < 10 || cod_car > 40)
    {
        printf("Codigo da carga incorreto\n");
    }


    switch (cod_est)
    {
    case 1:
        imposto = valor_carga * 0.2;
        break;
    case 2:
        imposto = valor_carga * 0.15;
        break;
    case 3:
        imposto = valor_carga * 0.1;
        break;
    case 4:
        imposto = valor_carga * 0.05;
        break;
    }

    nvalor_carga = valor_carga + imposto;

    printf("O peso da carga em kg é: %.2f\nO preço da carga é: R$ %.2f\nO valor do ICMS é: R$ %.2f\nO valor final é: R$ %.2f", peso_q, valor_carga, imposto, nvalor_carga);

    return 0;
}

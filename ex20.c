Faça um programa que informe a quantidade total de calorias a partir da escolha do usuário que deve informar o prato típico e
a bebida. A Tabela de calorias encontra-se abaixo.

PRATO e BEBIDA
Italiano 750cal
Chá 30cal
Japonês 324cal
Suco de Laranja 80cal
Salvadorenho 545cal
Refrigerante 90cal

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prato, bebida, total, cal_prato, cal_bebida;

    printf("Escolha o prato:\n[1] - Italiano\n[2] - Japones\n[3] - Salvadorenho\n");
    scanf("%i", &prato);
    printf("Escolha uma bebida:\n[1] - Chá\n[2] - Suco de laranja\n[3] - Refrigerante\n\n");
    scanf("%i", &bebida);

    switch (prato)
    {
    case 1:
        cal_prato = 750;
        break;
    case 2:
        cal_prato = 324;
        break;
    case 3:
        cal_prato = 545;
        break;

    }

    switch (bebida)
    {
    case 1:
        cal_bebida = 30;
        break;
    case 2:
        cal_bebida = 80;
        break;
    case 3:
        cal_bebida = 90;
        break;

    }

    total = cal_bebida + cal_prato;

    printf("O total de calorias de seu prato mais sua bebidade é de %ical.", total);

    return 0;
}

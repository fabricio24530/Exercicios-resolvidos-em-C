/*Faça um programa que leia uma palavra e o número de vezes que se deseja imprimi-la.*/

#include <stdio.h>

int main(void)
{
    char nome[15];
    int repetir, i;

    printf("Informe uma palvra: \n");
    scanf("%s", &nome);
    printf("Quantas vezes deseja repeti-la: \n");
    scanf("%i", &repetir);
    for (i = 0; i < repetir; ++i)
    {
        printf("%s\n", nome);
    }

    return 0;
}

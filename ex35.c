/*Faça um programa que leia um número inteiro e calcule o seu fatorial.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i, fat;
    printf("Informe um numero: \n");
    scanf("%i", &num);

    fat = 1;
    for (i = 1; i <= num; i++)
        {
            fat = fat * i;
        }

    printf("O fatorial de %i é %i.", num, fat);

    return 0;
}

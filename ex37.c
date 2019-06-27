/*Construa um programa que receba um número inteiro maior que 1 e verifique se ele é primo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, cont;
    cont = 0;
    printf("Informe um numero inteiro maior que 1: \n");
    scanf("%i", &num);

    for (i = 1; i <= num; i++)
    {
        if ( num%i == 0)
        {
            cont++;
        }
    }

    if ( cont == 2)
    {
        printf("O numero %i é primo.", num);
    }
    else
    {
        printf("O numero %i não é primo.", num);
    }

    return 0;
}

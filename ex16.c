Faça um programa que leia um número e informe se ele é divisível por 5.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%i", &num);

    if (num%5 == 0)
    {
        printf("O numero %i é divisivel por 5.", num);
    }
    else
    {
        printf("O numero %i não é divisivel por 5.", num);
    }

    return 0;
}

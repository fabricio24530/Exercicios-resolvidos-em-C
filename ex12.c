Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int num;

    printf("Informe um numero inteiro:");
    scanf("%i", &num);

    if (num%3 == 0 && num%7 == 0)
    {
        printf("O numero %i é divisivel por 3 e por 7.", num);
    }
    else
    {
        printf("O numero %i não é divisivel por 3 e por 7.", num);
    }

    return 0;
}

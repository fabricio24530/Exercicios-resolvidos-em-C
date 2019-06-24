Faça um programa que leia números inteiros até que seja informado o valor 0. Apresente a média dos valores, o maior e o menor valor e a quantidade de números pares e ímpares.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma, cont, pares, impares, maior, menor, aux;
    float media;
    soma = cont = 0;

    printf("Informe um numero: \n");
    scanf("%i", &num);
    pares = impares = 0;

    if ( num % 2 == 0 && num != 0)
    {
        pares++;
    }
    else
    {
        if (num % 2 != 0 && num != 0)
        {
            impares++;
        }
    }
    maior = num;
    menor = num;

    do
    {

        cont++;
        soma = soma + num;
        media = (float)soma / cont;
        printf("Informe um numero: \n");
        scanf("%i", &num);

        if ( num > maior)
        {

            maior = num;

        }
        else
        {
            if ( (num < maior) && (num != 0) && (num < menor))
            {
                menor = num;
            }
        }

        if ( num % 2 == 0 && num != 0)
        {
            pares++;
        }
        else
        {
            if (num % 2 != 0 && num != 0)
            {
                impares++;
            }
        }

    }
    while ( num != 0);

    printf("A media dos numeros digitados é de: %.2f\n", media);
    printf("Quantidade de pares digitados: %i\n", pares);
    printf("Quantidade de impares digitados: %i\n", impares);
    printf("O maior numero e: %i\n", maior);
    printf("O menor numero e: %i", menor);

    return 0;
}


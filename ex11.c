Escreva um programa que receba cinco números inteiros e apresente o maior e o menor:

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, n5;

    printf("Informe o primeiro numero:");
    scanf("%i", &n1);
    printf("Informe o segundo numero:");
    scanf("%i", &n2);
    printf("Informe o terceiro numero:");
    scanf("%i", &n3);
    printf("Informe o quarto numero:");
    scanf("%i", &n4);
    printf("Informe o quinto numero:");
    scanf("%i", &n5);

    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
    {
        printf("%i é o maior numero./n", n1);
    }
    else
    {
        if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
        {
            printf("%i é o maior numero.\n", n2);
        }
        else
        {
            if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
            {
                printf("%i é o maior numero.\n", n3);
            }
            else
            {
                if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5 )
                {
                    printf("%i é o maior numero.\n", n4);
                }

                else
                {
                    if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4)
                    {
                        printf("%i é o maior numero.\n", n5);
                    }
                }
            }
        }
    }

    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
    {
        printf("%i é o menor numero.\n", n1);
    }
    else
    {
        if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
        {
            printf("%i é o menor numero.\n", n2);
        }
        else
        {
            if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
            {
                printf("%i é o menor numero.\n", n3);
            }
            else
            {
                if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
                {
                    printf("%i é o menor numero.\n", n4);
                }
                else
                {
                    if (n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
                    {
                        printf("%i é o menor numero.\n", n5);
                    }
                }
            }
        }
    }

    return 0;
}

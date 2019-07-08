/* Faça um programa que leia dois vetores A e B e apresente a diferença entre os elementos.*/

#include <stdio.h>
#define max 5

int main(void)
{

    int vetor_a[max], vetor_b[max], a, b, i, iguais, diferentes;
    a = b = i = iguais = diferentes = 0;

    for (a = 0; a < max; a++)
    {
        printf("Informe o %iº elemento do vetor A:", a + 1);
        scanf("%i", &vetor_a[a]);

    }
    printf("\n");

    for (b = 0; b < max; b++)
    {
        printf("Informe o %iº elemento do vetor B:", b + 1);
        scanf("%i", &vetor_b[b]);

    }
    printf("\n");

    for ( i = 0; i < max; ++i)
    {
        if (vetor_a[i] == vetor_b[i])
        {
            iguais++;
        }
        else
        {
            diferentes++;
        }

    }
    printf("O numero de elementos iguais é: %i\n", iguais);
    printf("O numero de elementos diferentes é: %i\n", diferentes);

    return 0;
}

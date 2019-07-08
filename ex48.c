/*Escreva um programa que leia um vetor A e o apresente em ordem decrescente.*/

#include <stdio.h>

int main(void)
{
   int vetor[5] = {0};
   int i, j, aux;

   for(i = 0; i < 5; ++i)
   {
        printf("Informe o %iº elementos do vetor:\n", i + 1);
        scanf("%i", &vetor[i]);
   }
   i = 0;

   for (i = 0; i < 4; i++)
   {
    for(j = i + 1; j < 5; j++)
    {
        if (vetor[i] < vetor[j])
        {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }
   }
   i = 0;

   for (i = 0; i < 5; i++)
   {
    printf("%i ", vetor[i]);
   }

    return 0;
}

/*Ordene um vetor utilizando o bublle sort.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

int vetor[5], i, j, aux;

for (i = 0; i < 5; i++)
{
    printf("Informe um valor:\n");
    scanf("%i", &vetor[i]);
}

for (i = 0; i < 4; i ++)
{
    for( j = i + 1 ; j < 5; j++)
    {
        if ( vetor[i] > vetor[j])
        {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }

    }
}

for (i = 0; i < 5; i++)
{
    printf("%i  ", vetor[i]);
}

    return 0;
}

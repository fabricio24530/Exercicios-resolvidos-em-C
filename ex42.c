/* Crie uma forma de achar o indice que se encontra um elemento em um vetor*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[5], i, busca, acha;

    for (i = 0; i < 5; i++)
    {
        printf("Informe um valor:\n");
        scanf("%i", &vetor[i]);
    }

    printf("Informe o elemento a ser procurado:\n");
    scanf("%i", &busca);

    acha = 0;
    i = 0;


    while (( acha == 0) && (i < 5))
    {
        if (vetor[i] == busca)
        {
            acha = 1;

        }
        else
        {
            i++;

        }

    }
    if (acha == 1)
    {
        printf("O valor %i se encontra no indice %i do vetor.", busca, i);
    }
    else
    {
        printf("O valor %i não existe no vetor.", busca);
    }

    return 0;
}

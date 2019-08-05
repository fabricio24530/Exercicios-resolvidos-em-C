/* Função que inicialize qualquer vetor de inteiros com zero em todos os indices*/

#include <stdio.h>
#include <string.h>

void iniz(int v[], int n)
{
    int i;
    for(i = 0; i < n; ++i)
        v[i] = 1;
}

int main(void)
{

    int vetor[14];

    iniz(vetor, 14);

    return 0;
}

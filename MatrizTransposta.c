#include <stdio.h>

#define MAX 3

void transpor(int v[][MAX]) // cria uma matriz transposta, ou seja, linha vira coluna e coluna vira linha
{
    int i, j,t[MAX][MAX];

    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            t[i][j] = v[j][i];
        }
    }

    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            printf("%d ", t[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int matriz[MAX][MAX], i, j, soma;

    for(i = 0, soma = 1; i < MAX; i++) // coloca uma sequencia de 1 a 9
    {
        for(j = 0; j < MAX; j++)
        {
            matriz[i][j] = soma;
            soma++;
        }
    }

    for(i = 0; i < MAX; i++) // coloca uma sequencia de 1 a 9
    {
        for(j = 0; j < MAX; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        putchar('\n');
    }

    printf("\n\n\n");
    transpor(matriz);

    return 0;
}

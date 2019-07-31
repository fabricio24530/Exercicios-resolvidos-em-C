/*Mostre a tabela ASCII em um determinado intervalo*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, n1, n2;

    printf("Informe dois numeros inteiros entre 0 e 255:\n");
    fflush(stdin);
    scanf("%d %d", &n1, &n2);
    if (n1 < n2)
    {
        for(i=n1; i<=n2; ++i)
        {
            printf("%d ----> %c\n", i, (char)i);
        }
    }
    else
    {
        for(i=n2; i<=n1; ++i)
        {
            printf("%d ----> %c\n", i, (char)i);
        }
    }
    
    return 0;
}

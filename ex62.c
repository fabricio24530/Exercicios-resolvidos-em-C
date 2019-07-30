/*Triangulo retangulo com numeros*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%hu ", j);
        }
        putchar('\n');
    }

    return 0;
}

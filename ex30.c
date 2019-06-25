Construa um programa que apresente todos os números divisíveis por 3 e por 7 que sejam menores que 100.

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int i;

    i = 1;
    for ( i = 1; i < 100; i++)
    {
        if ((i%3==0) && (i%7==0))
        {
            printf("%i ", i);
        }
    }

    return 0;
}
